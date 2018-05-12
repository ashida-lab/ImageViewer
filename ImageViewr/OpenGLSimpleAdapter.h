#pragma once

//
#include <windows.h> 
#include <gl/gl.h> 
#include <gl/glu.h> 
//��������#include �́A���Ԃ񂱂��Ƃ��ł͂Ȃ��A
// �R�[�h�̒��ł�using namespace System;�Ƃ��L�q����
// �����O�ɂ��Ȃ��ƁAC2872 �ɋꂵ�߂��邱�ƂɂȂ�B

public ref class OpenGLSimpleAdapter
	// ��CLR�ł��ꍇ�́Aclass �̑O�ɁApublic ref �����Ă�
{
	// 
	// OpenGL Simple Adaptor loOGLHost (C) 2008 nurs 
	// 
	// �g�����F 
	// 1)�{�N���X�̃C���X�^���X���A�^�[�Q�b�g�r���[�̃����o�Ƃ��č쐬����B 
	//   �R���X�g���N�^��HDC�́AWin32�Ȃ�
	//   �@��  ::GetDC( this->GetSafeHwnd() ) );
	//   CLR��Form�Ȃ�A
	//     �ˁ@::GetDC( (HWND)parentForm->Handle.ToPointer() );
	//   �ȂǂƂ��Ď���Ă��܂��B 
	// 2)�^�[�Q�b�g�r���[�́A�K�؂ȉӏ��i�������A�`��A���T�C�Y�j�ɂāA
	//   �{�z�X�g�́ABeginRender()�ƁAEndRender() ���Ăяo���A���̊ԂɁA
	//   �ړI��OpenGL�`��R�[�h���L�q���܂��B
	// *)���Ȃ݂ɗ��p���R�[�h�̂ǂ�����cpp���ɂāA
	//#pragma comment( lib, "opengl32.lib" )
	//#pragma comment( lib, "glu32.lib" )
	//#pragma comment( lib, "gdi32.lib" )
	//#pragma comment( lib, "User32.lib" )
	// �@�̋L�q���A�Y��Ȃ��ŉ������B
	//
	// ��RenderPolicy��\�ߍ쐬���Ă����A�K�v�ȂƂ��ɕK�v�ȕ`��
	//   �|���V�[�ŁARender() ��������A�Ƃ����g�������ł��܂��B
	// �����ӁFWindowsForm�A.NET���̏ꍇ�́A�v���W�F�N�g�̋��ʌ���
	//   �����^�C���T�|�[�g���A/clr:pure �ł͂Ȃ��A/clr �ɂ���B
	//
	//
public:
	OpenGLSimpleAdapter(HDC dc){
		if (dc == 0) return;
		m_hdc = dc;
		{
			static PIXELFORMATDESCRIPTOR pfd = {
				sizeof(PIXELFORMATDESCRIPTOR),   // size of this pfd 
				1,                     // version number 
				PFD_DRAW_TO_WINDOW |   // support window 
				PFD_SUPPORT_OPENGL |   // support OpenGL 
				PFD_DOUBLEBUFFER,      // double buffered 
				PFD_TYPE_RGBA,         // RGBA type 
				24,                    // 24-bit color depth 
				0, 0, 0, 0, 0, 0,      // color bits ignored 
				0,                     // no alpha buffer 
				0,                     // shift bit ignored 
				0,                     // no accumulation buffer 
				0, 0, 0, 0,            // accum bits ignored 
				32,                    // 32-bit z-buffer 
				0,                     // no stencil buffer 
				0,                     // no auxiliary buffer 
				PFD_MAIN_PLANE,        // main layer 
				0,                     // reserved 
				0, 0, 0                // layer masks ignored 
			};

			GLint iPixelFormat;
			if ((iPixelFormat = ChoosePixelFormat(m_hdc, &pfd)) == 0)
				return;
			if (SetPixelFormat(m_hdc, iPixelFormat, &pfd) == FALSE)
				return;
		}
		if ((m_hglrc = wglCreateContext(m_hdc)) == 0)
			return; // pure Managed ���ƃ����^�C���ŃG���[�� 
		if ((wglMakeCurrent(m_hdc, m_hglrc)) == 0)
			return;
		wglMakeCurrent(0, 0);
		return;
	}
	~OpenGLSimpleAdapter(void){}
	template< class RenderPolicy > void Render(RenderPolicy& po){
		wglMakeCurrent(this->m_hdc, this->m_hglrc);
		po();
		wglMakeCurrent(this->m_hdc, 0);
		SwapBuffers(this->m_hdc);
	}
	HDC BeginRender(void){
		wglMakeCurrent(this->m_hdc, this->m_hglrc);
		return this->m_hdc;
	}
	void EndRender(void){
		wglMakeCurrent(this->m_hdc, 0);
		SwapBuffers(this->m_hdc);
	}
	void EndRenderNoSwap(void){
		wglMakeCurrent(this->m_hdc, 0);
	}
private:
	HDC m_hdc;
	HGLRC m_hglrc;
};