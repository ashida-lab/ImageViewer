#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Security::Cryptography;
using namespace System::Net::NetworkInformation;
using namespace System::Collections;

ref class yaCipher
{
public:
	yaCipher();

	//�Í���
	static array<Byte>^ encryptStringToBytes_AES(System::String^ plainText, array<Byte>^ Key, array<Byte>^ IV)
	{
		// Check arguments.
		if (!plainText || plainText->Length <= 0)
			throw gcnew ArgumentNullException("plainText");
		if (!Key || Key->Length <= 0)
			throw gcnew ArgumentNullException("Key");
		if (!IV || IV->Length <= 0)
			throw gcnew ArgumentNullException("IV");

		// Declare the streams used
		// to encrypt to an in memory
		// array of bytes.
		MemoryStream^   msEncrypt;
		CryptoStream^   csEncrypt;
		StreamWriter^   swEncrypt;

		// Declare the RijndaelManaged object
		// used to encrypt the data.
		RijndaelManaged^ aesAlg;

		try
		{
			// Create a RijndaelManaged object
			// with the specified key and IV.
			aesAlg = gcnew RijndaelManaged();
			aesAlg->Padding = PaddingMode::PKCS7;
			aesAlg->Key = Key;
			aesAlg->IV = IV;

			// Create an encryptor to perform the stream transform.
			ICryptoTransform^ encryptor = aesAlg->CreateEncryptor(aesAlg->Key, aesAlg->IV);

			// Create the streams used for encryption.
			msEncrypt = gcnew MemoryStream();
			csEncrypt = gcnew CryptoStream(msEncrypt, encryptor, CryptoStreamMode::Write);
			swEncrypt = gcnew StreamWriter(csEncrypt);

			//Write all data to the stream.
			swEncrypt->Write(plainText);
			swEncrypt->Flush();
			csEncrypt->FlushFinalBlock();
			msEncrypt->Flush();
		}
		finally
		{
			// Clean things up.

			// Close the streams.
			if (swEncrypt)
				swEncrypt->Close();
			if (csEncrypt)
				csEncrypt->Close();


			// Clear the RijndaelManaged object.
			if (aesAlg)
				aesAlg->Clear();
		}

		// Return the encrypted bytes from the memory stream.
		return msEncrypt->ToArray();
	}

	//������
	static System::String^ decryptStringFromBytes_AES(array<Byte>^ cipherText, array<Byte>^ Key, array<Byte>^ IV)
	{
		// Check arguments.
		if (!cipherText || cipherText->Length <= 0)
			throw gcnew ArgumentNullException("cipherText");
		if (!Key || Key->Length <= 0)
			throw gcnew ArgumentNullException("Key");
		if (!IV || IV->Length <= 0)
			throw gcnew ArgumentNullException("IV");

		// TDeclare the streams used
		// to decrypt to an in memory
		// array of bytes.
		MemoryStream^ msDecrypt;
		CryptoStream^ csDecrypt;
		StreamReader^ srDecrypt;

		// Declare the RijndaelManaged object
		// used to decrypt the data.
		RijndaelManaged^ aesAlg;

		// Declare the string used to hold
		// the decrypted text.
		System::String^ plaintext;

		try
		{
			// Create a RijndaelManaged object
			// with the specified key and IV.
			aesAlg = gcnew RijndaelManaged();
			aesAlg->Padding = PaddingMode::PKCS7;
			aesAlg->Key = Key;
			aesAlg->IV = IV;

			// Create a decrytor to perform the stream transform.
			ICryptoTransform^ decryptor = aesAlg->CreateDecryptor(aesAlg->Key, aesAlg->IV);

			// Create the streams used for decryption.
			msDecrypt = gcnew MemoryStream(cipherText);
			csDecrypt = gcnew CryptoStream(msDecrypt, decryptor, CryptoStreamMode::Read);
			srDecrypt = gcnew StreamReader(csDecrypt);

			// Read the decrypted bytes from the decrypting stream
			// and place them in a string.
			plaintext = srDecrypt->ReadToEnd();
		}
		finally
		{
			// Clean things up.

			// Close the streams.
			if (srDecrypt)
				srDecrypt->Close();
			if (csDecrypt)
				csDecrypt->Close();
			if (msDecrypt)
				msDecrypt->Close();

			// Clear the RijndaelManaged object.
			if (aesAlg)
				aesAlg->Clear();
		}

		return plaintext;
	}

//�p�X���[�h����Key����
	static void GenerateKeyFromPassword(System::String^ password,
		array<Byte>^ Key, array<Byte>^ IV)
	{
		//�p�X���[�h���狤�L�L�[�Ə������x�N�^���쐬����
		//salt�����߂�
		array<Byte>^salt1 = gcnew array<Byte>(8);
		RNGCryptoServiceProvider ^ rngCsp = gcnew RNGCryptoServiceProvider();
		rngCsp->GetBytes(salt1);
		//Rfc2898DeriveBytes�I�u�W�F�N�g���쐬����
		System::Security::Cryptography::Rfc2898DeriveBytes^ deriveBytes =
			gcnew System::Security::Cryptography::Rfc2898DeriveBytes(password, salt1);

		//���������񐔂��w�肷�� �f�t�H���g��1000��
		deriveBytes->IterationCount = 1000;

		//���L�L�[�Ə������x�N�^�𐶐�����
		Key = deriveBytes->GetBytes(16);
		IV = deriveBytes->GetBytes(16);
	}

	//MAC�A�h���X
	static System::String^ ShowNetworkInterfaces()
	{
		System::String^ buf;
		
		IPGlobalProperties^ computerProperties = IPGlobalProperties::GetIPGlobalProperties();
		array<NetworkInterface^>^nics = NetworkInterface::GetAllNetworkInterfaces();
		Console::WriteLine(L"Interface information for {0}.{1}     ", computerProperties->HostName, computerProperties->DomainName);
		if (nics == nullptr || nics->Length < 1)
		{
			Console::WriteLine(L"  No network interfaces found.");
			return buf;
		}

		Console::WriteLine(L"  Number of interfaces .................... : {0}", (nics->Length).ToString());
		IEnumerator^ myEnum1 = nics->GetEnumerator();
		while (myEnum1->MoveNext())
		{
			NetworkInterface^ adapter = safe_cast<NetworkInterface^>(myEnum1->Current);
			IPInterfaceProperties^ properties = adapter->GetIPProperties();
			Console::WriteLine();
			Console::WriteLine(adapter->Description);
			Console::WriteLine(System::String::Empty->PadLeft(adapter->Description->Length, '='));
			Console::WriteLine(L"  Interface type .......................... : {0}", adapter->NetworkInterfaceType);
			Console::Write(L"  Physical address ........................ : ");
			PhysicalAddress^ address = adapter->GetPhysicalAddress();
			array<Byte>^bytes = address->GetAddressBytes();

			for (int i = 0; i < bytes->Length; i++)
			{
				// Display the physical address in hexadecimal.
				Console::Write(L"{0}", bytes[i].ToString(L"X2"));
				
				buf += bytes[i].ToString(L"X2");

				// Insert a hyphen after each byte, unless we are at the end of the 
				// address.
				if (i != bytes->Length - 1)
				{
					Console::Write(L"-");
					buf += "-";
				}

			}
			Console::WriteLine();
		}

		return buf;
	}
};

