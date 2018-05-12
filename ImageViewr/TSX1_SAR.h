#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// このソース コードは xsd によって自動生成されました。Version=4.6.81.0 です。
// 
using namespace System::Xml::Serialization;
using namespace System;
ref class generationSystem;
ref class file;
ref class fileLocation;
ref class imageData;
ref class imageDataImageMean;
ref class imageDataImageSigma;
ref class quicklooks;
ref class imageRaster;
ref class imageRasterRowSpacing;
ref class imageRasterColumnSpacing;
ref class projectedSpacingRange;
ref class compositeQuicklook;
ref class compositeQuicklookPolLayerCode;
ref class browseImage;
ref class coefficient;
ref class dataSegment;
ref class gainExt;
ref class level1Product;
ref class level1ProductCalibration;
ref class level1ProductCalibrationCalibrationData;
ref class level1ProductCalibrationCalibrationDataAntennaPattern;
ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern;
ref class level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern;
ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles;
ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin;
ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax;
ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector;
ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX;
ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY;
ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay;
ref class level1ProductCalibrationNominalGeometricPerformance;
ref class level1ProductCalibrationCalibrationConstant;
ref class level1ProductGeneralHeader;
ref class level1ProductInstrument;
ref class level1ProductInstrumentRadarParameters;
ref class level1ProductInstrumentSettings;
ref class level1ProductInstrumentSettingsRxGainSetting;
ref class level1ProductInstrumentSettingsRxGainSettingRxGain;
ref class level1ProductInstrumentSettingsRxBandwidth;
ref class level1ProductInstrumentSettingsRSF;
ref class level1ProductInstrumentSettingsSettingRecord;
ref class level1ProductInstrumentSettingsSettingRecordPRF;
ref class level1ProductInstrumentSettingsSettingRecordEchoWindowPosition;
ref class level1ProductInstrumentSettingsSettingRecordEchowindowLength;
ref class level1ProductNoise;
ref class level1ProductNoiseImageNoise;
ref class level1ProductNoiseImageNoiseNoiseEstimate;
ref class level1ProductPlatform;
ref class level1ProductPlatformReferenceData;
ref class level1ProductPlatformReferenceDataSARAntennaPosition;
ref class level1ProductPlatformReferenceDataGPSAntennaPosition;
ref class level1ProductPlatformOrbit;
ref class level1ProductPlatformOrbitOrbitHeader;
ref class level1ProductPlatformOrbitOrbitHeaderFirstStateTime;
ref class level1ProductPlatformOrbitOrbitHeaderLastStateTime;
ref class level1ProductPlatformOrbitStateVec;
ref class level1ProductPlatformAttitude;
ref class level1ProductPlatformAttitudeAttitudeHeader;
ref class level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames;
ref class level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime;
ref class level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime;
ref class level1ProductPlatformAttitudeAttitudeData;
ref class level1ProductProductComponents;
ref class level1ProductProductComponentsAnnotation;
ref class level1ProductProductComponentsAuxRasterFiles;
ref class level1ProductProductInfo;
ref class level1ProductProductInfoGenerationInfo;
ref class level1ProductProductInfoGenerationInfoQualityInfo;
ref class level1ProductProductInfoMissionInfo;
ref class level1ProductProductInfoAcquisitionInfo;
ref class level1ProductProductInfoAcquisitionInfoPolarisationList;
ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap;
ref class level1ProductProductInfoProductVariantInfo;
ref class level1ProductProductInfoImageDataInfo;
ref class level1ProductProductInfoSceneInfo;
ref class level1ProductProductInfoSceneInfoStart;
ref class level1ProductProductInfoSceneInfoStop;
ref class level1ProductProductInfoSceneInfoRangeTime;
ref class level1ProductProductInfoSceneInfoSceneCenterCoord;
ref class level1ProductProductInfoSceneInfoSceneCornerCoord;
ref class level1ProductProductInfoPreviewInfo;
ref class level1ProductProductQuality;
ref class level1ProductProductQualityRawDataQuality;
ref class level1ProductProductQualityAuxDataQuality;
ref class level1ProductProductQualityProcessingParameterQuality;
ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo;
ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart;
ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter;
ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop;
ref class level1ProductProductQualityImageDataQuality;
ref class level1ProductProductQualityImageDataQualityImageDataStatistics;
ref class level1ProductProductQualityLimits;
ref class level1ProductProductQualityLimitsProcessing;
ref class level1ProductProductQualityLimitsProcessingGeometry;
ref class level1ProductProductQualityLimitsProcessingGeometryVelocityParameter;
ref class level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial;
ref class level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity;
ref class level1ProductProductQualityLimitsProcessingGeometryDopplerRate;
ref class level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial;
ref class level1ProductProductQualityLimitsProcessingDoppler;
ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid;
ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate;
ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler;
ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler;
ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler;
ref class level1ProductProductQualityLimitsProcessingProcessingParameter;
ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression;
ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo;
ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp;
ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude;
ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase;
ref class level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay;
ref class level1ProductProductQualityLimitsProcessingProcessingFlags;
ref class level1ProductProductQualityLimitsProcessingDopplerCentroidInformation;
ref class level1ProductProductSpecific;
ref class level1ProductProductSpecificComplexImageInfo;
ref class level1ProductSetup;
ref class level1ProductSetupOrderInfo;
ref class level1ProductSetupOrderInfoOrderedSceneSceneExtent;
ref class level1ProductSetupOrderInfoPolList;
ref class level1ProductSetupOrderInfoUserData;
ref class level1ProductSetupInputData;
ref class level1ProductSetupProcessingStepsSoftware;


/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=true)]
public ref class generationSystem {
    
    private: System::String^  versionField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  version {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class file {
    
    private: System::String^  sizeField;
    
    private: cli::array< fileLocation^  >^  locationField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  size {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"location", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< fileLocation^  >^  location {
        cli::array< fileLocation^  >^  get();
        System::Void set(cli::array< fileLocation^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class fileLocation {
    
    private: System::String^  hostField;
    
    private: System::String^  pathField;
    
    private: System::String^  filenameField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  host {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  path {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  filename {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class imageData {
    
    private: System::String^  polLayerField;
    
    private: cli::array< file^  >^  fileField;
    
    private: cli::array< imageDataImageMean^  >^  imageMeanField;
    
    private: cli::array< imageDataImageSigma^  >^  imageSigmaField;
    
    private: System::String^  layerIndexField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"file")]
    property cli::array< file^  >^  File {
        cli::array< file^  >^  get();
        System::Void set(cli::array< file^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageMean", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< imageDataImageMean^  >^  imageMean {
        cli::array< imageDataImageMean^  >^  get();
        System::Void set(cli::array< imageDataImageMean^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageSigma", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< imageDataImageSigma^  >^  imageSigma {
        cli::array< imageDataImageSigma^  >^  get();
        System::Void set(cli::array< imageDataImageSigma^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  layerIndex {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class imageDataImageMean {
    
    private: System::String^  expectedField;
    
    private: System::String^  minimumField;
    
    private: System::String^  maximumField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  expected {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  minimum {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  maximum {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class imageDataImageSigma {
    
    private: System::String^  expectedField;
    
    private: System::String^  minimumField;
    
    private: System::String^  maximumField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  expected {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  minimum {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  maximum {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class quicklooks {
    
    private: System::String^  polLayerField;
    
    private: System::String^  imageDataFormatField;
    
    private: System::String^  imageDataDepthField;
    
    private: cli::array< file^  >^  fileField;
    
    private: cli::array< imageRaster^  >^  imageRasterField;
    
    private: System::String^  layerIndexField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataDepth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"file")]
    property cli::array< file^  >^  File {
        cli::array< file^  >^  get();
        System::Void set(cli::array< file^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageRaster")]
    property cli::array< imageRaster^  >^  ImageRaster {
        cli::array< imageRaster^  >^  get();
        System::Void set(cli::array< imageRaster^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  layerIndex {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class imageRaster {
    
    private: System::String^  numberOfRowsField;
    
    private: System::String^  numberOfColumnsField;
    
    private: System::String^  groundRangeResolutionField;
    
    private: System::String^  azimuthResolutionField;
    
    private: System::String^  azimuthLooksField;
    
    private: System::String^  rangeLooksField;
    
    private: System::String^  columnBlockLengthField;
    
    private: System::String^  rowBlockLengthField;
    
    private: System::String^  projectedSpacingAzimuthField;
    
    private: cli::array< imageRasterRowSpacing^  >^  rowSpacingField;
    
    private: cli::array< imageRasterColumnSpacing^  >^  columnSpacingField;
    
    private: cli::array< projectedSpacingRange^  >^  projectedSpacingRangeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfRows {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfColumns {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  groundRangeResolution {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthResolution {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthLooks {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeLooks {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  columnBlockLength {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rowBlockLength {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  projectedSpacingAzimuth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rowSpacing", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< imageRasterRowSpacing^  >^  rowSpacing {
        cli::array< imageRasterRowSpacing^  >^  get();
        System::Void set(cli::array< imageRasterRowSpacing^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"columnSpacing", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=true)]
    property cli::array< imageRasterColumnSpacing^  >^  columnSpacing {
        cli::array< imageRasterColumnSpacing^  >^  get();
        System::Void set(cli::array< imageRasterColumnSpacing^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"projectedSpacingRange")]
    property cli::array< projectedSpacingRange^  >^  ProjectedSpacingRange {
        cli::array< projectedSpacingRange^  >^  get();
        System::Void set(cli::array< projectedSpacingRange^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class imageRasterRowSpacing {
    
    private: System::String^  unitsField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  units {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class imageRasterColumnSpacing {
    
    private: System::String^  unitsField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  units {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class projectedSpacingRange {
    
    private: System::String^  groundNearField;
    
    private: System::String^  groundFarField;
    
    private: System::String^  slantRangeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  groundNear {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  groundFar {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  slantRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class compositeQuicklook {
    
    private: System::String^  imageDataFormatField;
    
    private: System::String^  imageDataDepthField;
    
    private: cli::array< file^  >^  fileField;
    
    private: cli::array< compositeQuicklookPolLayerCode^  >^  polLayerCodeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataDepth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"file")]
    property cli::array< file^  >^  File {
        cli::array< file^  >^  get();
        System::Void set(cli::array< file^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"polLayerCode", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< compositeQuicklookPolLayerCode^  >^  polLayerCode {
        cli::array< compositeQuicklookPolLayerCode^  >^  get();
        System::Void set(cli::array< compositeQuicklookPolLayerCode^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class compositeQuicklookPolLayerCode {
    
    private: System::String^  polarisationField;
    
    private: System::String^  colourField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polarisation {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  colour {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class browseImage {
    
    private: System::String^  imageDataFormatField;
    
    private: System::String^  imageDataDepthField;
    
    private: cli::array< file^  >^  fileField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataDepth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"file")]
    property cli::array< file^  >^  File {
        cli::array< file^  >^  get();
        System::Void set(cli::array< file^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=true)]
public ref class coefficient {
    
    private: System::String^  exponentField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  exponent {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class dataSegment {
    
    private: System::String^  startTimeUTCField;
    
    private: System::String^  stopTimeUTCField;
    
    private: System::String^  numberOfRowsField;
    
    private: System::String^  segmentIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  startTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stopTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfRows {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  segmentID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=true)]
public ref class gainExt {
    
    private: System::String^  angleField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  angle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class level1Product {
    
    private: cli::array< System::Object^  >^  itemsField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"browseImage", browseImage::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"calibration", level1ProductCalibration::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"coefficient", coefficient::typeid, IsNullable=true), 
    System::Xml::Serialization::XmlElementAttribute(L"compositeQuicklook", compositeQuicklook::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"dataSegment", dataSegment::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"file", file::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"gainExt", gainExt::typeid, IsNullable=true), 
    System::Xml::Serialization::XmlElementAttribute(L"generalHeader", level1ProductGeneralHeader::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"generationSystem", generationSystem::typeid, IsNullable=true), 
    System::Xml::Serialization::XmlElementAttribute(L"imageData", imageData::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"imageRaster", imageRaster::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"instrument", level1ProductInstrument::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"noise", level1ProductNoise::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"platform", level1ProductPlatform::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"productComponents", level1ProductProductComponents::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"productInfo", level1ProductProductInfo::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"productQuality", level1ProductProductQuality::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"productSpecific", level1ProductProductSpecific::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlElementAttribute(L"projectedSpacingRange", projectedSpacingRange::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"quicklooks", quicklooks::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"setup", level1ProductSetup::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< System::Object^  >^  Items {
        cli::array< System::Object^  >^  get();
        System::Void set(cli::array< System::Object^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibration {
    
    private: cli::array< level1ProductCalibrationCalibrationData^  >^  calibrationDataField;
    
    private: cli::array< level1ProductCalibrationNominalGeometricPerformance^  >^  nominalGeometricPerformanceField;
    
    private: cli::array< level1ProductCalibrationCalibrationConstant^  >^  calibrationConstantField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"calibrationData", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationData^  >^  calibrationData {
        cli::array< level1ProductCalibrationCalibrationData^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationData^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"nominalGeometricPerformance", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationNominalGeometricPerformance^  >^  nominalGeometricPerformance {
        cli::array< level1ProductCalibrationNominalGeometricPerformance^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationNominalGeometricPerformance^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"calibrationConstant", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationConstant^  >^  calibrationConstant {
        cli::array< level1ProductCalibrationCalibrationConstant^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationConstant^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationData {
    
    private: System::String^  radiometricDEMIDField;
    
    private: System::String^  numberOfAntennaPatternsField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  antennaPatternField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  >^  calibrationInfoAndInstrumentCharacteristicsField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  radiometricDEMID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfAntennaPatterns {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"antennaPattern", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  antennaPattern {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"calibrationInfoAndInstrumentCharacteristics", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  >^  calibrationInfoAndInstrumentCharacteristics {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPattern {
    
    private: System::String^  polLayerField;
    
    private: System::String^  dRAoffsetField;
    
    private: System::String^  azimuthSteeringAngleField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  elevationPatternField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  >^  azimuthPatternField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  >^  elevationLookAnglesField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  beamPointingVectorField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthSteeringAngle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"elevationPattern", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  elevationPattern {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"azimuthPattern", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  >^  azimuthPattern {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"elevationLookAngles", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  >^  elevationLookAngles {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"beamPointingVector", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  beamPointingVector {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern {
    
    private: System::String^  referenceGainField;
    
    private: System::String^  descriptionField;
    
    private: cli::array< gainExt^  >^  gainExtField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referenceGain {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  description {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"gainExt", IsNullable=true)]
    property cli::array< gainExt^  >^  GainExt {
        cli::array< gainExt^  >^  get();
        System::Void set(cli::array< gainExt^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern {
    
    private: System::String^  referenceGainField;
    
    private: System::String^  descriptionField;
    
    private: cli::array< gainExt^  >^  gainExtField;
    
    private: System::String^  azimuthBeamIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referenceGain {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  description {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"gainExt", IsNullable=true)]
    property cli::array< gainExt^  >^  GainExt {
        cli::array< gainExt^  >^  get();
        System::Void set(cli::array< gainExt^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  azimuthBeamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles {
    
    private: System::String^  fullPerformanceField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  >^  coverageRegionMinField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  >^  coverageRegionMaxField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  fullPerformance {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coverageRegionMin", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=true)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  >^  coverageRegionMin {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coverageRegionMax", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=true)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  >^  coverageRegionMax {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin {
    
    private: System::String^  incidenceAngleField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  incidenceAngle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax {
    
    private: System::String^  incidenceAngleField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  incidenceAngle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector {
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  >^  xField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  >^  yField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  >^  zField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"x", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  >^  x {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"y", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  >^  y {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"z", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  >^  z {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX {
    
    private: System::String^  errorField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  error {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY {
    
    private: System::String^  errorField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  error {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ {
    
    private: System::String^  errorField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  error {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics {
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  absCalFactorField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  >^  totalInstrumentTimeDelayField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"absCalFactor", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  absCalFactor {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"totalInstrumentTimeDelay", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  >^  totalInstrumentTimeDelay {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor {
    
    private: System::String^  antennaModeField;
    
    private: System::String^  beamIDField;
    
    private: System::String^  imagingModeField;
    
    private: System::String^  lookDirectionField;
    
    private: System::String^  polarisationChannelField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  antennaMode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  imagingMode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  lookDirection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  polarisationChannel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay {
    
    private: System::String^  instrCESystematicTimeDelayField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  internalDelayField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  instrCESystematicTimeDelay {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"internalDelay", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=true)]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  internalDelay {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay {
    
    private: System::String^  polarisationChannelField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  polarisationChannel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationNominalGeometricPerformance {
    
    private: System::String^  azimuthResField;
    
    private: System::String^  slantRangeResField;
    
    private: System::String^  nominalSwathWidthField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthRes {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  slantRangeRes {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  nominalSwathWidth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationConstant {
    
    private: System::String^  polLayerField;
    
    private: System::String^  beamIDField;
    
    private: System::String^  dRAoffsetField;
    
    private: System::String^  calFactorField;
    
    private: System::String^  layerIndexField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  calFactor {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  layerIndex {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductGeneralHeader {
    
    private: System::String^  itemNameField;
    
    private: System::String^  missionField;
    
    private: System::String^  sourceField;
    
    private: System::String^  destinationField;
    
    private: System::String^  generationTimeField;
    
    private: System::String^  referenceDocumentField;
    
    private: System::String^  revisionField;
    
    private: System::String^  revisionCommentField;
    
    private: System::String^  remarkField;
    
    private: cli::array< generationSystem^  >^  generationSystemField;
    
    private: System::String^  fileNameField;
    
    private: System::String^  fileVersionField;
    
    private: System::String^  statusField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  itemName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  mission {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  source {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  destination {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  generationTime {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referenceDocument {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  revision {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  revisionComment {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  remark {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"generationSystem", IsNullable=true)]
    property cli::array< generationSystem^  >^  GenerationSystem {
        cli::array< generationSystem^  >^  get();
        System::Void set(cli::array< generationSystem^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  fileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  fileVersion {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  status {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrument {
    
    private: System::String^  instrumentInfoCoordinateTypeField;
    
    private: cli::array< level1ProductInstrumentRadarParameters^  >^  radarParametersField;
    
    private: cli::array< level1ProductInstrumentSettings^  >^  settingsField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  instrumentInfoCoordinateType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"radarParameters", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductInstrumentRadarParameters^  >^  radarParameters {
        cli::array< level1ProductInstrumentRadarParameters^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentRadarParameters^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"settings", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductInstrumentSettings^  >^  settings {
        cli::array< level1ProductInstrumentSettings^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettings^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentRadarParameters {
    
    private: System::String^  centerFrequencyField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  centerFrequency {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettings {
    
    private: System::String^  polLayerField;
    
    private: System::String^  dRAoffsetField;
    
    private: System::String^  beamIDField;
    
    private: System::String^  numberOfRxGainChangesField;
    
    private: System::String^  quantisationIDField;
    
    private: System::String^  quantisationControlField;
    
    private: System::String^  numberOfPRFChangesField;
    
    private: System::String^  numberOfEchoWindowPositionChangesField;
    
    private: System::String^  numberOfEchoWindowLengthChangesField;
    
    private: System::String^  numberOfSettingRecordsField;
    
    private: cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  rxGainSettingField;
    
    private: cli::array< level1ProductInstrumentSettingsRxBandwidth^  >^  rxBandwidthField;
    
    private: cli::array< level1ProductInstrumentSettingsRSF^  >^  rSFField;
    
    private: cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  settingRecordField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfRxGainChanges {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  quantisationID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  quantisationControl {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfPRFChanges {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfEchoWindowPositionChanges {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfEchoWindowLengthChanges {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfSettingRecords {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rxGainSetting", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  rxGainSetting {
        cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rxBandwidth", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductInstrumentSettingsRxBandwidth^  >^  rxBandwidth {
        cli::array< level1ProductInstrumentSettingsRxBandwidth^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsRxBandwidth^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"RSF", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductInstrumentSettingsRSF^  >^  RSF {
        cli::array< level1ProductInstrumentSettingsRSF^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsRSF^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"settingRecord", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  settingRecord {
        cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsRxGainSetting {
    
    private: System::String^  startTimeUTCField;
    
    private: System::String^  stopTimeUTCField;
    
    private: cli::array< level1ProductInstrumentSettingsRxGainSettingRxGain^  >^  rxGainField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  startTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stopTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rxGain", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductInstrumentSettingsRxGainSettingRxGain^  >^  rxGain {
        cli::array< level1ProductInstrumentSettingsRxGainSettingRxGain^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsRxGainSettingRxGain^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsRxGainSettingRxGain {
    
    private: System::String^  codeField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsRxBandwidth {
    
    private: System::String^  codeField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsRSF {
    
    private: System::String^  codeField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsSettingRecord {
    
    private: System::String^  pulseTypeField;
    
    private: System::String^  echoIndexField;
    
    private: cli::array< dataSegment^  >^  dataSegmentField;
    
    private: cli::array< level1ProductInstrumentSettingsSettingRecordPRF^  >^  pRFField;
    
    private: cli::array< level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  >^  echoWindowPositionField;
    
    private: cli::array< level1ProductInstrumentSettingsSettingRecordEchowindowLength^  >^  echowindowLengthField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  pulseType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  echoIndex {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dataSegment")]
    property cli::array< dataSegment^  >^  DataSegment {
        cli::array< dataSegment^  >^  get();
        System::Void set(cli::array< dataSegment^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"PRF", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=true)]
    property cli::array< level1ProductInstrumentSettingsSettingRecordPRF^  >^  PRF {
        cli::array< level1ProductInstrumentSettingsSettingRecordPRF^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsSettingRecordPRF^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"echoWindowPosition", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=true)]
    property cli::array< level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  >^  echoWindowPosition {
        cli::array< level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"echowindowLength", Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=true)]
    property cli::array< level1ProductInstrumentSettingsSettingRecordEchowindowLength^  >^  echowindowLength {
        cli::array< level1ProductInstrumentSettingsSettingRecordEchowindowLength^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsSettingRecordEchowindowLength^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsSettingRecordPRF {
    
    private: System::String^  codeField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsSettingRecordEchoWindowPosition {
    
    private: System::String^  codeField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsSettingRecordEchowindowLength {
    
    private: System::String^  codeField;
    
    private: System::String^  valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::String^  Value {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductNoise {
    
    private: System::String^  polLayerField;
    
    private: System::String^  beamIDField;
    
    private: System::String^  dRAoffsetField;
    
    private: System::String^  noiseModelIDField;
    
    private: System::String^  noiseLevelRefField;
    
    private: System::String^  numberOfNoiseRecordsField;
    
    private: System::String^  averageNoiseRecordAzimuthSpacingField;
    
    private: cli::array< level1ProductNoiseImageNoise^  >^  imageNoiseField;
    
    private: System::String^  layerIndexField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  noiseModelID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  noiseLevelRef {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfNoiseRecords {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  averageNoiseRecordAzimuthSpacing {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageNoise", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductNoiseImageNoise^  >^  imageNoise {
        cli::array< level1ProductNoiseImageNoise^  >^  get();
        System::Void set(cli::array< level1ProductNoiseImageNoise^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  layerIndex {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductNoiseImageNoise {
    
    private: System::String^  timeUTCField;
    
    private: System::String^  noiseEstimateConfidenceField;
    
    private: cli::array< level1ProductNoiseImageNoiseNoiseEstimate^  >^  noiseEstimateField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  noiseEstimateConfidence {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"noiseEstimate", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductNoiseImageNoiseNoiseEstimate^  >^  noiseEstimate {
        cli::array< level1ProductNoiseImageNoiseNoiseEstimate^  >^  get();
        System::Void set(cli::array< level1ProductNoiseImageNoiseNoiseEstimate^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductNoiseImageNoiseNoiseEstimate {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatform {
    
    private: cli::array< level1ProductPlatformReferenceData^  >^  referenceDataField;
    
    private: cli::array< level1ProductPlatformOrbit^  >^  orbitField;
    
    private: cli::array< level1ProductPlatformAttitude^  >^  attitudeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"referenceData", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformReferenceData^  >^  referenceData {
        cli::array< level1ProductPlatformReferenceData^  >^  get();
        System::Void set(cli::array< level1ProductPlatformReferenceData^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"orbit", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformOrbit^  >^  orbit {
        cli::array< level1ProductPlatformOrbit^  >^  get();
        System::Void set(cli::array< level1ProductPlatformOrbit^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"attitude", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformAttitude^  >^  attitude {
        cli::array< level1ProductPlatformAttitude^  >^  get();
        System::Void set(cli::array< level1ProductPlatformAttitude^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformReferenceData {
    
    private: System::String^  sARAntennaMechanicalBoresightField;
    
    private: cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  sARAntennaPositionField;
    
    private: cli::array< level1ProductPlatformReferenceDataGPSAntennaPosition^  >^  gPSAntennaPositionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  SARAntennaMechanicalBoresight {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"SARAntennaPosition", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  SARAntennaPosition {
        cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  get();
        System::Void set(cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"GPSAntennaPosition", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformReferenceDataGPSAntennaPosition^  >^  GPSAntennaPosition {
        cli::array< level1ProductPlatformReferenceDataGPSAntennaPosition^  >^  get();
        System::Void set(cli::array< level1ProductPlatformReferenceDataGPSAntennaPosition^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformReferenceDataSARAntennaPosition {
    
    private: System::String^  xField;
    
    private: System::String^  yField;
    
    private: System::String^  zField;
    
    private: System::String^  dRAoffsetField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  x {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  y {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  z {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformReferenceDataGPSAntennaPosition {
    
    private: System::String^  xField;
    
    private: System::String^  yField;
    
    private: System::String^  zField;
    
    private: System::String^  gPSreceiverField;
    
    private: System::String^  unitField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  x {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  y {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  z {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  GPSreceiver {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  unit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbit {
    
    private: cli::array< level1ProductPlatformOrbitOrbitHeader^  >^  orbitHeaderField;
    
    private: cli::array< level1ProductPlatformOrbitStateVec^  >^  stateVecField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"orbitHeader", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformOrbitOrbitHeader^  >^  orbitHeader {
        cli::array< level1ProductPlatformOrbitOrbitHeader^  >^  get();
        System::Void set(cli::array< level1ProductPlatformOrbitOrbitHeader^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"stateVec", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformOrbitStateVec^  >^  stateVec {
        cli::array< level1ProductPlatformOrbitStateVec^  >^  get();
        System::Void set(cli::array< level1ProductPlatformOrbitStateVec^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeader {
    
    private: System::String^  sensorField;
    
    private: System::String^  accuracyField;
    
    private: System::String^  stateVectorRefFrameField;
    
    private: System::String^  stateVectorRefTimeField;
    
    private: System::String^  stateVecFormatField;
    
    private: System::String^  numStateVectorsField;
    
    private: System::String^  stateVectorTimeSpacingField;
    
    private: System::String^  positionAccuracyMarginField;
    
    private: System::String^  velocityAccuracyMarginField;
    
    private: System::String^  recProcessingTechniqueField;
    
    private: System::String^  recPolDegreeField;
    
    private: System::String^  dataGapIndicatorField;
    
    private: cli::array< generationSystem^  >^  generationSystemField;
    
    private: cli::array< level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  >^  firstStateTimeField;
    
    private: cli::array< level1ProductPlatformOrbitOrbitHeaderLastStateTime^  >^  lastStateTimeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sensor {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  accuracy {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stateVectorRefFrame {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stateVectorRefTime {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stateVecFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numStateVectors {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stateVectorTimeSpacing {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  positionAccuracyMargin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  velocityAccuracyMargin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  recProcessingTechnique {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  recPolDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dataGapIndicator {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"generationSystem", IsNullable=true)]
    property cli::array< generationSystem^  >^  GenerationSystem {
        cli::array< generationSystem^  >^  get();
        System::Void set(cli::array< generationSystem^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"firstStateTime", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  >^  firstStateTime {
        cli::array< level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  >^  get();
        System::Void set(cli::array< level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"lastStateTime", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformOrbitOrbitHeaderLastStateTime^  >^  lastStateTime {
        cli::array< level1ProductPlatformOrbitOrbitHeaderLastStateTime^  >^  get();
        System::Void set(cli::array< level1ProductPlatformOrbitOrbitHeaderLastStateTime^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeaderFirstStateTime {
    
    private: System::String^  firstStateTimeUTCField;
    
    private: System::String^  firstStateTimeGPSField;
    
    private: System::String^  firstStateTimeGPSFractionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  firstStateTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  firstStateTimeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  firstStateTimeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeaderLastStateTime {
    
    private: System::String^  lastStateTimeUTCField;
    
    private: System::String^  lastStateTimeGPSField;
    
    private: System::String^  lastStateTimeGPSFractionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lastStateTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lastStateTimeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lastStateTimeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitStateVec {
    
    private: System::String^  timeUTCField;
    
    private: System::String^  timeGPSField;
    
    private: System::String^  timeGPSFractionField;
    
    private: System::String^  posXField;
    
    private: System::String^  posYField;
    
    private: System::String^  posZField;
    
    private: System::String^  velXField;
    
    private: System::String^  velYField;
    
    private: System::String^  velZField;
    
    private: System::String^  maneuverField;
    
    private: System::String^  numField;
    
    private: System::String^  qualIndField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  posX {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  posY {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  posZ {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  velX {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  velY {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  velZ {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  maneuver {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  num {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  qualInd {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitude {
    
    private: cli::array< level1ProductPlatformAttitudeAttitudeHeader^  >^  attitudeHeaderField;
    
    private: cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  attitudeDataField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"attitudeHeader", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformAttitudeAttitudeHeader^  >^  attitudeHeader {
        cli::array< level1ProductPlatformAttitudeAttitudeHeader^  >^  get();
        System::Void set(cli::array< level1ProductPlatformAttitudeAttitudeHeader^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"attitudeData", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  attitudeData {
        cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  get();
        System::Void set(cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeader {
    
    private: System::String^  sensorField;
    
    private: System::String^  accuracyField;
    
    private: System::String^  attitudeDataRefTimeField;
    
    private: System::String^  attitudeDataFormatField;
    
    private: System::String^  numRecordsField;
    
    private: System::String^  attitudeDataTimeSpacingField;
    
    private: System::String^  accuracyMarginField;
    
    private: System::String^  recInterpolTechniqueField;
    
    private: System::String^  recInterpolPolDegreeField;
    
    private: System::String^  dataGapIndicatorField;
    
    private: System::String^  steeringLawIndicatorField;
    
    private: cli::array< generationSystem^  >^  generationSystemField;
    
    private: cli::array< level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  >^  attitudeDataRefFramesField;
    
    private: cli::array< level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  >^  firstAttitudeTimeField;
    
    private: cli::array< level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  >^  lastAttitudeTimeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sensor {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  accuracy {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  attitudeDataRefTime {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  attitudeDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numRecords {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  attitudeDataTimeSpacing {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  accuracyMargin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  recInterpolTechnique {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  recInterpolPolDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dataGapIndicator {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  steeringLawIndicator {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"generationSystem", IsNullable=true)]
    property cli::array< generationSystem^  >^  GenerationSystem {
        cli::array< generationSystem^  >^  get();
        System::Void set(cli::array< generationSystem^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"attitudeDataRefFrames", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  >^  attitudeDataRefFrames {
        cli::array< level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  >^  get();
        System::Void set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"firstAttitudeTime", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  >^  firstAttitudeTime {
        cli::array< level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  >^  get();
        System::Void set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"lastAttitudeTime", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  >^  lastAttitudeTime {
        cli::array< level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  >^  get();
        System::Void set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames {
    
    private: System::String^  fromFrameField;
    
    private: System::String^  toFrameField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  FromFrame {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  ToFrame {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime {
    
    private: System::String^  firstAttitudeTimeUTCField;
    
    private: System::String^  firstAttitudeTimeGPSField;
    
    private: System::String^  firstAttitudeTimeGPSFractionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  firstAttitudeTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  firstAttitudeTimeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  firstAttitudeTimeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime {
    
    private: System::String^  lastAttitudeTimeUTCField;
    
    private: System::String^  lastAttitudeTimeGPSField;
    
    private: System::String^  lastAttitudeTimeGPSFractionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lastAttitudeTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lastAttitudeTimeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lastAttitudeTimeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeData {
    
    private: System::String^  timeUTCField;
    
    private: System::String^  timeGPSField;
    
    private: System::String^  timeGPSFractionField;
    
    private: System::String^  q0Field;
    
    private: System::String^  q1Field;
    
    private: System::String^  q2Field;
    
    private: System::String^  q3Field;
    
    private: System::String^  antsteerIndField;
    
    private: System::String^  maneuverField;
    
    private: System::String^  numField;
    
    private: System::String^  qualIndField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  q0 {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  q1 {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  q2 {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  q3 {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  antsteerInd {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  maneuver {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  num {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  qualInd {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponents {
    
    private: cli::array< level1ProductProductComponentsAnnotation^  >^  annotationField;
    
    private: cli::array< imageData^  >^  imageDataField;
    
    private: cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  auxRasterFilesField;
    
    private: cli::array< quicklooks^  >^  quicklooksField;
    
    private: cli::array< compositeQuicklook^  >^  compositeQuicklookField;
    
    private: cli::array< browseImage^  >^  browseImageField;
    
    private: cli::array< cli::array< file^  >^  >^  mapPlotField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"annotation", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductComponentsAnnotation^  >^  annotation {
        cli::array< level1ProductProductComponentsAnnotation^  >^  get();
        System::Void set(cli::array< level1ProductProductComponentsAnnotation^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageData")]
    property cli::array< imageData^  >^  ImageData {
        cli::array< imageData^  >^  get();
        System::Void set(cli::array< imageData^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"auxRasterFiles", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  auxRasterFiles {
        cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  get();
        System::Void set(cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"quicklooks")]
    property cli::array< quicklooks^  >^  Quicklooks {
        cli::array< quicklooks^  >^  get();
        System::Void set(cli::array< quicklooks^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"compositeQuicklook")]
    property cli::array< compositeQuicklook^  >^  CompositeQuicklook {
        cli::array< compositeQuicklook^  >^  get();
        System::Void set(cli::array< compositeQuicklook^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"browseImage")]
    property cli::array< browseImage^  >^  BrowseImage {
        cli::array< browseImage^  >^  get();
        System::Void set(cli::array< browseImage^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlArrayItemAttribute(L"file", file::typeid, IsNullable=false)]
    property cli::array< cli::array< file^  >^  >^  mapPlot {
        cli::array< cli::array< file^  >^  >^  get();
        System::Void set(cli::array< cli::array< file^  >^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsAnnotation {
    
    private: System::String^  typeField;
    
    private: cli::array< file^  >^  fileField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  type {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"file")]
    property cli::array< file^  >^  File {
        cli::array< file^  >^  get();
        System::Void set(cli::array< file^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsAuxRasterFiles {
    
    private: System::String^  typeField;
    
    private: cli::array< file^  >^  fileField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  type {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"file")]
    property cli::array< file^  >^  File {
        cli::array< file^  >^  get();
        System::Void set(cli::array< file^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfo {
    
    private: cli::array< level1ProductProductInfoGenerationInfo^  >^  generationInfoField;
    
    private: cli::array< level1ProductProductInfoMissionInfo^  >^  missionInfoField;
    
    private: cli::array< level1ProductProductInfoAcquisitionInfo^  >^  acquisitionInfoField;
    
    private: cli::array< level1ProductProductInfoProductVariantInfo^  >^  productVariantInfoField;
    
    private: cli::array< level1ProductProductInfoImageDataInfo^  >^  imageDataInfoField;
    
    private: cli::array< level1ProductProductInfoSceneInfo^  >^  sceneInfoField;
    
    private: cli::array< level1ProductProductInfoPreviewInfo^  >^  previewInfoField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"generationInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoGenerationInfo^  >^  generationInfo {
        cli::array< level1ProductProductInfoGenerationInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoGenerationInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"missionInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoMissionInfo^  >^  missionInfo {
        cli::array< level1ProductProductInfoMissionInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoMissionInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"acquisitionInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoAcquisitionInfo^  >^  acquisitionInfo {
        cli::array< level1ProductProductInfoAcquisitionInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoAcquisitionInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"productVariantInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoProductVariantInfo^  >^  productVariantInfo {
        cli::array< level1ProductProductInfoProductVariantInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoProductVariantInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageDataInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoImageDataInfo^  >^  imageDataInfo {
        cli::array< level1ProductProductInfoImageDataInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoImageDataInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"sceneInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoSceneInfo^  >^  sceneInfo {
        cli::array< level1ProductProductInfoSceneInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoSceneInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"previewInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoPreviewInfo^  >^  previewInfo {
        cli::array< level1ProductProductInfoPreviewInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoPreviewInfo^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoGenerationInfo {
    
    private: System::String^  logicalProductIDField;
    
    private: System::String^  receivingStationField;
    
    private: System::String^  level0ProcessingFacilityField;
    
    private: System::String^  level1ProcessingFacilityField;
    
    private: System::String^  groundOperationsTypeField;
    
    private: System::String^  deliveryInfoField;
    
    private: System::String^  copyrightInfoField;
    
    private: cli::array< level1ProductProductInfoGenerationInfoQualityInfo^  >^  qualityInfoField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  logicalProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  receivingStation {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  level0ProcessingFacility {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  level1ProcessingFacility {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  groundOperationsType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  deliveryInfo {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  copyrightInfo {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"qualityInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoGenerationInfoQualityInfo^  >^  qualityInfo {
        cli::array< level1ProductProductInfoGenerationInfoQualityInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoGenerationInfoQualityInfo^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoGenerationInfoQualityInfo {
    
    private: System::String^  qualityInspectionField;
    
    private: System::String^  qualityRemarkField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  qualityInspection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  qualityRemark {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoMissionInfo {
    
    private: System::String^  missionField;
    
    private: System::String^  orbitPhaseField;
    
    private: System::String^  orbitCycleField;
    
    private: System::String^  absOrbitField;
    
    private: System::String^  relOrbitField;
    
    private: System::String^  numOrbitsInCycleField;
    
    private: System::String^  orbitDirectionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  mission {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitPhase {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitCycle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  absOrbit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  relOrbit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numOrbitsInCycle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitDirection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoAcquisitionInfo {
    
    private: System::String^  sensorField;
    
    private: System::String^  imagingModeField;
    
    private: System::String^  lookDirectionField;
    
    private: System::String^  antennaReceiveConfigurationField;
    
    private: System::String^  polarisationModeField;
    
    private: System::String^  elevationBeamConfigurationField;
    
    private: cli::array< level1ProductProductInfoAcquisitionInfoPolarisationList^  >^  polarisationListField;
    
    private: cli::array< cli::array< level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap^  >^  >^  imagingModeSpecificInfoField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sensor {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imagingMode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lookDirection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  antennaReceiveConfiguration {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polarisationMode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  elevationBeamConfiguration {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"polarisationList", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoAcquisitionInfoPolarisationList^  >^  polarisationList {
        cli::array< level1ProductProductInfoAcquisitionInfoPolarisationList^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoAcquisitionInfoPolarisationList^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlArrayItemAttribute(L"stripMap", level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap::typeid, 
    Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=false)]
    property cli::array< cli::array< level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap^  >^  >^  imagingModeSpecificInfo {
        cli::array< cli::array< level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap^  >^  >^  get();
        System::Void set(cli::array< cli::array< level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap^  >^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoAcquisitionInfoPolarisationList {
    
    private: System::String^  polLayerField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap {
    
    private: System::String^  azimuthBeamIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthBeamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoProductVariantInfo {
    
    private: System::String^  productTypeField;
    
    private: System::String^  productVariantField;
    
    private: System::String^  projectionField;
    
    private: System::String^  resolutionVariantField;
    
    private: System::String^  radiometricCorrectionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  productType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  productVariant {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  projection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  resolutionVariant {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  radiometricCorrection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoImageDataInfo {
    
    private: System::String^  pixelValueIDField;
    
    private: System::String^  imageDataTypeField;
    
    private: System::String^  imageDataFormatField;
    
    private: System::String^  numberOfLayersField;
    
    private: System::String^  imageDataDepthField;
    
    private: System::String^  imageStorageOrderField;
    
    private: System::String^  rowContentField;
    
    private: System::String^  columnContentField;
    
    private: cli::array< imageRaster^  >^  imageRasterField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  pixelValueID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfLayers {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataDepth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageStorageOrder {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rowContent {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  columnContent {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageRaster")]
    property cli::array< imageRaster^  >^  ImageRaster {
        cli::array< imageRaster^  >^  get();
        System::Void set(cli::array< imageRaster^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfo {
    
    private: System::String^  sceneIDField;
    
    private: System::String^  sceneAzimuthExtentField;
    
    private: System::String^  sceneRangeExtentField;
    
    private: System::String^  sceneAverageHeightField;
    
    private: System::String^  headingAngleField;
    
    private: cli::array< level1ProductProductInfoSceneInfoStart^  >^  startField;
    
    private: cli::array< level1ProductProductInfoSceneInfoStop^  >^  stopField;
    
    private: cli::array< level1ProductProductInfoSceneInfoRangeTime^  >^  rangeTimeField;
    
    private: cli::array< level1ProductProductInfoSceneInfoSceneCenterCoord^  >^  sceneCenterCoordField;
    
    private: cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  sceneCornerCoordField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sceneID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sceneAzimuthExtent {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sceneRangeExtent {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sceneAverageHeight {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  headingAngle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"start", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoSceneInfoStart^  >^  start {
        cli::array< level1ProductProductInfoSceneInfoStart^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoSceneInfoStart^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"stop", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoSceneInfoStop^  >^  stop {
        cli::array< level1ProductProductInfoSceneInfoStop^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoSceneInfoStop^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rangeTime", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoSceneInfoRangeTime^  >^  rangeTime {
        cli::array< level1ProductProductInfoSceneInfoRangeTime^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoSceneInfoRangeTime^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"sceneCenterCoord", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoSceneInfoSceneCenterCoord^  >^  sceneCenterCoord {
        cli::array< level1ProductProductInfoSceneInfoSceneCenterCoord^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoSceneInfoSceneCenterCoord^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"sceneCornerCoord", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  sceneCornerCoord {
        cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoStart {
    
    private: System::String^  timeUTCField;
    
    private: System::String^  timeGPSField;
    
    private: System::String^  timeGPSFractionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoStop {
    
    private: System::String^  timeUTCField;
    
    private: System::String^  timeGPSField;
    
    private: System::String^  timeGPSFractionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPS {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeGPSFraction {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoRangeTime {
    
    private: System::String^  firstPixelField;
    
    private: System::String^  lastPixelField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  firstPixel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lastPixel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoSceneCenterCoord {
    
    private: System::String^  refRowField;
    
    private: System::String^  refColumnField;
    
    private: System::String^  latField;
    
    private: System::String^  lonField;
    
    private: System::String^  azimuthTimeUTCField;
    
    private: System::String^  rangeTimeField;
    
    private: System::String^  incidenceAngleField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  refRow {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  refColumn {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lon {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeTime {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  incidenceAngle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoSceneCornerCoord {
    
    private: System::String^  refRowField;
    
    private: System::String^  refColumnField;
    
    private: System::String^  latField;
    
    private: System::String^  lonField;
    
    private: System::String^  azimuthTimeUTCField;
    
    private: System::String^  rangeTimeField;
    
    private: System::String^  incidenceAngleField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  refRow {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  refColumn {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lon {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeTime {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  incidenceAngle {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfo {
    
    private: System::String^  mapPlotFormatField;
    
    private: cli::array< quicklooks^  >^  quicklooksField;
    
    private: cli::array< compositeQuicklook^  >^  compositeQuicklookField;
    
    private: cli::array< browseImage^  >^  browseImageField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  mapPlotFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"quicklooks")]
    property cli::array< quicklooks^  >^  Quicklooks {
        cli::array< quicklooks^  >^  get();
        System::Void set(cli::array< quicklooks^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"compositeQuicklook")]
    property cli::array< compositeQuicklook^  >^  CompositeQuicklook {
        cli::array< compositeQuicklook^  >^  get();
        System::Void set(cli::array< compositeQuicklook^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"browseImage")]
    property cli::array< browseImage^  >^  BrowseImage {
        cli::array< browseImage^  >^  get();
        System::Void set(cli::array< browseImage^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQuality {
    
    private: System::String^  instrumentStateRemarkField;
    
    private: cli::array< level1ProductProductQualityRawDataQuality^  >^  rawDataQualityField;
    
    private: cli::array< level1ProductProductQualityAuxDataQuality^  >^  auxDataQualityField;
    
    private: cli::array< level1ProductProductQualityProcessingParameterQuality^  >^  processingParameterQualityField;
    
    private: cli::array< level1ProductProductQualityImageDataQuality^  >^  imageDataQualityField;
    
    private: cli::array< level1ProductProductQualityLimits^  >^  limitsField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  instrumentStateRemark {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rawDataQuality", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityRawDataQuality^  >^  rawDataQuality {
        cli::array< level1ProductProductQualityRawDataQuality^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityRawDataQuality^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"auxDataQuality", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityAuxDataQuality^  >^  auxDataQuality {
        cli::array< level1ProductProductQualityAuxDataQuality^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityAuxDataQuality^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"processingParameterQuality", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityProcessingParameterQuality^  >^  processingParameterQuality {
        cli::array< level1ProductProductQualityProcessingParameterQuality^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityProcessingParameterQuality^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageDataQuality", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityImageDataQuality^  >^  imageDataQuality {
        cli::array< level1ProductProductQualityImageDataQuality^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityImageDataQuality^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"limits", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimits^  >^  limits {
        cli::array< level1ProductProductQualityLimits^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimits^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityRawDataQuality {
    
    private: System::String^  instrumentChannelField;
    
    private: System::String^  polarizationField;
    
    private: System::String^  gapSignificanceFlagField;
    
    private: System::String^  missingLinesSignificanceFlagField;
    
    private: System::String^  aDCOverflowSignificanceFlagField;
    
    private: System::String^  bitErrorsSignificanceFlagField;
    
    private: System::String^  iBiasOutsideLimitsFlagField;
    
    private: System::String^  qBiasOutsideLimitsFlagField;
    
    private: System::String^  iQImbalanceOutsideLimitsFlagField;
    
    private: System::String^  iQNonOrthogonalityOutsideLimitsFlagField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  instrumentChannel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polarization {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  gapSignificanceFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  missingLinesSignificanceFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  ADCOverflowSignificanceFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  bitErrorsSignificanceFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  IBiasOutsideLimitsFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  QBiasOutsideLimitsFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  IQImbalanceOutsideLimitsFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  IQNonOrthogonalityOutsideLimitsFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityAuxDataQuality {
    
    private: System::String^  orbitDataQualityLowFlagField;
    
    private: System::String^  attitudeDataQualityLowFlagField;
    
    private: System::String^  dEMqualityLowFlagField;
    
    private: System::String^  missingAuxDataFlagField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitDataQualityLowFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  attitudeDataQualityLowFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DEMqualityLowFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  missingAuxDataFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQuality {
    
    private: System::String^  dopplerAmbiguityNotZeroFlagField;
    
    private: System::String^  dopplerInconsistencyFlagField;
    
    private: System::String^  dopplerOutsideLimitsFlagsField;
    
    private: System::String^  dopplerDriftOutsideLimitsFlagsField;
    
    private: System::String^  chirpQualityLowFlagField;
    
    private: System::String^  geolocationQualityLowFlagField;
    
    private: cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  >^  averageDopplerCentroidInfoField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerAmbiguityNotZeroFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerInconsistencyFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerOutsideLimitsFlags {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerDriftOutsideLimitsFlags {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  chirpQualityLowFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  geolocationQualityLowFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"averageDopplerCentroidInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  >^  averageDopplerCentroidInfo {
        cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo {
    
    private: cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  >^  azimuthStartField;
    
    private: cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  >^  azimuthCenterField;
    
    private: cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  >^  azimuthStopField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"azimuthStart", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  >^  azimuthStart {
        cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"azimuthCenter", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  >^  azimuthCenter {
        cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"azimuthStop", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  >^  azimuthStop {
        cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart {
    
    private: System::String^  nearRangeField;
    
    private: System::String^  midRangeField;
    
    private: System::String^  farRangeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  nearRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  midRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  farRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter {
    
    private: System::String^  nearRangeField;
    
    private: System::String^  midRangeField;
    
    private: System::String^  farRangeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  nearRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  midRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  farRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop {
    
    private: System::String^  nearRangeField;
    
    private: System::String^  midRangeField;
    
    private: System::String^  farRangeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  nearRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  midRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  farRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityImageDataQuality {
    
    private: System::String^  polLayerField;
    
    private: System::String^  beamIDField;
    
    private: System::String^  dRAoffsetField;
    
    private: System::String^  nominalSNRField;
    
    private: System::String^  imageMeanFlagField;
    
    private: System::String^  imageStdDevFlagField;
    
    private: cli::array< level1ProductProductQualityImageDataQualityImageDataStatistics^  >^  imageDataStatisticsField;
    
    private: System::String^  layerIndexField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  nominalSNR {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageMeanFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageStdDevFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageDataStatistics", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityImageDataQualityImageDataStatistics^  >^  imageDataStatistics {
        cli::array< level1ProductProductQualityImageDataQualityImageDataStatistics^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityImageDataQualityImageDataStatistics^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  layerIndex {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityImageDataQualityImageDataStatistics {
    
    private: System::String^  meanField;
    
    private: System::String^  maxField;
    
    private: System::String^  minField;
    
    private: System::String^  stdDevField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  mean {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  max {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  min {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stdDev {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimits {
    
    private: cli::array< level1ProductProductQualityLimitsProcessing^  >^  processingField;
    
    private: cli::array< imageData^  >^  imageDataField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"processing", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessing^  >^  processing {
        cli::array< level1ProductProductQualityLimitsProcessing^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessing^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageData")]
    property cli::array< imageData^  >^  ImageData {
        cli::array< imageData^  >^  get();
        System::Void set(cli::array< imageData^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessing {
    
    private: System::String^  chirpQualityLimitField;
    
    private: System::String^  geolocationQualityLimitField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingGeometry^  >^  geometryField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingDoppler^  >^  dopplerField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingProcessingParameter^  >^  processingParameterField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingProcessingFlags^  >^  processingFlagsField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  >^  dopplerCentroidInformationField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  chirpQualityLimit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  geolocationQualityLimit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"geometry", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingGeometry^  >^  geometry {
        cli::array< level1ProductProductQualityLimitsProcessingGeometry^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingGeometry^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"doppler", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingDoppler^  >^  doppler {
        cli::array< level1ProductProductQualityLimitsProcessingDoppler^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingDoppler^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"processingParameter", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingProcessingParameter^  >^  processingParameter {
        cli::array< level1ProductProductQualityLimitsProcessingProcessingParameter^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameter^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"processingFlags", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingProcessingFlags^  >^  processingFlags {
        cli::array< level1ProductProductQualityLimitsProcessingProcessingFlags^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingProcessingFlags^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerCentroidInformation", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  >^  dopplerCentroidInformation {
        cli::array< level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingGeometry {
    
    private: System::String^  geometryCoordinateTypeField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameter^  >^  velocityParameterField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity^  >^  zeroDopplerVelocityField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRate^  >^  dopplerRateField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  geometryCoordinateType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"velocityParameter", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameter^  >^  velocityParameter {
        cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameter^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameter^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"zeroDopplerVelocity", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity^  >^  zeroDopplerVelocity {
        cli::array< level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerRate", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRate^  >^  dopplerRate {
        cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRate^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRate^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingGeometryVelocityParameter {
    
    private: System::String^  timeUTCField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial^  >^  velocityParameterPolynomialField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"velocityParameterPolynomial", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial^  >^  velocityParameterPolynomial {
        cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity {
    
    private: System::String^  velocityField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  velocity {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingGeometryDopplerRate {
    
    private: System::String^  timeUTCField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial^  >^  dopplerRatePolynomialField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerRatePolynomial", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial^  >^  dopplerRatePolynomial {
        cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDoppler {
    
    private: System::String^  dopplerBasebandEstimationMethodField;
    
    private: System::String^  dopplerGeometricEstimationMethodField;
    
    private: System::String^  dopplerCentroidCoordinateTypeField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid^  >^  dopplerCentroidField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerBasebandEstimationMethod {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerGeometricEstimationMethod {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerCentroidCoordinateType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerCentroid", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid^  >^  dopplerCentroid {
        cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid {
    
    private: System::String^  polLayerField;
    
    private: System::String^  dRAoffsetField;
    
    private: System::String^  beamIDField;
    
    private: System::String^  polLayerDopplerOffsetField;
    
    private: System::String^  numberOfBlocksField;
    
    private: System::String^  numberOfRejectedBlocksField;
    
    private: System::String^  numberOfDopplerRecordsField;
    
    private: System::String^  dopplerRecordAzimuthSpacingField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate^  >^  dopplerEstimateField;
    
    private: System::String^  layerIndexField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayerDopplerOffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfBlocks {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfRejectedBlocks {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  numberOfDopplerRecords {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerRecordAzimuthSpacing {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerEstimate", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate^  >^  dopplerEstimate {
        cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  layerIndex {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate {
    
    private: System::String^  timeUTCField;
    
    private: System::String^  dopplerAtMidRangeField;
    
    private: System::String^  geometricDopplerFlagField;
    
    private: System::String^  dopplerAmbiguityField;
    
    private: System::String^  dopplerConsistencyFlagField;
    
    private: System::String^  dopplerEstimateConfidenceField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler^  >^  basebandDopplerField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler^  >^  geometricDopplerField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  >^  combinedDopplerField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  timeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerAtMidRange {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  geometricDopplerFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerAmbiguity {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerConsistencyFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  dopplerEstimateConfidence {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"basebandDoppler", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler^  >^  basebandDoppler {
        cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"geometricDoppler", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler^  >^  geometricDoppler {
        cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"combinedDoppler", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  >^  combinedDoppler {
        cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingParameter {
    
    private: System::String^  beamIDField;
    
    private: System::String^  processingInfoCoordinateTypeField;
    
    private: System::String^  rangeLooksField;
    
    private: System::String^  azimuthLooksField;
    
    private: System::String^  rangeLookBandwidthField;
    
    private: System::String^  azimuthLookBandwidthField;
    
    private: System::String^  totalProcessedRangeBandwidthField;
    
    private: System::String^  totalProcessedAzimuthBandwidthField;
    
    private: System::String^  rangeWindowIDField;
    
    private: System::String^  rangeWindowCoefficientField;
    
    private: System::String^  azimuthWindowIDField;
    
    private: System::String^  azimuthWindowCoefficientField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression^  >^  rangeCompressionField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay^  >^  correctedInstrumentDelayField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  processingInfoCoordinateType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeLooks {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthLooks {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeLookBandwidth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthLookBandwidth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  totalProcessedRangeBandwidth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  totalProcessedAzimuthBandwidth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeWindowID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeWindowCoefficient {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthWindowID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthWindowCoefficient {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rangeCompression", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression^  >^  rangeCompression {
        cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"correctedInstrumentDelay", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay^  >^  correctedInstrumentDelay {
        cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression {
    
    private: cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo^  >^  segmentInfoField;
    
    private: cli::array< cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp^  >^  >^  chirpsField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"segmentInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo^  >^  segmentInfo {
        cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlArrayItemAttribute(L"referenceChirp", level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::typeid, 
    Form=System::Xml::Schema::XmlSchemaForm::Unqualified, IsNullable=false)]
    property cli::array< cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp^  >^  >^  chirps {
        cli::array< cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp^  >^  >^  get();
        System::Void set(cli::array< cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp^  >^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo {
    
    private: System::String^  polLayerField;
    
    private: cli::array< dataSegment^  >^  dataSegmentField;
    
    private: System::String^  segmentIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dataSegment")]
    property cli::array< dataSegment^  >^  DataSegment {
        cli::array< dataSegment^  >^  get();
        System::Void set(cli::array< dataSegment^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  segmentID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp {
    
    private: System::String^  pulseTypeField;
    
    private: System::String^  chirpDesignatorField;
    
    private: System::String^  chirpSlopeField;
    
    private: System::String^  pulseLengthField;
    
    private: System::String^  pulseBandwidthField;
    
    private: System::String^  centerFrequencyField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude^  >^  amplitudeField;
    
    private: cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase^  >^  phaseField;
    
    private: System::String^  pulseCodeField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  pulseType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  chirpDesignator {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  chirpSlope {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  pulseLength {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  pulseBandwidth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  centerFrequency {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"amplitude", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude^  >^  amplitude {
        cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"phase", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase^  >^  phase {
        cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  pulseCode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase {
    
    private: System::String^  validityRangeMinField;
    
    private: System::String^  validityRangeMaxField;
    
    private: System::String^  referencePointField;
    
    private: System::String^  polynomialDegreeField;
    
    private: cli::array< coefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMin {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  validityRangeMax {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  referencePoint {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polynomialDegree {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient", IsNullable=true)]
    property cli::array< coefficient^  >^  Coefficient {
        cli::array< coefficient^  >^  get();
        System::Void set(cli::array< coefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay {
    
    private: System::String^  polLayerField;
    
    private: System::String^  dRAoffsetField;
    
    private: System::String^  totalTimeDelayField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAoffset {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  totalTimeDelay {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingProcessingFlags {
    
    private: System::String^  rXGainCorrectedFlagField;
    
    private: System::String^  dRAChannelSyncFlagField;
    
    private: System::String^  dRAChannelDemixingPerformedFlagField;
    
    private: System::String^  hybridCouplerCorrectedFlagField;
    
    private: System::String^  chirpDriftCorrectedFlagField;
    
    private: System::String^  chirpReplicaUsedFlagField;
    
    private: System::String^  geometricDopplerUsedFlagField;
    
    private: System::String^  noiseCorrectedFlagField;
    
    private: System::String^  rangeSpreadingLossCorrectedFlagField;
    
    private: System::String^  scanSARBeamCorrectedFlagField;
    
    private: System::String^  spotLightBeamCorrectedFlagField;
    
    private: System::String^  azimuthPatternCorrectedFlagField;
    
    private: System::String^  elevationPatternCorrectedFlagField;
    
    private: System::String^  polarisationCorrectedFlagField;
    
    private: System::String^  detectedFlagField;
    
    private: System::String^  multiLookedFlagField;
    
    private: System::String^  propagationEffectsCorrectedFlagField;
    
    private: System::String^  geocodedFlagField;
    
    private: System::String^  incidenceAngleMaskGeneratedFlagField;
    
    private: System::String^  nominalProcessingPerformedFlagField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  RXGainCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAChannelSyncFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  DRAChannelDemixingPerformedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  hybridCouplerCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  chirpDriftCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  chirpReplicaUsedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  geometricDopplerUsedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  noiseCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  rangeSpreadingLossCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  scanSARBeamCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  spotLightBeamCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  azimuthPatternCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  elevationPatternCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polarisationCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  detectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  multiLookedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  propagationEffectsCorrectedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  geocodedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  incidenceAngleMaskGeneratedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  nominalProcessingPerformedFlag {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDopplerCentroidInformation {
    
    private: System::String^  fdcNearRangeLimitField;
    
    private: System::String^  fdcMidRangeLimitField;
    
    private: System::String^  fdcFarRangeLimitField;
    
    private: System::String^  fdcLinearRangeDriftMaxLimitField;
    
    private: System::String^  fdcLinearAzimuthDriftMaxLimitField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  fdcNearRangeLimit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  fdcMidRangeLimit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  fdcFarRangeLimit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  fdcLinearRangeDriftMaxLimit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  fdcLinearAzimuthDriftMaxLimit {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecific {
    
    private: cli::array< level1ProductProductSpecificComplexImageInfo^  >^  complexImageInfoField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"complexImageInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductProductSpecificComplexImageInfo^  >^  complexImageInfo {
        cli::array< level1ProductProductSpecificComplexImageInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductSpecificComplexImageInfo^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificComplexImageInfo {
    
    private: System::String^  commonPRFField;
    
    private: System::String^  commonRSFField;
    
    private: System::String^  slantRangeResolutionField;
    
    private: System::String^  projectedSpacingAzimuthField;
    
    private: System::String^  imageCoordinateTypeField;
    
    private: System::String^  imageDataStartWithField;
    
    private: System::String^  quicklookDataStartWithField;
    
    private: cli::array< projectedSpacingRange^  >^  projectedSpacingRangeField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  commonPRF {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  commonRSF {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  slantRangeResolution {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  projectedSpacingAzimuth {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageCoordinateType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imageDataStartWith {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  quicklookDataStartWith {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"projectedSpacingRange")]
    property cli::array< projectedSpacingRange^  >^  ProjectedSpacingRange {
        cli::array< projectedSpacingRange^  >^  get();
        System::Void set(cli::array< projectedSpacingRange^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetup {
    
    private: cli::array< level1ProductSetupOrderInfo^  >^  orderInfoField;
    
    private: cli::array< level1ProductSetupInputData^  >^  inputDataField;
    
    private: cli::array< cli::array< level1ProductSetupProcessingStepsSoftware^  >^  >^  processingStepsField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"orderInfo", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductSetupOrderInfo^  >^  orderInfo {
        cli::array< level1ProductSetupOrderInfo^  >^  get();
        System::Void set(cli::array< level1ProductSetupOrderInfo^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"inputData", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductSetupInputData^  >^  inputData {
        cli::array< level1ProductSetupInputData^  >^  get();
        System::Void set(cli::array< level1ProductSetupInputData^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlArrayItemAttribute(L"software", level1ProductSetupProcessingStepsSoftware::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=false)]
    property cli::array< cli::array< level1ProductSetupProcessingStepsSoftware^  >^  >^  processingSteps {
        cli::array< cli::array< level1ProductSetupProcessingStepsSoftware^  >^  >^  get();
        System::Void set(cli::array< cli::array< level1ProductSetupProcessingStepsSoftware^  >^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfo {
    
    private: System::String^  orderTypeField;
    
    private: System::String^  processingPriorityField;
    
    private: System::String^  orbitAccuracyField;
    
    private: System::String^  sceneSpecificationField;
    
    private: System::String^  imagingModeField;
    
    private: System::String^  lookDirectionField;
    
    private: System::String^  antennaReceiveConfigurationField;
    
    private: System::String^  polarisationModeField;
    
    private: System::String^  elevationBeamConfigurationField;
    
    private: System::String^  productVariantField;
    
    private: System::String^  resolutionVariantField;
    
    private: System::String^  projectionField;
    
    private: System::String^  procGainAttenuationField;
    
    private: cli::array< cli::array< level1ProductSetupOrderInfoOrderedSceneSceneExtent^  >^  >^  orderedSceneField;
    
    private: cli::array< level1ProductSetupOrderInfoPolList^  >^  polListField;
    
    private: cli::array< level1ProductSetupOrderInfoUserData^  >^  userDataField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orderType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  processingPriority {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitAccuracy {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  sceneSpecification {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  imagingMode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  lookDirection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  antennaReceiveConfiguration {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polarisationMode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  elevationBeamConfiguration {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  productVariant {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  resolutionVariant {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  projection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  procGainAttenuation {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified), 
    System::Xml::Serialization::XmlArrayItemAttribute(L"sceneExtent", level1ProductSetupOrderInfoOrderedSceneSceneExtent::typeid, Form=System::Xml::Schema::XmlSchemaForm::Unqualified, 
    IsNullable=false)]
    property cli::array< cli::array< level1ProductSetupOrderInfoOrderedSceneSceneExtent^  >^  >^  orderedScene {
        cli::array< cli::array< level1ProductSetupOrderInfoOrderedSceneSceneExtent^  >^  >^  get();
        System::Void set(cli::array< cli::array< level1ProductSetupOrderInfoOrderedSceneSceneExtent^  >^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"polList", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductSetupOrderInfoPolList^  >^  polList {
        cli::array< level1ProductSetupOrderInfoPolList^  >^  get();
        System::Void set(cli::array< level1ProductSetupOrderInfoPolList^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"userData", Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property cli::array< level1ProductSetupOrderInfoUserData^  >^  userData {
        cli::array< level1ProductSetupOrderInfoUserData^  >^  get();
        System::Void set(cli::array< level1ProductSetupOrderInfoUserData^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfoOrderedSceneSceneExtent {
    
    private: System::String^  startTimeUTCField;
    
    private: System::String^  stopTimeUTCField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  startTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  stopTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfoPolList {
    
    private: System::String^  polLayerField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  polLayer {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfoUserData {
    
    private: System::String^  customerOrderIDField;
    
    private: System::String^  customerOrderNameField;
    
    private: System::String^  customerOrderItemIDField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  customerOrderID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  customerOrderName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  customerOrderItemID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupInputData {
    
    private: System::String^  logicalDataTakeIDField;
    
    private: System::String^  uniqueDataTakeIDField;
    
    private: System::String^  level0ProductIDField;
    
    private: System::String^  l0BaseGenerationTimeUTCField;
    
    private: System::String^  l0SARGenerationTimeUTCField;
    
    private: System::String^  iOCSAuxProductIDField;
    
    private: System::String^  iOCSAuxProductFileNameField;
    
    private: System::String^  iOCSAuxProductVersionField;
    
    private: System::String^  iOCSAuxProductGenerationTimeUTCField;
    
    private: System::String^  orbitProductIDField;
    
    private: System::String^  orbitProductFileNameField;
    
    private: System::String^  orbitAccuracyField;
    
    private: System::String^  orbitProductGenerationTimeUTCField;
    
    private: System::String^  attitudeProductIDField;
    
    private: System::String^  attitudeProductFileNameField;
    
    private: System::String^  attitudeProductGenerationTimeUTCField;
    
    private: System::String^  configurationIDField;
    
    private: System::String^  configurationFileNameField;
    
    private: System::String^  configurationGenerationTimeUTCField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  logicalDataTakeID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  uniqueDataTakeID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  level0ProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  L0BaseGenerationTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  L0SARGenerationTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  IOCSAuxProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  IOCSAuxProductFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  IOCSAuxProductVersion {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  IOCSAuxProductGenerationTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitProductFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitAccuracy {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  orbitProductGenerationTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  attitudeProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  attitudeProductFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  attitudeProductGenerationTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  configurationID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  configurationFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  configurationGenerationTimeUTC {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupProcessingStepsSoftware {
    
    private: System::String^  softwareIDField;
    
    private: System::String^  softwareVersionField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  softwareID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(Form=System::Xml::Schema::XmlSchemaForm::Unqualified)]
    property System::String^  softwareVersion {
        System::String^  get();
        System::Void set(System::String^  value);
    }
};


inline System::String^  generationSystem::version::get() {
    return this->versionField;
}
inline System::Void generationSystem::version::set(System::String^  value) {
    this->versionField = value;
}

inline System::String^  generationSystem::Value::get() {
    return this->valueField;
}
inline System::Void generationSystem::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  file::size::get() {
    return this->sizeField;
}
inline System::Void file::size::set(System::String^  value) {
    this->sizeField = value;
}

inline cli::array< fileLocation^  >^  file::location::get() {
    return this->locationField;
}
inline System::Void file::location::set(cli::array< fileLocation^  >^  value) {
    this->locationField = value;
}


inline System::String^  fileLocation::host::get() {
    return this->hostField;
}
inline System::Void fileLocation::host::set(System::String^  value) {
    this->hostField = value;
}

inline System::String^  fileLocation::path::get() {
    return this->pathField;
}
inline System::Void fileLocation::path::set(System::String^  value) {
    this->pathField = value;
}

inline System::String^  fileLocation::filename::get() {
    return this->filenameField;
}
inline System::Void fileLocation::filename::set(System::String^  value) {
    this->filenameField = value;
}


inline System::String^  imageData::polLayer::get() {
    return this->polLayerField;
}
inline System::Void imageData::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline cli::array< file^  >^  imageData::File::get() {
    return this->fileField;
}
inline System::Void imageData::File::set(cli::array< file^  >^  value) {
    this->fileField = value;
}

inline cli::array< imageDataImageMean^  >^  imageData::imageMean::get() {
    return this->imageMeanField;
}
inline System::Void imageData::imageMean::set(cli::array< imageDataImageMean^  >^  value) {
    this->imageMeanField = value;
}

inline cli::array< imageDataImageSigma^  >^  imageData::imageSigma::get() {
    return this->imageSigmaField;
}
inline System::Void imageData::imageSigma::set(cli::array< imageDataImageSigma^  >^  value) {
    this->imageSigmaField = value;
}

inline System::String^  imageData::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void imageData::layerIndex::set(System::String^  value) {
    this->layerIndexField = value;
}


inline System::String^  imageDataImageMean::expected::get() {
    return this->expectedField;
}
inline System::Void imageDataImageMean::expected::set(System::String^  value) {
    this->expectedField = value;
}

inline System::String^  imageDataImageMean::minimum::get() {
    return this->minimumField;
}
inline System::Void imageDataImageMean::minimum::set(System::String^  value) {
    this->minimumField = value;
}

inline System::String^  imageDataImageMean::maximum::get() {
    return this->maximumField;
}
inline System::Void imageDataImageMean::maximum::set(System::String^  value) {
    this->maximumField = value;
}


inline System::String^  imageDataImageSigma::expected::get() {
    return this->expectedField;
}
inline System::Void imageDataImageSigma::expected::set(System::String^  value) {
    this->expectedField = value;
}

inline System::String^  imageDataImageSigma::minimum::get() {
    return this->minimumField;
}
inline System::Void imageDataImageSigma::minimum::set(System::String^  value) {
    this->minimumField = value;
}

inline System::String^  imageDataImageSigma::maximum::get() {
    return this->maximumField;
}
inline System::Void imageDataImageSigma::maximum::set(System::String^  value) {
    this->maximumField = value;
}


inline System::String^  quicklooks::polLayer::get() {
    return this->polLayerField;
}
inline System::Void quicklooks::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  quicklooks::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void quicklooks::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::String^  quicklooks::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void quicklooks::imageDataDepth::set(System::String^  value) {
    this->imageDataDepthField = value;
}

inline cli::array< file^  >^  quicklooks::File::get() {
    return this->fileField;
}
inline System::Void quicklooks::File::set(cli::array< file^  >^  value) {
    this->fileField = value;
}

inline cli::array< imageRaster^  >^  quicklooks::ImageRaster::get() {
    return this->imageRasterField;
}
inline System::Void quicklooks::ImageRaster::set(cli::array< imageRaster^  >^  value) {
    this->imageRasterField = value;
}

inline System::String^  quicklooks::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void quicklooks::layerIndex::set(System::String^  value) {
    this->layerIndexField = value;
}


inline System::String^  imageRaster::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void imageRaster::numberOfRows::set(System::String^  value) {
    this->numberOfRowsField = value;
}

inline System::String^  imageRaster::numberOfColumns::get() {
    return this->numberOfColumnsField;
}
inline System::Void imageRaster::numberOfColumns::set(System::String^  value) {
    this->numberOfColumnsField = value;
}

inline System::String^  imageRaster::groundRangeResolution::get() {
    return this->groundRangeResolutionField;
}
inline System::Void imageRaster::groundRangeResolution::set(System::String^  value) {
    this->groundRangeResolutionField = value;
}

inline System::String^  imageRaster::azimuthResolution::get() {
    return this->azimuthResolutionField;
}
inline System::Void imageRaster::azimuthResolution::set(System::String^  value) {
    this->azimuthResolutionField = value;
}

inline System::String^  imageRaster::azimuthLooks::get() {
    return this->azimuthLooksField;
}
inline System::Void imageRaster::azimuthLooks::set(System::String^  value) {
    this->azimuthLooksField = value;
}

inline System::String^  imageRaster::rangeLooks::get() {
    return this->rangeLooksField;
}
inline System::Void imageRaster::rangeLooks::set(System::String^  value) {
    this->rangeLooksField = value;
}

inline System::String^  imageRaster::columnBlockLength::get() {
    return this->columnBlockLengthField;
}
inline System::Void imageRaster::columnBlockLength::set(System::String^  value) {
    this->columnBlockLengthField = value;
}

inline System::String^  imageRaster::rowBlockLength::get() {
    return this->rowBlockLengthField;
}
inline System::Void imageRaster::rowBlockLength::set(System::String^  value) {
    this->rowBlockLengthField = value;
}

inline System::String^  imageRaster::projectedSpacingAzimuth::get() {
    return this->projectedSpacingAzimuthField;
}
inline System::Void imageRaster::projectedSpacingAzimuth::set(System::String^  value) {
    this->projectedSpacingAzimuthField = value;
}

inline cli::array< imageRasterRowSpacing^  >^  imageRaster::rowSpacing::get() {
    return this->rowSpacingField;
}
inline System::Void imageRaster::rowSpacing::set(cli::array< imageRasterRowSpacing^  >^  value) {
    this->rowSpacingField = value;
}

inline cli::array< imageRasterColumnSpacing^  >^  imageRaster::columnSpacing::get() {
    return this->columnSpacingField;
}
inline System::Void imageRaster::columnSpacing::set(cli::array< imageRasterColumnSpacing^  >^  value) {
    this->columnSpacingField = value;
}

inline cli::array< projectedSpacingRange^  >^  imageRaster::ProjectedSpacingRange::get() {
    return this->projectedSpacingRangeField;
}
inline System::Void imageRaster::ProjectedSpacingRange::set(cli::array< projectedSpacingRange^  >^  value) {
    this->projectedSpacingRangeField = value;
}


inline System::String^  imageRasterRowSpacing::units::get() {
    return this->unitsField;
}
inline System::Void imageRasterRowSpacing::units::set(System::String^  value) {
    this->unitsField = value;
}

inline System::String^  imageRasterRowSpacing::Value::get() {
    return this->valueField;
}
inline System::Void imageRasterRowSpacing::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  imageRasterColumnSpacing::units::get() {
    return this->unitsField;
}
inline System::Void imageRasterColumnSpacing::units::set(System::String^  value) {
    this->unitsField = value;
}

inline System::String^  imageRasterColumnSpacing::Value::get() {
    return this->valueField;
}
inline System::Void imageRasterColumnSpacing::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  projectedSpacingRange::groundNear::get() {
    return this->groundNearField;
}
inline System::Void projectedSpacingRange::groundNear::set(System::String^  value) {
    this->groundNearField = value;
}

inline System::String^  projectedSpacingRange::groundFar::get() {
    return this->groundFarField;
}
inline System::Void projectedSpacingRange::groundFar::set(System::String^  value) {
    this->groundFarField = value;
}

inline System::String^  projectedSpacingRange::slantRange::get() {
    return this->slantRangeField;
}
inline System::Void projectedSpacingRange::slantRange::set(System::String^  value) {
    this->slantRangeField = value;
}


inline System::String^  compositeQuicklook::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void compositeQuicklook::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::String^  compositeQuicklook::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void compositeQuicklook::imageDataDepth::set(System::String^  value) {
    this->imageDataDepthField = value;
}

inline cli::array< file^  >^  compositeQuicklook::File::get() {
    return this->fileField;
}
inline System::Void compositeQuicklook::File::set(cli::array< file^  >^  value) {
    this->fileField = value;
}

inline cli::array< compositeQuicklookPolLayerCode^  >^  compositeQuicklook::polLayerCode::get() {
    return this->polLayerCodeField;
}
inline System::Void compositeQuicklook::polLayerCode::set(cli::array< compositeQuicklookPolLayerCode^  >^  value) {
    this->polLayerCodeField = value;
}


inline System::String^  compositeQuicklookPolLayerCode::polarisation::get() {
    return this->polarisationField;
}
inline System::Void compositeQuicklookPolLayerCode::polarisation::set(System::String^  value) {
    this->polarisationField = value;
}

inline System::String^  compositeQuicklookPolLayerCode::colour::get() {
    return this->colourField;
}
inline System::Void compositeQuicklookPolLayerCode::colour::set(System::String^  value) {
    this->colourField = value;
}


inline System::String^  browseImage::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void browseImage::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::String^  browseImage::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void browseImage::imageDataDepth::set(System::String^  value) {
    this->imageDataDepthField = value;
}

inline cli::array< file^  >^  browseImage::File::get() {
    return this->fileField;
}
inline System::Void browseImage::File::set(cli::array< file^  >^  value) {
    this->fileField = value;
}


inline System::String^  coefficient::exponent::get() {
    return this->exponentField;
}
inline System::Void coefficient::exponent::set(System::String^  value) {
    this->exponentField = value;
}

inline System::String^  coefficient::Value::get() {
    return this->valueField;
}
inline System::Void coefficient::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  dataSegment::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void dataSegment::startTimeUTC::set(System::String^  value) {
    this->startTimeUTCField = value;
}

inline System::String^  dataSegment::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void dataSegment::stopTimeUTC::set(System::String^  value) {
    this->stopTimeUTCField = value;
}

inline System::String^  dataSegment::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void dataSegment::numberOfRows::set(System::String^  value) {
    this->numberOfRowsField = value;
}

inline System::String^  dataSegment::segmentID::get() {
    return this->segmentIDField;
}
inline System::Void dataSegment::segmentID::set(System::String^  value) {
    this->segmentIDField = value;
}


inline System::String^  gainExt::angle::get() {
    return this->angleField;
}
inline System::Void gainExt::angle::set(System::String^  value) {
    this->angleField = value;
}

inline System::String^  gainExt::Value::get() {
    return this->valueField;
}
inline System::Void gainExt::Value::set(System::String^  value) {
    this->valueField = value;
}


inline cli::array< System::Object^  >^  level1Product::Items::get() {
    return this->itemsField;
}
inline System::Void level1Product::Items::set(cli::array< System::Object^  >^  value) {
    this->itemsField = value;
}


inline cli::array< level1ProductCalibrationCalibrationData^  >^  level1ProductCalibration::calibrationData::get() {
    return this->calibrationDataField;
}
inline System::Void level1ProductCalibration::calibrationData::set(cli::array< level1ProductCalibrationCalibrationData^  >^  value) {
    this->calibrationDataField = value;
}

inline cli::array< level1ProductCalibrationNominalGeometricPerformance^  >^  level1ProductCalibration::nominalGeometricPerformance::get() {
    return this->nominalGeometricPerformanceField;
}
inline System::Void level1ProductCalibration::nominalGeometricPerformance::set(cli::array< level1ProductCalibrationNominalGeometricPerformance^  >^  value) {
    this->nominalGeometricPerformanceField = value;
}

inline cli::array< level1ProductCalibrationCalibrationConstant^  >^  level1ProductCalibration::calibrationConstant::get() {
    return this->calibrationConstantField;
}
inline System::Void level1ProductCalibration::calibrationConstant::set(cli::array< level1ProductCalibrationCalibrationConstant^  >^  value) {
    this->calibrationConstantField = value;
}


inline System::String^  level1ProductCalibrationCalibrationData::radiometricDEMID::get() {
    return this->radiometricDEMIDField;
}
inline System::Void level1ProductCalibrationCalibrationData::radiometricDEMID::set(System::String^  value) {
    this->radiometricDEMIDField = value;
}

inline System::String^  level1ProductCalibrationCalibrationData::numberOfAntennaPatterns::get() {
    return this->numberOfAntennaPatternsField;
}
inline System::Void level1ProductCalibrationCalibrationData::numberOfAntennaPatterns::set(System::String^  value) {
    this->numberOfAntennaPatternsField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  level1ProductCalibrationCalibrationData::antennaPattern::get() {
    return this->antennaPatternField;
}
inline System::Void level1ProductCalibrationCalibrationData::antennaPattern::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  value) {
    this->antennaPatternField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  >^  level1ProductCalibrationCalibrationData::calibrationInfoAndInstrumentCharacteristics::get() {
    return this->calibrationInfoAndInstrumentCharacteristicsField;
}
inline System::Void level1ProductCalibrationCalibrationData::calibrationInfoAndInstrumentCharacteristics::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  >^  value) {
    this->calibrationInfoAndInstrumentCharacteristicsField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPattern::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPattern::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPattern::azimuthSteeringAngle::get() {
    return this->azimuthSteeringAngleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::azimuthSteeringAngle::set(System::String^  value) {
    this->azimuthSteeringAngleField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  level1ProductCalibrationCalibrationDataAntennaPattern::elevationPattern::get() {
    return this->elevationPatternField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::elevationPattern::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  value) {
    this->elevationPatternField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  >^  level1ProductCalibrationCalibrationDataAntennaPattern::azimuthPattern::get() {
    return this->azimuthPatternField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::azimuthPattern::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  >^  value) {
    this->azimuthPatternField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  >^  level1ProductCalibrationCalibrationDataAntennaPattern::elevationLookAngles::get() {
    return this->elevationLookAnglesField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::elevationLookAngles::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  >^  value) {
    this->elevationLookAnglesField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  level1ProductCalibrationCalibrationDataAntennaPattern::beamPointingVector::get() {
    return this->beamPointingVectorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::beamPointingVector::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  value) {
    this->beamPointingVectorField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::referenceGain::get() {
    return this->referenceGainField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::referenceGain::set(System::String^  value) {
    this->referenceGainField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::description::get() {
    return this->descriptionField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::description::set(System::String^  value) {
    this->descriptionField = value;
}

inline cli::array< gainExt^  >^  level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::GainExt::get() {
    return this->gainExtField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::GainExt::set(cli::array< gainExt^  >^  value) {
    this->gainExtField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::referenceGain::get() {
    return this->referenceGainField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::referenceGain::set(System::String^  value) {
    this->referenceGainField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::description::get() {
    return this->descriptionField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::description::set(System::String^  value) {
    this->descriptionField = value;
}

inline cli::array< gainExt^  >^  level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::GainExt::get() {
    return this->gainExtField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::GainExt::set(cli::array< gainExt^  >^  value) {
    this->gainExtField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::azimuthBeamID::get() {
    return this->azimuthBeamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::azimuthBeamID::set(System::String^  value) {
    this->azimuthBeamIDField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::fullPerformance::get() {
    return this->fullPerformanceField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::fullPerformance::set(System::String^  value) {
    this->fullPerformanceField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  >^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMin::get() {
    return this->coverageRegionMinField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMin::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  >^  value) {
    this->coverageRegionMinField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  >^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMax::get() {
    return this->coverageRegionMaxField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMax::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  >^  value) {
    this->coverageRegionMaxField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::incidenceAngle::set(System::String^  value) {
    this->incidenceAngleField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::incidenceAngle::set(System::String^  value) {
    this->incidenceAngleField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::Value::set(System::String^  value) {
    this->valueField = value;
}


inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  >^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::x::get() {
    return this->xField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::x::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  >^  value) {
    this->xField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  >^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::y::get() {
    return this->yField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::y::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  >^  value) {
    this->yField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  >^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::z::get() {
    return this->zField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::z::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  >^  value) {
    this->zField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::error::get() {
    return this->errorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::error::set(System::String^  value) {
    this->errorField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::error::get() {
    return this->errorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::error::set(System::String^  value) {
    this->errorField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::error::get() {
    return this->errorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::error::set(System::String^  value) {
    this->errorField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::Value::set(System::String^  value) {
    this->valueField = value;
}


inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::absCalFactor::get() {
    return this->absCalFactorField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::absCalFactor::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  value) {
    this->absCalFactorField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::totalInstrumentTimeDelay::get() {
    return this->totalInstrumentTimeDelayField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::totalInstrumentTimeDelay::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  >^  value) {
    this->totalInstrumentTimeDelayField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::antennaMode::get() {
    return this->antennaModeField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::antennaMode::set(System::String^  value) {
    this->antennaModeField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::imagingMode::get() {
    return this->imagingModeField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::imagingMode::set(System::String^  value) {
    this->imagingModeField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::lookDirection::get() {
    return this->lookDirectionField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::lookDirection::set(System::String^  value) {
    this->lookDirectionField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::polarisationChannel::get() {
    return this->polarisationChannelField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::polarisationChannel::set(System::String^  value) {
    this->polarisationChannelField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::instrCESystematicTimeDelay::get() {
    return this->instrCESystematicTimeDelayField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::instrCESystematicTimeDelay::set(System::String^  value) {
    this->instrCESystematicTimeDelayField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::internalDelay::get() {
    return this->internalDelayField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::internalDelay::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  value) {
    this->internalDelayField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::polarisationChannel::get() {
    return this->polarisationChannelField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::polarisationChannel::set(System::String^  value) {
    this->polarisationChannelField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductCalibrationNominalGeometricPerformance::azimuthRes::get() {
    return this->azimuthResField;
}
inline System::Void level1ProductCalibrationNominalGeometricPerformance::azimuthRes::set(System::String^  value) {
    this->azimuthResField = value;
}

inline System::String^  level1ProductCalibrationNominalGeometricPerformance::slantRangeRes::get() {
    return this->slantRangeResField;
}
inline System::Void level1ProductCalibrationNominalGeometricPerformance::slantRangeRes::set(System::String^  value) {
    this->slantRangeResField = value;
}

inline System::String^  level1ProductCalibrationNominalGeometricPerformance::nominalSwathWidth::get() {
    return this->nominalSwathWidthField;
}
inline System::Void level1ProductCalibrationNominalGeometricPerformance::nominalSwathWidth::set(System::String^  value) {
    this->nominalSwathWidthField = value;
}


inline System::String^  level1ProductCalibrationCalibrationConstant::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductCalibrationCalibrationConstant::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductCalibrationCalibrationConstant::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}

inline System::String^  level1ProductCalibrationCalibrationConstant::calFactor::get() {
    return this->calFactorField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::calFactor::set(System::String^  value) {
    this->calFactorField = value;
}

inline System::String^  level1ProductCalibrationCalibrationConstant::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::layerIndex::set(System::String^  value) {
    this->layerIndexField = value;
}


inline System::String^  level1ProductGeneralHeader::itemName::get() {
    return this->itemNameField;
}
inline System::Void level1ProductGeneralHeader::itemName::set(System::String^  value) {
    this->itemNameField = value;
}

inline System::String^  level1ProductGeneralHeader::mission::get() {
    return this->missionField;
}
inline System::Void level1ProductGeneralHeader::mission::set(System::String^  value) {
    this->missionField = value;
}

inline System::String^  level1ProductGeneralHeader::source::get() {
    return this->sourceField;
}
inline System::Void level1ProductGeneralHeader::source::set(System::String^  value) {
    this->sourceField = value;
}

inline System::String^  level1ProductGeneralHeader::destination::get() {
    return this->destinationField;
}
inline System::Void level1ProductGeneralHeader::destination::set(System::String^  value) {
    this->destinationField = value;
}

inline System::String^  level1ProductGeneralHeader::generationTime::get() {
    return this->generationTimeField;
}
inline System::Void level1ProductGeneralHeader::generationTime::set(System::String^  value) {
    this->generationTimeField = value;
}

inline System::String^  level1ProductGeneralHeader::referenceDocument::get() {
    return this->referenceDocumentField;
}
inline System::Void level1ProductGeneralHeader::referenceDocument::set(System::String^  value) {
    this->referenceDocumentField = value;
}

inline System::String^  level1ProductGeneralHeader::revision::get() {
    return this->revisionField;
}
inline System::Void level1ProductGeneralHeader::revision::set(System::String^  value) {
    this->revisionField = value;
}

inline System::String^  level1ProductGeneralHeader::revisionComment::get() {
    return this->revisionCommentField;
}
inline System::Void level1ProductGeneralHeader::revisionComment::set(System::String^  value) {
    this->revisionCommentField = value;
}

inline System::String^  level1ProductGeneralHeader::remark::get() {
    return this->remarkField;
}
inline System::Void level1ProductGeneralHeader::remark::set(System::String^  value) {
    this->remarkField = value;
}

inline cli::array< generationSystem^  >^  level1ProductGeneralHeader::GenerationSystem::get() {
    return this->generationSystemField;
}
inline System::Void level1ProductGeneralHeader::GenerationSystem::set(cli::array< generationSystem^  >^  value) {
    this->generationSystemField = value;
}

inline System::String^  level1ProductGeneralHeader::fileName::get() {
    return this->fileNameField;
}
inline System::Void level1ProductGeneralHeader::fileName::set(System::String^  value) {
    this->fileNameField = value;
}

inline System::String^  level1ProductGeneralHeader::fileVersion::get() {
    return this->fileVersionField;
}
inline System::Void level1ProductGeneralHeader::fileVersion::set(System::String^  value) {
    this->fileVersionField = value;
}

inline System::String^  level1ProductGeneralHeader::status::get() {
    return this->statusField;
}
inline System::Void level1ProductGeneralHeader::status::set(System::String^  value) {
    this->statusField = value;
}


inline System::String^  level1ProductInstrument::instrumentInfoCoordinateType::get() {
    return this->instrumentInfoCoordinateTypeField;
}
inline System::Void level1ProductInstrument::instrumentInfoCoordinateType::set(System::String^  value) {
    this->instrumentInfoCoordinateTypeField = value;
}

inline cli::array< level1ProductInstrumentRadarParameters^  >^  level1ProductInstrument::radarParameters::get() {
    return this->radarParametersField;
}
inline System::Void level1ProductInstrument::radarParameters::set(cli::array< level1ProductInstrumentRadarParameters^  >^  value) {
    this->radarParametersField = value;
}

inline cli::array< level1ProductInstrumentSettings^  >^  level1ProductInstrument::settings::get() {
    return this->settingsField;
}
inline System::Void level1ProductInstrument::settings::set(cli::array< level1ProductInstrumentSettings^  >^  value) {
    this->settingsField = value;
}


inline System::String^  level1ProductInstrumentRadarParameters::centerFrequency::get() {
    return this->centerFrequencyField;
}
inline System::Void level1ProductInstrumentRadarParameters::centerFrequency::set(System::String^  value) {
    this->centerFrequencyField = value;
}


inline System::String^  level1ProductInstrumentSettings::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductInstrumentSettings::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductInstrumentSettings::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductInstrumentSettings::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}

inline System::String^  level1ProductInstrumentSettings::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductInstrumentSettings::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductInstrumentSettings::numberOfRxGainChanges::get() {
    return this->numberOfRxGainChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfRxGainChanges::set(System::String^  value) {
    this->numberOfRxGainChangesField = value;
}

inline System::String^  level1ProductInstrumentSettings::quantisationID::get() {
    return this->quantisationIDField;
}
inline System::Void level1ProductInstrumentSettings::quantisationID::set(System::String^  value) {
    this->quantisationIDField = value;
}

inline System::String^  level1ProductInstrumentSettings::quantisationControl::get() {
    return this->quantisationControlField;
}
inline System::Void level1ProductInstrumentSettings::quantisationControl::set(System::String^  value) {
    this->quantisationControlField = value;
}

inline System::String^  level1ProductInstrumentSettings::numberOfPRFChanges::get() {
    return this->numberOfPRFChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfPRFChanges::set(System::String^  value) {
    this->numberOfPRFChangesField = value;
}

inline System::String^  level1ProductInstrumentSettings::numberOfEchoWindowPositionChanges::get() {
    return this->numberOfEchoWindowPositionChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfEchoWindowPositionChanges::set(System::String^  value) {
    this->numberOfEchoWindowPositionChangesField = value;
}

inline System::String^  level1ProductInstrumentSettings::numberOfEchoWindowLengthChanges::get() {
    return this->numberOfEchoWindowLengthChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfEchoWindowLengthChanges::set(System::String^  value) {
    this->numberOfEchoWindowLengthChangesField = value;
}

inline System::String^  level1ProductInstrumentSettings::numberOfSettingRecords::get() {
    return this->numberOfSettingRecordsField;
}
inline System::Void level1ProductInstrumentSettings::numberOfSettingRecords::set(System::String^  value) {
    this->numberOfSettingRecordsField = value;
}

inline cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  level1ProductInstrumentSettings::rxGainSetting::get() {
    return this->rxGainSettingField;
}
inline System::Void level1ProductInstrumentSettings::rxGainSetting::set(cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  value) {
    this->rxGainSettingField = value;
}

inline cli::array< level1ProductInstrumentSettingsRxBandwidth^  >^  level1ProductInstrumentSettings::rxBandwidth::get() {
    return this->rxBandwidthField;
}
inline System::Void level1ProductInstrumentSettings::rxBandwidth::set(cli::array< level1ProductInstrumentSettingsRxBandwidth^  >^  value) {
    this->rxBandwidthField = value;
}

inline cli::array< level1ProductInstrumentSettingsRSF^  >^  level1ProductInstrumentSettings::RSF::get() {
    return this->rSFField;
}
inline System::Void level1ProductInstrumentSettings::RSF::set(cli::array< level1ProductInstrumentSettingsRSF^  >^  value) {
    this->rSFField = value;
}

inline cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  level1ProductInstrumentSettings::settingRecord::get() {
    return this->settingRecordField;
}
inline System::Void level1ProductInstrumentSettings::settingRecord::set(cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  value) {
    this->settingRecordField = value;
}


inline System::String^  level1ProductInstrumentSettingsRxGainSetting::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSetting::startTimeUTC::set(System::String^  value) {
    this->startTimeUTCField = value;
}

inline System::String^  level1ProductInstrumentSettingsRxGainSetting::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSetting::stopTimeUTC::set(System::String^  value) {
    this->stopTimeUTCField = value;
}

inline cli::array< level1ProductInstrumentSettingsRxGainSettingRxGain^  >^  level1ProductInstrumentSettingsRxGainSetting::rxGain::get() {
    return this->rxGainField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSetting::rxGain::set(cli::array< level1ProductInstrumentSettingsRxGainSettingRxGain^  >^  value) {
    this->rxGainField = value;
}


inline System::String^  level1ProductInstrumentSettingsRxGainSettingRxGain::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSettingRxGain::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::String^  level1ProductInstrumentSettingsRxGainSettingRxGain::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSettingRxGain::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsRxBandwidth::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsRxBandwidth::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::String^  level1ProductInstrumentSettingsRxBandwidth::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsRxBandwidth::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsRSF::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsRSF::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::String^  level1ProductInstrumentSettingsRSF::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsRSF::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsSettingRecord::pulseType::get() {
    return this->pulseTypeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::pulseType::set(System::String^  value) {
    this->pulseTypeField = value;
}

inline System::String^  level1ProductInstrumentSettingsSettingRecord::echoIndex::get() {
    return this->echoIndexField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::echoIndex::set(System::String^  value) {
    this->echoIndexField = value;
}

inline cli::array< dataSegment^  >^  level1ProductInstrumentSettingsSettingRecord::DataSegment::get() {
    return this->dataSegmentField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::DataSegment::set(cli::array< dataSegment^  >^  value) {
    this->dataSegmentField = value;
}

inline cli::array< level1ProductInstrumentSettingsSettingRecordPRF^  >^  level1ProductInstrumentSettingsSettingRecord::PRF::get() {
    return this->pRFField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::PRF::set(cli::array< level1ProductInstrumentSettingsSettingRecordPRF^  >^  value) {
    this->pRFField = value;
}

inline cli::array< level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  >^  level1ProductInstrumentSettingsSettingRecord::echoWindowPosition::get() {
    return this->echoWindowPositionField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::echoWindowPosition::set(cli::array< level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  >^  value) {
    this->echoWindowPositionField = value;
}

inline cli::array< level1ProductInstrumentSettingsSettingRecordEchowindowLength^  >^  level1ProductInstrumentSettingsSettingRecord::echowindowLength::get() {
    return this->echowindowLengthField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::echowindowLength::set(cli::array< level1ProductInstrumentSettingsSettingRecordEchowindowLength^  >^  value) {
    this->echowindowLengthField = value;
}


inline System::String^  level1ProductInstrumentSettingsSettingRecordPRF::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordPRF::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::String^  level1ProductInstrumentSettingsSettingRecordPRF::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordPRF::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::String^  level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsSettingRecordEchowindowLength::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchowindowLength::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::String^  level1ProductInstrumentSettingsSettingRecordEchowindowLength::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchowindowLength::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductNoise::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductNoise::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductNoise::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductNoise::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductNoise::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductNoise::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}

inline System::String^  level1ProductNoise::noiseModelID::get() {
    return this->noiseModelIDField;
}
inline System::Void level1ProductNoise::noiseModelID::set(System::String^  value) {
    this->noiseModelIDField = value;
}

inline System::String^  level1ProductNoise::noiseLevelRef::get() {
    return this->noiseLevelRefField;
}
inline System::Void level1ProductNoise::noiseLevelRef::set(System::String^  value) {
    this->noiseLevelRefField = value;
}

inline System::String^  level1ProductNoise::numberOfNoiseRecords::get() {
    return this->numberOfNoiseRecordsField;
}
inline System::Void level1ProductNoise::numberOfNoiseRecords::set(System::String^  value) {
    this->numberOfNoiseRecordsField = value;
}

inline System::String^  level1ProductNoise::averageNoiseRecordAzimuthSpacing::get() {
    return this->averageNoiseRecordAzimuthSpacingField;
}
inline System::Void level1ProductNoise::averageNoiseRecordAzimuthSpacing::set(System::String^  value) {
    this->averageNoiseRecordAzimuthSpacingField = value;
}

inline cli::array< level1ProductNoiseImageNoise^  >^  level1ProductNoise::imageNoise::get() {
    return this->imageNoiseField;
}
inline System::Void level1ProductNoise::imageNoise::set(cli::array< level1ProductNoiseImageNoise^  >^  value) {
    this->imageNoiseField = value;
}

inline System::String^  level1ProductNoise::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductNoise::layerIndex::set(System::String^  value) {
    this->layerIndexField = value;
}


inline System::String^  level1ProductNoiseImageNoise::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductNoiseImageNoise::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductNoiseImageNoise::noiseEstimateConfidence::get() {
    return this->noiseEstimateConfidenceField;
}
inline System::Void level1ProductNoiseImageNoise::noiseEstimateConfidence::set(System::String^  value) {
    this->noiseEstimateConfidenceField = value;
}

inline cli::array< level1ProductNoiseImageNoiseNoiseEstimate^  >^  level1ProductNoiseImageNoise::noiseEstimate::get() {
    return this->noiseEstimateField;
}
inline System::Void level1ProductNoiseImageNoise::noiseEstimate::set(cli::array< level1ProductNoiseImageNoiseNoiseEstimate^  >^  value) {
    this->noiseEstimateField = value;
}


inline System::String^  level1ProductNoiseImageNoiseNoiseEstimate::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductNoiseImageNoiseNoiseEstimate::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductNoiseImageNoiseNoiseEstimate::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductNoiseImageNoiseNoiseEstimate::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductNoiseImageNoiseNoiseEstimate::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductNoiseImageNoiseNoiseEstimate::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductNoiseImageNoiseNoiseEstimate::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductNoiseImageNoiseNoiseEstimate::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductNoiseImageNoiseNoiseEstimate::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductNoiseImageNoiseNoiseEstimate::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline cli::array< level1ProductPlatformReferenceData^  >^  level1ProductPlatform::referenceData::get() {
    return this->referenceDataField;
}
inline System::Void level1ProductPlatform::referenceData::set(cli::array< level1ProductPlatformReferenceData^  >^  value) {
    this->referenceDataField = value;
}

inline cli::array< level1ProductPlatformOrbit^  >^  level1ProductPlatform::orbit::get() {
    return this->orbitField;
}
inline System::Void level1ProductPlatform::orbit::set(cli::array< level1ProductPlatformOrbit^  >^  value) {
    this->orbitField = value;
}

inline cli::array< level1ProductPlatformAttitude^  >^  level1ProductPlatform::attitude::get() {
    return this->attitudeField;
}
inline System::Void level1ProductPlatform::attitude::set(cli::array< level1ProductPlatformAttitude^  >^  value) {
    this->attitudeField = value;
}


inline System::String^  level1ProductPlatformReferenceData::SARAntennaMechanicalBoresight::get() {
    return this->sARAntennaMechanicalBoresightField;
}
inline System::Void level1ProductPlatformReferenceData::SARAntennaMechanicalBoresight::set(System::String^  value) {
    this->sARAntennaMechanicalBoresightField = value;
}

inline cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  level1ProductPlatformReferenceData::SARAntennaPosition::get() {
    return this->sARAntennaPositionField;
}
inline System::Void level1ProductPlatformReferenceData::SARAntennaPosition::set(cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  value) {
    this->sARAntennaPositionField = value;
}

inline cli::array< level1ProductPlatformReferenceDataGPSAntennaPosition^  >^  level1ProductPlatformReferenceData::GPSAntennaPosition::get() {
    return this->gPSAntennaPositionField;
}
inline System::Void level1ProductPlatformReferenceData::GPSAntennaPosition::set(cli::array< level1ProductPlatformReferenceDataGPSAntennaPosition^  >^  value) {
    this->gPSAntennaPositionField = value;
}


inline System::String^  level1ProductPlatformReferenceDataSARAntennaPosition::x::get() {
    return this->xField;
}
inline System::Void level1ProductPlatformReferenceDataSARAntennaPosition::x::set(System::String^  value) {
    this->xField = value;
}

inline System::String^  level1ProductPlatformReferenceDataSARAntennaPosition::y::get() {
    return this->yField;
}
inline System::Void level1ProductPlatformReferenceDataSARAntennaPosition::y::set(System::String^  value) {
    this->yField = value;
}

inline System::String^  level1ProductPlatformReferenceDataSARAntennaPosition::z::get() {
    return this->zField;
}
inline System::Void level1ProductPlatformReferenceDataSARAntennaPosition::z::set(System::String^  value) {
    this->zField = value;
}

inline System::String^  level1ProductPlatformReferenceDataSARAntennaPosition::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductPlatformReferenceDataSARAntennaPosition::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}


inline System::String^  level1ProductPlatformReferenceDataGPSAntennaPosition::x::get() {
    return this->xField;
}
inline System::Void level1ProductPlatformReferenceDataGPSAntennaPosition::x::set(System::String^  value) {
    this->xField = value;
}

inline System::String^  level1ProductPlatformReferenceDataGPSAntennaPosition::y::get() {
    return this->yField;
}
inline System::Void level1ProductPlatformReferenceDataGPSAntennaPosition::y::set(System::String^  value) {
    this->yField = value;
}

inline System::String^  level1ProductPlatformReferenceDataGPSAntennaPosition::z::get() {
    return this->zField;
}
inline System::Void level1ProductPlatformReferenceDataGPSAntennaPosition::z::set(System::String^  value) {
    this->zField = value;
}

inline System::String^  level1ProductPlatformReferenceDataGPSAntennaPosition::GPSreceiver::get() {
    return this->gPSreceiverField;
}
inline System::Void level1ProductPlatformReferenceDataGPSAntennaPosition::GPSreceiver::set(System::String^  value) {
    this->gPSreceiverField = value;
}

inline System::String^  level1ProductPlatformReferenceDataGPSAntennaPosition::unit::get() {
    return this->unitField;
}
inline System::Void level1ProductPlatformReferenceDataGPSAntennaPosition::unit::set(System::String^  value) {
    this->unitField = value;
}


inline cli::array< level1ProductPlatformOrbitOrbitHeader^  >^  level1ProductPlatformOrbit::orbitHeader::get() {
    return this->orbitHeaderField;
}
inline System::Void level1ProductPlatformOrbit::orbitHeader::set(cli::array< level1ProductPlatformOrbitOrbitHeader^  >^  value) {
    this->orbitHeaderField = value;
}

inline cli::array< level1ProductPlatformOrbitStateVec^  >^  level1ProductPlatformOrbit::stateVec::get() {
    return this->stateVecField;
}
inline System::Void level1ProductPlatformOrbit::stateVec::set(cli::array< level1ProductPlatformOrbitStateVec^  >^  value) {
    this->stateVecField = value;
}


inline System::String^  level1ProductPlatformOrbitOrbitHeader::sensor::get() {
    return this->sensorField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::sensor::set(System::String^  value) {
    this->sensorField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::accuracy::get() {
    return this->accuracyField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::accuracy::set(System::String^  value) {
    this->accuracyField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::stateVectorRefFrame::get() {
    return this->stateVectorRefFrameField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::stateVectorRefFrame::set(System::String^  value) {
    this->stateVectorRefFrameField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::stateVectorRefTime::get() {
    return this->stateVectorRefTimeField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::stateVectorRefTime::set(System::String^  value) {
    this->stateVectorRefTimeField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::stateVecFormat::get() {
    return this->stateVecFormatField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::stateVecFormat::set(System::String^  value) {
    this->stateVecFormatField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::numStateVectors::get() {
    return this->numStateVectorsField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::numStateVectors::set(System::String^  value) {
    this->numStateVectorsField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::stateVectorTimeSpacing::get() {
    return this->stateVectorTimeSpacingField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::stateVectorTimeSpacing::set(System::String^  value) {
    this->stateVectorTimeSpacingField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::positionAccuracyMargin::get() {
    return this->positionAccuracyMarginField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::positionAccuracyMargin::set(System::String^  value) {
    this->positionAccuracyMarginField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::velocityAccuracyMargin::get() {
    return this->velocityAccuracyMarginField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::velocityAccuracyMargin::set(System::String^  value) {
    this->velocityAccuracyMarginField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::recProcessingTechnique::get() {
    return this->recProcessingTechniqueField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::recProcessingTechnique::set(System::String^  value) {
    this->recProcessingTechniqueField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::recPolDegree::get() {
    return this->recPolDegreeField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::recPolDegree::set(System::String^  value) {
    this->recPolDegreeField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::dataGapIndicator::get() {
    return this->dataGapIndicatorField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::dataGapIndicator::set(System::String^  value) {
    this->dataGapIndicatorField = value;
}

inline cli::array< generationSystem^  >^  level1ProductPlatformOrbitOrbitHeader::GenerationSystem::get() {
    return this->generationSystemField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::GenerationSystem::set(cli::array< generationSystem^  >^  value) {
    this->generationSystemField = value;
}

inline cli::array< level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  >^  level1ProductPlatformOrbitOrbitHeader::firstStateTime::get() {
    return this->firstStateTimeField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::firstStateTime::set(cli::array< level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  >^  value) {
    this->firstStateTimeField = value;
}

inline cli::array< level1ProductPlatformOrbitOrbitHeaderLastStateTime^  >^  level1ProductPlatformOrbitOrbitHeader::lastStateTime::get() {
    return this->lastStateTimeField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::lastStateTime::set(cli::array< level1ProductPlatformOrbitOrbitHeaderLastStateTime^  >^  value) {
    this->lastStateTimeField = value;
}


inline System::String^  level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeUTC::get() {
    return this->firstStateTimeUTCField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeUTC::set(System::String^  value) {
    this->firstStateTimeUTCField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPS::get() {
    return this->firstStateTimeGPSField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPS::set(System::String^  value) {
    this->firstStateTimeGPSField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPSFraction::get() {
    return this->firstStateTimeGPSFractionField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPSFraction::set(System::String^  value) {
    this->firstStateTimeGPSFractionField = value;
}


inline System::String^  level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeUTC::get() {
    return this->lastStateTimeUTCField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeUTC::set(System::String^  value) {
    this->lastStateTimeUTCField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPS::get() {
    return this->lastStateTimeGPSField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPS::set(System::String^  value) {
    this->lastStateTimeGPSField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPSFraction::get() {
    return this->lastStateTimeGPSFractionField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPSFraction::set(System::String^  value) {
    this->lastStateTimeGPSFractionField = value;
}


inline System::String^  level1ProductPlatformOrbitStateVec::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductPlatformOrbitStateVec::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductPlatformOrbitStateVec::timeGPS::set(System::String^  value) {
    this->timeGPSField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductPlatformOrbitStateVec::timeGPSFraction::set(System::String^  value) {
    this->timeGPSFractionField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::posX::get() {
    return this->posXField;
}
inline System::Void level1ProductPlatformOrbitStateVec::posX::set(System::String^  value) {
    this->posXField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::posY::get() {
    return this->posYField;
}
inline System::Void level1ProductPlatformOrbitStateVec::posY::set(System::String^  value) {
    this->posYField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::posZ::get() {
    return this->posZField;
}
inline System::Void level1ProductPlatformOrbitStateVec::posZ::set(System::String^  value) {
    this->posZField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::velX::get() {
    return this->velXField;
}
inline System::Void level1ProductPlatformOrbitStateVec::velX::set(System::String^  value) {
    this->velXField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::velY::get() {
    return this->velYField;
}
inline System::Void level1ProductPlatformOrbitStateVec::velY::set(System::String^  value) {
    this->velYField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::velZ::get() {
    return this->velZField;
}
inline System::Void level1ProductPlatformOrbitStateVec::velZ::set(System::String^  value) {
    this->velZField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::maneuver::get() {
    return this->maneuverField;
}
inline System::Void level1ProductPlatformOrbitStateVec::maneuver::set(System::String^  value) {
    this->maneuverField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::num::get() {
    return this->numField;
}
inline System::Void level1ProductPlatformOrbitStateVec::num::set(System::String^  value) {
    this->numField = value;
}

inline System::String^  level1ProductPlatformOrbitStateVec::qualInd::get() {
    return this->qualIndField;
}
inline System::Void level1ProductPlatformOrbitStateVec::qualInd::set(System::String^  value) {
    this->qualIndField = value;
}


inline cli::array< level1ProductPlatformAttitudeAttitudeHeader^  >^  level1ProductPlatformAttitude::attitudeHeader::get() {
    return this->attitudeHeaderField;
}
inline System::Void level1ProductPlatformAttitude::attitudeHeader::set(cli::array< level1ProductPlatformAttitudeAttitudeHeader^  >^  value) {
    this->attitudeHeaderField = value;
}

inline cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  level1ProductPlatformAttitude::attitudeData::get() {
    return this->attitudeDataField;
}
inline System::Void level1ProductPlatformAttitude::attitudeData::set(cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  value) {
    this->attitudeDataField = value;
}


inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::sensor::get() {
    return this->sensorField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::sensor::set(System::String^  value) {
    this->sensorField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::accuracy::get() {
    return this->accuracyField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::accuracy::set(System::String^  value) {
    this->accuracyField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::attitudeDataRefTime::get() {
    return this->attitudeDataRefTimeField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::attitudeDataRefTime::set(System::String^  value) {
    this->attitudeDataRefTimeField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::attitudeDataFormat::get() {
    return this->attitudeDataFormatField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::attitudeDataFormat::set(System::String^  value) {
    this->attitudeDataFormatField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::numRecords::get() {
    return this->numRecordsField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::numRecords::set(System::String^  value) {
    this->numRecordsField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::attitudeDataTimeSpacing::get() {
    return this->attitudeDataTimeSpacingField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::attitudeDataTimeSpacing::set(System::String^  value) {
    this->attitudeDataTimeSpacingField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::accuracyMargin::get() {
    return this->accuracyMarginField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::accuracyMargin::set(System::String^  value) {
    this->accuracyMarginField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::recInterpolTechnique::get() {
    return this->recInterpolTechniqueField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::recInterpolTechnique::set(System::String^  value) {
    this->recInterpolTechniqueField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::recInterpolPolDegree::get() {
    return this->recInterpolPolDegreeField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::recInterpolPolDegree::set(System::String^  value) {
    this->recInterpolPolDegreeField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::dataGapIndicator::get() {
    return this->dataGapIndicatorField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::dataGapIndicator::set(System::String^  value) {
    this->dataGapIndicatorField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::steeringLawIndicator::get() {
    return this->steeringLawIndicatorField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::steeringLawIndicator::set(System::String^  value) {
    this->steeringLawIndicatorField = value;
}

inline cli::array< generationSystem^  >^  level1ProductPlatformAttitudeAttitudeHeader::GenerationSystem::get() {
    return this->generationSystemField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::GenerationSystem::set(cli::array< generationSystem^  >^  value) {
    this->generationSystemField = value;
}

inline cli::array< level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  >^  level1ProductPlatformAttitudeAttitudeHeader::attitudeDataRefFrames::get() {
    return this->attitudeDataRefFramesField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::attitudeDataRefFrames::set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  >^  value) {
    this->attitudeDataRefFramesField = value;
}

inline cli::array< level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  >^  level1ProductPlatformAttitudeAttitudeHeader::firstAttitudeTime::get() {
    return this->firstAttitudeTimeField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::firstAttitudeTime::set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  >^  value) {
    this->firstAttitudeTimeField = value;
}

inline cli::array< level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  >^  level1ProductPlatformAttitudeAttitudeHeader::lastAttitudeTime::get() {
    return this->lastAttitudeTimeField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::lastAttitudeTime::set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  >^  value) {
    this->lastAttitudeTimeField = value;
}


inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames::FromFrame::get() {
    return this->fromFrameField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames::FromFrame::set(System::String^  value) {
    this->fromFrameField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames::ToFrame::get() {
    return this->toFrameField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames::ToFrame::set(System::String^  value) {
    this->toFrameField = value;
}


inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeUTC::get() {
    return this->firstAttitudeTimeUTCField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeUTC::set(System::String^  value) {
    this->firstAttitudeTimeUTCField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPS::get() {
    return this->firstAttitudeTimeGPSField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPS::set(System::String^  value) {
    this->firstAttitudeTimeGPSField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPSFraction::get() {
    return this->firstAttitudeTimeGPSFractionField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPSFraction::set(System::String^  value) {
    this->firstAttitudeTimeGPSFractionField = value;
}


inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeUTC::get() {
    return this->lastAttitudeTimeUTCField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeUTC::set(System::String^  value) {
    this->lastAttitudeTimeUTCField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPS::get() {
    return this->lastAttitudeTimeGPSField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPS::set(System::String^  value) {
    this->lastAttitudeTimeGPSField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPSFraction::get() {
    return this->lastAttitudeTimeGPSFractionField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPSFraction::set(System::String^  value) {
    this->lastAttitudeTimeGPSFractionField = value;
}


inline System::String^  level1ProductPlatformAttitudeAttitudeData::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::timeGPS::set(System::String^  value) {
    this->timeGPSField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::timeGPSFraction::set(System::String^  value) {
    this->timeGPSFractionField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::q0::get() {
    return this->q0Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q0::set(System::String^  value) {
    this->q0Field = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::q1::get() {
    return this->q1Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q1::set(System::String^  value) {
    this->q1Field = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::q2::get() {
    return this->q2Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q2::set(System::String^  value) {
    this->q2Field = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::q3::get() {
    return this->q3Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q3::set(System::String^  value) {
    this->q3Field = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::antsteerInd::get() {
    return this->antsteerIndField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::antsteerInd::set(System::String^  value) {
    this->antsteerIndField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::maneuver::get() {
    return this->maneuverField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::maneuver::set(System::String^  value) {
    this->maneuverField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::num::get() {
    return this->numField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::num::set(System::String^  value) {
    this->numField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::qualInd::get() {
    return this->qualIndField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::qualInd::set(System::String^  value) {
    this->qualIndField = value;
}


inline cli::array< level1ProductProductComponentsAnnotation^  >^  level1ProductProductComponents::annotation::get() {
    return this->annotationField;
}
inline System::Void level1ProductProductComponents::annotation::set(cli::array< level1ProductProductComponentsAnnotation^  >^  value) {
    this->annotationField = value;
}

inline cli::array< imageData^  >^  level1ProductProductComponents::ImageData::get() {
    return this->imageDataField;
}
inline System::Void level1ProductProductComponents::ImageData::set(cli::array< imageData^  >^  value) {
    this->imageDataField = value;
}

inline cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  level1ProductProductComponents::auxRasterFiles::get() {
    return this->auxRasterFilesField;
}
inline System::Void level1ProductProductComponents::auxRasterFiles::set(cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  value) {
    this->auxRasterFilesField = value;
}

inline cli::array< quicklooks^  >^  level1ProductProductComponents::Quicklooks::get() {
    return this->quicklooksField;
}
inline System::Void level1ProductProductComponents::Quicklooks::set(cli::array< quicklooks^  >^  value) {
    this->quicklooksField = value;
}

inline cli::array< compositeQuicklook^  >^  level1ProductProductComponents::CompositeQuicklook::get() {
    return this->compositeQuicklookField;
}
inline System::Void level1ProductProductComponents::CompositeQuicklook::set(cli::array< compositeQuicklook^  >^  value) {
    this->compositeQuicklookField = value;
}

inline cli::array< browseImage^  >^  level1ProductProductComponents::BrowseImage::get() {
    return this->browseImageField;
}
inline System::Void level1ProductProductComponents::BrowseImage::set(cli::array< browseImage^  >^  value) {
    this->browseImageField = value;
}

inline cli::array< cli::array< file^  >^  >^  level1ProductProductComponents::mapPlot::get() {
    return this->mapPlotField;
}
inline System::Void level1ProductProductComponents::mapPlot::set(cli::array< cli::array< file^  >^  >^  value) {
    this->mapPlotField = value;
}


inline System::String^  level1ProductProductComponentsAnnotation::type::get() {
    return this->typeField;
}
inline System::Void level1ProductProductComponentsAnnotation::type::set(System::String^  value) {
    this->typeField = value;
}

inline cli::array< file^  >^  level1ProductProductComponentsAnnotation::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsAnnotation::File::set(cli::array< file^  >^  value) {
    this->fileField = value;
}


inline System::String^  level1ProductProductComponentsAuxRasterFiles::type::get() {
    return this->typeField;
}
inline System::Void level1ProductProductComponentsAuxRasterFiles::type::set(System::String^  value) {
    this->typeField = value;
}

inline cli::array< file^  >^  level1ProductProductComponentsAuxRasterFiles::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsAuxRasterFiles::File::set(cli::array< file^  >^  value) {
    this->fileField = value;
}


inline cli::array< level1ProductProductInfoGenerationInfo^  >^  level1ProductProductInfo::generationInfo::get() {
    return this->generationInfoField;
}
inline System::Void level1ProductProductInfo::generationInfo::set(cli::array< level1ProductProductInfoGenerationInfo^  >^  value) {
    this->generationInfoField = value;
}

inline cli::array< level1ProductProductInfoMissionInfo^  >^  level1ProductProductInfo::missionInfo::get() {
    return this->missionInfoField;
}
inline System::Void level1ProductProductInfo::missionInfo::set(cli::array< level1ProductProductInfoMissionInfo^  >^  value) {
    this->missionInfoField = value;
}

inline cli::array< level1ProductProductInfoAcquisitionInfo^  >^  level1ProductProductInfo::acquisitionInfo::get() {
    return this->acquisitionInfoField;
}
inline System::Void level1ProductProductInfo::acquisitionInfo::set(cli::array< level1ProductProductInfoAcquisitionInfo^  >^  value) {
    this->acquisitionInfoField = value;
}

inline cli::array< level1ProductProductInfoProductVariantInfo^  >^  level1ProductProductInfo::productVariantInfo::get() {
    return this->productVariantInfoField;
}
inline System::Void level1ProductProductInfo::productVariantInfo::set(cli::array< level1ProductProductInfoProductVariantInfo^  >^  value) {
    this->productVariantInfoField = value;
}

inline cli::array< level1ProductProductInfoImageDataInfo^  >^  level1ProductProductInfo::imageDataInfo::get() {
    return this->imageDataInfoField;
}
inline System::Void level1ProductProductInfo::imageDataInfo::set(cli::array< level1ProductProductInfoImageDataInfo^  >^  value) {
    this->imageDataInfoField = value;
}

inline cli::array< level1ProductProductInfoSceneInfo^  >^  level1ProductProductInfo::sceneInfo::get() {
    return this->sceneInfoField;
}
inline System::Void level1ProductProductInfo::sceneInfo::set(cli::array< level1ProductProductInfoSceneInfo^  >^  value) {
    this->sceneInfoField = value;
}

inline cli::array< level1ProductProductInfoPreviewInfo^  >^  level1ProductProductInfo::previewInfo::get() {
    return this->previewInfoField;
}
inline System::Void level1ProductProductInfo::previewInfo::set(cli::array< level1ProductProductInfoPreviewInfo^  >^  value) {
    this->previewInfoField = value;
}


inline System::String^  level1ProductProductInfoGenerationInfo::logicalProductID::get() {
    return this->logicalProductIDField;
}
inline System::Void level1ProductProductInfoGenerationInfo::logicalProductID::set(System::String^  value) {
    this->logicalProductIDField = value;
}

inline System::String^  level1ProductProductInfoGenerationInfo::receivingStation::get() {
    return this->receivingStationField;
}
inline System::Void level1ProductProductInfoGenerationInfo::receivingStation::set(System::String^  value) {
    this->receivingStationField = value;
}

inline System::String^  level1ProductProductInfoGenerationInfo::level0ProcessingFacility::get() {
    return this->level0ProcessingFacilityField;
}
inline System::Void level1ProductProductInfoGenerationInfo::level0ProcessingFacility::set(System::String^  value) {
    this->level0ProcessingFacilityField = value;
}

inline System::String^  level1ProductProductInfoGenerationInfo::level1ProcessingFacility::get() {
    return this->level1ProcessingFacilityField;
}
inline System::Void level1ProductProductInfoGenerationInfo::level1ProcessingFacility::set(System::String^  value) {
    this->level1ProcessingFacilityField = value;
}

inline System::String^  level1ProductProductInfoGenerationInfo::groundOperationsType::get() {
    return this->groundOperationsTypeField;
}
inline System::Void level1ProductProductInfoGenerationInfo::groundOperationsType::set(System::String^  value) {
    this->groundOperationsTypeField = value;
}

inline System::String^  level1ProductProductInfoGenerationInfo::deliveryInfo::get() {
    return this->deliveryInfoField;
}
inline System::Void level1ProductProductInfoGenerationInfo::deliveryInfo::set(System::String^  value) {
    this->deliveryInfoField = value;
}

inline System::String^  level1ProductProductInfoGenerationInfo::copyrightInfo::get() {
    return this->copyrightInfoField;
}
inline System::Void level1ProductProductInfoGenerationInfo::copyrightInfo::set(System::String^  value) {
    this->copyrightInfoField = value;
}

inline cli::array< level1ProductProductInfoGenerationInfoQualityInfo^  >^  level1ProductProductInfoGenerationInfo::qualityInfo::get() {
    return this->qualityInfoField;
}
inline System::Void level1ProductProductInfoGenerationInfo::qualityInfo::set(cli::array< level1ProductProductInfoGenerationInfoQualityInfo^  >^  value) {
    this->qualityInfoField = value;
}


inline System::String^  level1ProductProductInfoGenerationInfoQualityInfo::qualityInspection::get() {
    return this->qualityInspectionField;
}
inline System::Void level1ProductProductInfoGenerationInfoQualityInfo::qualityInspection::set(System::String^  value) {
    this->qualityInspectionField = value;
}

inline System::String^  level1ProductProductInfoGenerationInfoQualityInfo::qualityRemark::get() {
    return this->qualityRemarkField;
}
inline System::Void level1ProductProductInfoGenerationInfoQualityInfo::qualityRemark::set(System::String^  value) {
    this->qualityRemarkField = value;
}


inline System::String^  level1ProductProductInfoMissionInfo::mission::get() {
    return this->missionField;
}
inline System::Void level1ProductProductInfoMissionInfo::mission::set(System::String^  value) {
    this->missionField = value;
}

inline System::String^  level1ProductProductInfoMissionInfo::orbitPhase::get() {
    return this->orbitPhaseField;
}
inline System::Void level1ProductProductInfoMissionInfo::orbitPhase::set(System::String^  value) {
    this->orbitPhaseField = value;
}

inline System::String^  level1ProductProductInfoMissionInfo::orbitCycle::get() {
    return this->orbitCycleField;
}
inline System::Void level1ProductProductInfoMissionInfo::orbitCycle::set(System::String^  value) {
    this->orbitCycleField = value;
}

inline System::String^  level1ProductProductInfoMissionInfo::absOrbit::get() {
    return this->absOrbitField;
}
inline System::Void level1ProductProductInfoMissionInfo::absOrbit::set(System::String^  value) {
    this->absOrbitField = value;
}

inline System::String^  level1ProductProductInfoMissionInfo::relOrbit::get() {
    return this->relOrbitField;
}
inline System::Void level1ProductProductInfoMissionInfo::relOrbit::set(System::String^  value) {
    this->relOrbitField = value;
}

inline System::String^  level1ProductProductInfoMissionInfo::numOrbitsInCycle::get() {
    return this->numOrbitsInCycleField;
}
inline System::Void level1ProductProductInfoMissionInfo::numOrbitsInCycle::set(System::String^  value) {
    this->numOrbitsInCycleField = value;
}

inline System::String^  level1ProductProductInfoMissionInfo::orbitDirection::get() {
    return this->orbitDirectionField;
}
inline System::Void level1ProductProductInfoMissionInfo::orbitDirection::set(System::String^  value) {
    this->orbitDirectionField = value;
}


inline System::String^  level1ProductProductInfoAcquisitionInfo::sensor::get() {
    return this->sensorField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::sensor::set(System::String^  value) {
    this->sensorField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfo::imagingMode::get() {
    return this->imagingModeField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::imagingMode::set(System::String^  value) {
    this->imagingModeField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfo::lookDirection::get() {
    return this->lookDirectionField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::lookDirection::set(System::String^  value) {
    this->lookDirectionField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfo::antennaReceiveConfiguration::get() {
    return this->antennaReceiveConfigurationField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::antennaReceiveConfiguration::set(System::String^  value) {
    this->antennaReceiveConfigurationField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfo::polarisationMode::get() {
    return this->polarisationModeField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::polarisationMode::set(System::String^  value) {
    this->polarisationModeField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfo::elevationBeamConfiguration::get() {
    return this->elevationBeamConfigurationField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::elevationBeamConfiguration::set(System::String^  value) {
    this->elevationBeamConfigurationField = value;
}

inline cli::array< level1ProductProductInfoAcquisitionInfoPolarisationList^  >^  level1ProductProductInfoAcquisitionInfo::polarisationList::get() {
    return this->polarisationListField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::polarisationList::set(cli::array< level1ProductProductInfoAcquisitionInfoPolarisationList^  >^  value) {
    this->polarisationListField = value;
}

inline cli::array< cli::array< level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap^  >^  >^  level1ProductProductInfoAcquisitionInfo::imagingModeSpecificInfo::get() {
    return this->imagingModeSpecificInfoField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::imagingModeSpecificInfo::set(cli::array< cli::array< level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap^  >^  >^  value) {
    this->imagingModeSpecificInfoField = value;
}


inline System::String^  level1ProductProductInfoAcquisitionInfoPolarisationList::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoPolarisationList::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}


inline System::String^  level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap::azimuthBeamID::get() {
    return this->azimuthBeamIDField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap::azimuthBeamID::set(System::String^  value) {
    this->azimuthBeamIDField = value;
}


inline System::String^  level1ProductProductInfoProductVariantInfo::productType::get() {
    return this->productTypeField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::productType::set(System::String^  value) {
    this->productTypeField = value;
}

inline System::String^  level1ProductProductInfoProductVariantInfo::productVariant::get() {
    return this->productVariantField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::productVariant::set(System::String^  value) {
    this->productVariantField = value;
}

inline System::String^  level1ProductProductInfoProductVariantInfo::projection::get() {
    return this->projectionField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::projection::set(System::String^  value) {
    this->projectionField = value;
}

inline System::String^  level1ProductProductInfoProductVariantInfo::resolutionVariant::get() {
    return this->resolutionVariantField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::resolutionVariant::set(System::String^  value) {
    this->resolutionVariantField = value;
}

inline System::String^  level1ProductProductInfoProductVariantInfo::radiometricCorrection::get() {
    return this->radiometricCorrectionField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::radiometricCorrection::set(System::String^  value) {
    this->radiometricCorrectionField = value;
}


inline System::String^  level1ProductProductInfoImageDataInfo::pixelValueID::get() {
    return this->pixelValueIDField;
}
inline System::Void level1ProductProductInfoImageDataInfo::pixelValueID::set(System::String^  value) {
    this->pixelValueIDField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfo::imageDataType::get() {
    return this->imageDataTypeField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageDataType::set(System::String^  value) {
    this->imageDataTypeField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfo::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfo::numberOfLayers::get() {
    return this->numberOfLayersField;
}
inline System::Void level1ProductProductInfoImageDataInfo::numberOfLayers::set(System::String^  value) {
    this->numberOfLayersField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfo::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageDataDepth::set(System::String^  value) {
    this->imageDataDepthField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfo::imageStorageOrder::get() {
    return this->imageStorageOrderField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageStorageOrder::set(System::String^  value) {
    this->imageStorageOrderField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfo::rowContent::get() {
    return this->rowContentField;
}
inline System::Void level1ProductProductInfoImageDataInfo::rowContent::set(System::String^  value) {
    this->rowContentField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfo::columnContent::get() {
    return this->columnContentField;
}
inline System::Void level1ProductProductInfoImageDataInfo::columnContent::set(System::String^  value) {
    this->columnContentField = value;
}

inline cli::array< imageRaster^  >^  level1ProductProductInfoImageDataInfo::ImageRaster::get() {
    return this->imageRasterField;
}
inline System::Void level1ProductProductInfoImageDataInfo::ImageRaster::set(cli::array< imageRaster^  >^  value) {
    this->imageRasterField = value;
}


inline System::String^  level1ProductProductInfoSceneInfo::sceneID::get() {
    return this->sceneIDField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneID::set(System::String^  value) {
    this->sceneIDField = value;
}

inline System::String^  level1ProductProductInfoSceneInfo::sceneAzimuthExtent::get() {
    return this->sceneAzimuthExtentField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneAzimuthExtent::set(System::String^  value) {
    this->sceneAzimuthExtentField = value;
}

inline System::String^  level1ProductProductInfoSceneInfo::sceneRangeExtent::get() {
    return this->sceneRangeExtentField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneRangeExtent::set(System::String^  value) {
    this->sceneRangeExtentField = value;
}

inline System::String^  level1ProductProductInfoSceneInfo::sceneAverageHeight::get() {
    return this->sceneAverageHeightField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneAverageHeight::set(System::String^  value) {
    this->sceneAverageHeightField = value;
}

inline System::String^  level1ProductProductInfoSceneInfo::headingAngle::get() {
    return this->headingAngleField;
}
inline System::Void level1ProductProductInfoSceneInfo::headingAngle::set(System::String^  value) {
    this->headingAngleField = value;
}

inline cli::array< level1ProductProductInfoSceneInfoStart^  >^  level1ProductProductInfoSceneInfo::start::get() {
    return this->startField;
}
inline System::Void level1ProductProductInfoSceneInfo::start::set(cli::array< level1ProductProductInfoSceneInfoStart^  >^  value) {
    this->startField = value;
}

inline cli::array< level1ProductProductInfoSceneInfoStop^  >^  level1ProductProductInfoSceneInfo::stop::get() {
    return this->stopField;
}
inline System::Void level1ProductProductInfoSceneInfo::stop::set(cli::array< level1ProductProductInfoSceneInfoStop^  >^  value) {
    this->stopField = value;
}

inline cli::array< level1ProductProductInfoSceneInfoRangeTime^  >^  level1ProductProductInfoSceneInfo::rangeTime::get() {
    return this->rangeTimeField;
}
inline System::Void level1ProductProductInfoSceneInfo::rangeTime::set(cli::array< level1ProductProductInfoSceneInfoRangeTime^  >^  value) {
    this->rangeTimeField = value;
}

inline cli::array< level1ProductProductInfoSceneInfoSceneCenterCoord^  >^  level1ProductProductInfoSceneInfo::sceneCenterCoord::get() {
    return this->sceneCenterCoordField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneCenterCoord::set(cli::array< level1ProductProductInfoSceneInfoSceneCenterCoord^  >^  value) {
    this->sceneCenterCoordField = value;
}

inline cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  level1ProductProductInfoSceneInfo::sceneCornerCoord::get() {
    return this->sceneCornerCoordField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneCornerCoord::set(cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  value) {
    this->sceneCornerCoordField = value;
}


inline System::String^  level1ProductProductInfoSceneInfoStart::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoStart::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoStart::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductProductInfoSceneInfoStart::timeGPS::set(System::String^  value) {
    this->timeGPSField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoStart::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductProductInfoSceneInfoStart::timeGPSFraction::set(System::String^  value) {
    this->timeGPSFractionField = value;
}


inline System::String^  level1ProductProductInfoSceneInfoStop::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoStop::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoStop::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductProductInfoSceneInfoStop::timeGPS::set(System::String^  value) {
    this->timeGPSField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoStop::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductProductInfoSceneInfoStop::timeGPSFraction::set(System::String^  value) {
    this->timeGPSFractionField = value;
}


inline System::String^  level1ProductProductInfoSceneInfoRangeTime::firstPixel::get() {
    return this->firstPixelField;
}
inline System::Void level1ProductProductInfoSceneInfoRangeTime::firstPixel::set(System::String^  value) {
    this->firstPixelField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoRangeTime::lastPixel::get() {
    return this->lastPixelField;
}
inline System::Void level1ProductProductInfoSceneInfoRangeTime::lastPixel::set(System::String^  value) {
    this->lastPixelField = value;
}


inline System::String^  level1ProductProductInfoSceneInfoSceneCenterCoord::refRow::get() {
    return this->refRowField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::refRow::set(System::String^  value) {
    this->refRowField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCenterCoord::refColumn::get() {
    return this->refColumnField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::refColumn::set(System::String^  value) {
    this->refColumnField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCenterCoord::lat::get() {
    return this->latField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::lat::set(System::String^  value) {
    this->latField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCenterCoord::lon::get() {
    return this->lonField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::lon::set(System::String^  value) {
    this->lonField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCenterCoord::azimuthTimeUTC::get() {
    return this->azimuthTimeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::azimuthTimeUTC::set(System::String^  value) {
    this->azimuthTimeUTCField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCenterCoord::rangeTime::get() {
    return this->rangeTimeField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::rangeTime::set(System::String^  value) {
    this->rangeTimeField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCenterCoord::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::incidenceAngle::set(System::String^  value) {
    this->incidenceAngleField = value;
}


inline System::String^  level1ProductProductInfoSceneInfoSceneCornerCoord::refRow::get() {
    return this->refRowField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::refRow::set(System::String^  value) {
    this->refRowField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCornerCoord::refColumn::get() {
    return this->refColumnField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::refColumn::set(System::String^  value) {
    this->refColumnField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCornerCoord::lat::get() {
    return this->latField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::lat::set(System::String^  value) {
    this->latField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCornerCoord::lon::get() {
    return this->lonField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::lon::set(System::String^  value) {
    this->lonField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCornerCoord::azimuthTimeUTC::get() {
    return this->azimuthTimeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::azimuthTimeUTC::set(System::String^  value) {
    this->azimuthTimeUTCField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCornerCoord::rangeTime::get() {
    return this->rangeTimeField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::rangeTime::set(System::String^  value) {
    this->rangeTimeField = value;
}

inline System::String^  level1ProductProductInfoSceneInfoSceneCornerCoord::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::incidenceAngle::set(System::String^  value) {
    this->incidenceAngleField = value;
}


inline System::String^  level1ProductProductInfoPreviewInfo::mapPlotFormat::get() {
    return this->mapPlotFormatField;
}
inline System::Void level1ProductProductInfoPreviewInfo::mapPlotFormat::set(System::String^  value) {
    this->mapPlotFormatField = value;
}

inline cli::array< quicklooks^  >^  level1ProductProductInfoPreviewInfo::Quicklooks::get() {
    return this->quicklooksField;
}
inline System::Void level1ProductProductInfoPreviewInfo::Quicklooks::set(cli::array< quicklooks^  >^  value) {
    this->quicklooksField = value;
}

inline cli::array< compositeQuicklook^  >^  level1ProductProductInfoPreviewInfo::CompositeQuicklook::get() {
    return this->compositeQuicklookField;
}
inline System::Void level1ProductProductInfoPreviewInfo::CompositeQuicklook::set(cli::array< compositeQuicklook^  >^  value) {
    this->compositeQuicklookField = value;
}

inline cli::array< browseImage^  >^  level1ProductProductInfoPreviewInfo::BrowseImage::get() {
    return this->browseImageField;
}
inline System::Void level1ProductProductInfoPreviewInfo::BrowseImage::set(cli::array< browseImage^  >^  value) {
    this->browseImageField = value;
}


inline System::String^  level1ProductProductQuality::instrumentStateRemark::get() {
    return this->instrumentStateRemarkField;
}
inline System::Void level1ProductProductQuality::instrumentStateRemark::set(System::String^  value) {
    this->instrumentStateRemarkField = value;
}

inline cli::array< level1ProductProductQualityRawDataQuality^  >^  level1ProductProductQuality::rawDataQuality::get() {
    return this->rawDataQualityField;
}
inline System::Void level1ProductProductQuality::rawDataQuality::set(cli::array< level1ProductProductQualityRawDataQuality^  >^  value) {
    this->rawDataQualityField = value;
}

inline cli::array< level1ProductProductQualityAuxDataQuality^  >^  level1ProductProductQuality::auxDataQuality::get() {
    return this->auxDataQualityField;
}
inline System::Void level1ProductProductQuality::auxDataQuality::set(cli::array< level1ProductProductQualityAuxDataQuality^  >^  value) {
    this->auxDataQualityField = value;
}

inline cli::array< level1ProductProductQualityProcessingParameterQuality^  >^  level1ProductProductQuality::processingParameterQuality::get() {
    return this->processingParameterQualityField;
}
inline System::Void level1ProductProductQuality::processingParameterQuality::set(cli::array< level1ProductProductQualityProcessingParameterQuality^  >^  value) {
    this->processingParameterQualityField = value;
}

inline cli::array< level1ProductProductQualityImageDataQuality^  >^  level1ProductProductQuality::imageDataQuality::get() {
    return this->imageDataQualityField;
}
inline System::Void level1ProductProductQuality::imageDataQuality::set(cli::array< level1ProductProductQualityImageDataQuality^  >^  value) {
    this->imageDataQualityField = value;
}

inline cli::array< level1ProductProductQualityLimits^  >^  level1ProductProductQuality::limits::get() {
    return this->limitsField;
}
inline System::Void level1ProductProductQuality::limits::set(cli::array< level1ProductProductQualityLimits^  >^  value) {
    this->limitsField = value;
}


inline System::String^  level1ProductProductQualityRawDataQuality::instrumentChannel::get() {
    return this->instrumentChannelField;
}
inline System::Void level1ProductProductQualityRawDataQuality::instrumentChannel::set(System::String^  value) {
    this->instrumentChannelField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::polarization::get() {
    return this->polarizationField;
}
inline System::Void level1ProductProductQualityRawDataQuality::polarization::set(System::String^  value) {
    this->polarizationField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::gapSignificanceFlag::get() {
    return this->gapSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::gapSignificanceFlag::set(System::String^  value) {
    this->gapSignificanceFlagField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::missingLinesSignificanceFlag::get() {
    return this->missingLinesSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::missingLinesSignificanceFlag::set(System::String^  value) {
    this->missingLinesSignificanceFlagField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::ADCOverflowSignificanceFlag::get() {
    return this->aDCOverflowSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::ADCOverflowSignificanceFlag::set(System::String^  value) {
    this->aDCOverflowSignificanceFlagField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::bitErrorsSignificanceFlag::get() {
    return this->bitErrorsSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::bitErrorsSignificanceFlag::set(System::String^  value) {
    this->bitErrorsSignificanceFlagField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::IBiasOutsideLimitsFlag::get() {
    return this->iBiasOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::IBiasOutsideLimitsFlag::set(System::String^  value) {
    this->iBiasOutsideLimitsFlagField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::QBiasOutsideLimitsFlag::get() {
    return this->qBiasOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::QBiasOutsideLimitsFlag::set(System::String^  value) {
    this->qBiasOutsideLimitsFlagField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::IQImbalanceOutsideLimitsFlag::get() {
    return this->iQImbalanceOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::IQImbalanceOutsideLimitsFlag::set(System::String^  value) {
    this->iQImbalanceOutsideLimitsFlagField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::IQNonOrthogonalityOutsideLimitsFlag::get() {
    return this->iQNonOrthogonalityOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::IQNonOrthogonalityOutsideLimitsFlag::set(System::String^  value) {
    this->iQNonOrthogonalityOutsideLimitsFlagField = value;
}


inline System::String^  level1ProductProductQualityAuxDataQuality::orbitDataQualityLowFlag::get() {
    return this->orbitDataQualityLowFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::orbitDataQualityLowFlag::set(System::String^  value) {
    this->orbitDataQualityLowFlagField = value;
}

inline System::String^  level1ProductProductQualityAuxDataQuality::attitudeDataQualityLowFlag::get() {
    return this->attitudeDataQualityLowFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::attitudeDataQualityLowFlag::set(System::String^  value) {
    this->attitudeDataQualityLowFlagField = value;
}

inline System::String^  level1ProductProductQualityAuxDataQuality::DEMqualityLowFlag::get() {
    return this->dEMqualityLowFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::DEMqualityLowFlag::set(System::String^  value) {
    this->dEMqualityLowFlagField = value;
}

inline System::String^  level1ProductProductQualityAuxDataQuality::missingAuxDataFlag::get() {
    return this->missingAuxDataFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::missingAuxDataFlag::set(System::String^  value) {
    this->missingAuxDataFlagField = value;
}


inline System::String^  level1ProductProductQualityProcessingParameterQuality::dopplerAmbiguityNotZeroFlag::get() {
    return this->dopplerAmbiguityNotZeroFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerAmbiguityNotZeroFlag::set(System::String^  value) {
    this->dopplerAmbiguityNotZeroFlagField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQuality::dopplerInconsistencyFlag::get() {
    return this->dopplerInconsistencyFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerInconsistencyFlag::set(System::String^  value) {
    this->dopplerInconsistencyFlagField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQuality::dopplerOutsideLimitsFlags::get() {
    return this->dopplerOutsideLimitsFlagsField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerOutsideLimitsFlags::set(System::String^  value) {
    this->dopplerOutsideLimitsFlagsField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQuality::dopplerDriftOutsideLimitsFlags::get() {
    return this->dopplerDriftOutsideLimitsFlagsField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerDriftOutsideLimitsFlags::set(System::String^  value) {
    this->dopplerDriftOutsideLimitsFlagsField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQuality::chirpQualityLowFlag::get() {
    return this->chirpQualityLowFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::chirpQualityLowFlag::set(System::String^  value) {
    this->chirpQualityLowFlagField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQuality::geolocationQualityLowFlag::get() {
    return this->geolocationQualityLowFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::geolocationQualityLowFlag::set(System::String^  value) {
    this->geolocationQualityLowFlagField = value;
}

inline cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  >^  level1ProductProductQualityProcessingParameterQuality::averageDopplerCentroidInfo::get() {
    return this->averageDopplerCentroidInfoField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::averageDopplerCentroidInfo::set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  >^  value) {
    this->averageDopplerCentroidInfoField = value;
}


inline cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  >^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStart::get() {
    return this->azimuthStartField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStart::set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  >^  value) {
    this->azimuthStartField = value;
}

inline cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  >^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthCenter::get() {
    return this->azimuthCenterField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthCenter::set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  >^  value) {
    this->azimuthCenterField = value;
}

inline cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  >^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStop::get() {
    return this->azimuthStopField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStop::set(cli::array< level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  >^  value) {
    this->azimuthStopField = value;
}


inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::nearRange::get() {
    return this->nearRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::nearRange::set(System::String^  value) {
    this->nearRangeField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::midRange::get() {
    return this->midRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::midRange::set(System::String^  value) {
    this->midRangeField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::farRange::get() {
    return this->farRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::farRange::set(System::String^  value) {
    this->farRangeField = value;
}


inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::nearRange::get() {
    return this->nearRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::nearRange::set(System::String^  value) {
    this->nearRangeField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::midRange::get() {
    return this->midRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::midRange::set(System::String^  value) {
    this->midRangeField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::farRange::get() {
    return this->farRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::farRange::set(System::String^  value) {
    this->farRangeField = value;
}


inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::nearRange::get() {
    return this->nearRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::nearRange::set(System::String^  value) {
    this->nearRangeField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::midRange::get() {
    return this->midRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::midRange::set(System::String^  value) {
    this->midRangeField = value;
}

inline System::String^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::farRange::get() {
    return this->farRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::farRange::set(System::String^  value) {
    this->farRangeField = value;
}


inline System::String^  level1ProductProductQualityImageDataQuality::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductQualityImageDataQuality::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductProductQualityImageDataQuality::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductQualityImageDataQuality::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductProductQualityImageDataQuality::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProductQualityImageDataQuality::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}

inline System::String^  level1ProductProductQualityImageDataQuality::nominalSNR::get() {
    return this->nominalSNRField;
}
inline System::Void level1ProductProductQualityImageDataQuality::nominalSNR::set(System::String^  value) {
    this->nominalSNRField = value;
}

inline System::String^  level1ProductProductQualityImageDataQuality::imageMeanFlag::get() {
    return this->imageMeanFlagField;
}
inline System::Void level1ProductProductQualityImageDataQuality::imageMeanFlag::set(System::String^  value) {
    this->imageMeanFlagField = value;
}

inline System::String^  level1ProductProductQualityImageDataQuality::imageStdDevFlag::get() {
    return this->imageStdDevFlagField;
}
inline System::Void level1ProductProductQualityImageDataQuality::imageStdDevFlag::set(System::String^  value) {
    this->imageStdDevFlagField = value;
}

inline cli::array< level1ProductProductQualityImageDataQualityImageDataStatistics^  >^  level1ProductProductQualityImageDataQuality::imageDataStatistics::get() {
    return this->imageDataStatisticsField;
}
inline System::Void level1ProductProductQualityImageDataQuality::imageDataStatistics::set(cli::array< level1ProductProductQualityImageDataQualityImageDataStatistics^  >^  value) {
    this->imageDataStatisticsField = value;
}

inline System::String^  level1ProductProductQualityImageDataQuality::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductProductQualityImageDataQuality::layerIndex::set(System::String^  value) {
    this->layerIndexField = value;
}


inline System::String^  level1ProductProductQualityImageDataQualityImageDataStatistics::mean::get() {
    return this->meanField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::mean::set(System::String^  value) {
    this->meanField = value;
}

inline System::String^  level1ProductProductQualityImageDataQualityImageDataStatistics::max::get() {
    return this->maxField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::max::set(System::String^  value) {
    this->maxField = value;
}

inline System::String^  level1ProductProductQualityImageDataQualityImageDataStatistics::min::get() {
    return this->minField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::min::set(System::String^  value) {
    this->minField = value;
}

inline System::String^  level1ProductProductQualityImageDataQualityImageDataStatistics::stdDev::get() {
    return this->stdDevField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::stdDev::set(System::String^  value) {
    this->stdDevField = value;
}


inline cli::array< level1ProductProductQualityLimitsProcessing^  >^  level1ProductProductQualityLimits::processing::get() {
    return this->processingField;
}
inline System::Void level1ProductProductQualityLimits::processing::set(cli::array< level1ProductProductQualityLimitsProcessing^  >^  value) {
    this->processingField = value;
}

inline cli::array< imageData^  >^  level1ProductProductQualityLimits::ImageData::get() {
    return this->imageDataField;
}
inline System::Void level1ProductProductQualityLimits::ImageData::set(cli::array< imageData^  >^  value) {
    this->imageDataField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessing::chirpQualityLimit::get() {
    return this->chirpQualityLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::chirpQualityLimit::set(System::String^  value) {
    this->chirpQualityLimitField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessing::geolocationQualityLimit::get() {
    return this->geolocationQualityLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::geolocationQualityLimit::set(System::String^  value) {
    this->geolocationQualityLimitField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingGeometry^  >^  level1ProductProductQualityLimitsProcessing::geometry::get() {
    return this->geometryField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::geometry::set(cli::array< level1ProductProductQualityLimitsProcessingGeometry^  >^  value) {
    this->geometryField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingDoppler^  >^  level1ProductProductQualityLimitsProcessing::doppler::get() {
    return this->dopplerField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::doppler::set(cli::array< level1ProductProductQualityLimitsProcessingDoppler^  >^  value) {
    this->dopplerField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingProcessingParameter^  >^  level1ProductProductQualityLimitsProcessing::processingParameter::get() {
    return this->processingParameterField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::processingParameter::set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameter^  >^  value) {
    this->processingParameterField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingProcessingFlags^  >^  level1ProductProductQualityLimitsProcessing::processingFlags::get() {
    return this->processingFlagsField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::processingFlags::set(cli::array< level1ProductProductQualityLimitsProcessingProcessingFlags^  >^  value) {
    this->processingFlagsField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  >^  level1ProductProductQualityLimitsProcessing::dopplerCentroidInformation::get() {
    return this->dopplerCentroidInformationField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::dopplerCentroidInformation::set(cli::array< level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  >^  value) {
    this->dopplerCentroidInformationField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingGeometry::geometryCoordinateType::get() {
    return this->geometryCoordinateTypeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometry::geometryCoordinateType::set(System::String^  value) {
    this->geometryCoordinateTypeField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameter^  >^  level1ProductProductQualityLimitsProcessingGeometry::velocityParameter::get() {
    return this->velocityParameterField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometry::velocityParameter::set(cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameter^  >^  value) {
    this->velocityParameterField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity^  >^  level1ProductProductQualityLimitsProcessingGeometry::zeroDopplerVelocity::get() {
    return this->zeroDopplerVelocityField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometry::zeroDopplerVelocity::set(cli::array< level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity^  >^  value) {
    this->zeroDopplerVelocityField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRate^  >^  level1ProductProductQualityLimitsProcessingGeometry::dopplerRate::get() {
    return this->dopplerRateField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometry::dopplerRate::set(cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRate^  >^  value) {
    this->dopplerRateField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingGeometryVelocityParameter::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryVelocityParameter::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial^  >^  level1ProductProductQualityLimitsProcessingGeometryVelocityParameter::velocityParameterPolynomial::get() {
    return this->velocityParameterPolynomialField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryVelocityParameter::velocityParameterPolynomial::set(cli::array< level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial^  >^  value) {
    this->velocityParameterPolynomialField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryVelocityParameterVelocityParameterPolynomial::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity::velocity::get() {
    return this->velocityField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryZeroDopplerVelocity::velocity::set(System::String^  value) {
    this->velocityField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingGeometryDopplerRate::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryDopplerRate::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial^  >^  level1ProductProductQualityLimitsProcessingGeometryDopplerRate::dopplerRatePolynomial::get() {
    return this->dopplerRatePolynomialField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryDopplerRate::dopplerRatePolynomial::set(cli::array< level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial^  >^  value) {
    this->dopplerRatePolynomialField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingGeometryDopplerRateDopplerRatePolynomial::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingDoppler::dopplerBasebandEstimationMethod::get() {
    return this->dopplerBasebandEstimationMethodField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDoppler::dopplerBasebandEstimationMethod::set(System::String^  value) {
    this->dopplerBasebandEstimationMethodField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDoppler::dopplerGeometricEstimationMethod::get() {
    return this->dopplerGeometricEstimationMethodField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDoppler::dopplerGeometricEstimationMethod::set(System::String^  value) {
    this->dopplerGeometricEstimationMethodField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDoppler::dopplerCentroidCoordinateType::get() {
    return this->dopplerCentroidCoordinateTypeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDoppler::dopplerCentroidCoordinateType::set(System::String^  value) {
    this->dopplerCentroidCoordinateTypeField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid^  >^  level1ProductProductQualityLimitsProcessingDoppler::dopplerCentroid::get() {
    return this->dopplerCentroidField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDoppler::dopplerCentroid::set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid^  >^  value) {
    this->dopplerCentroidField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::polLayerDopplerOffset::get() {
    return this->polLayerDopplerOffsetField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::polLayerDopplerOffset::set(System::String^  value) {
    this->polLayerDopplerOffsetField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::numberOfBlocks::get() {
    return this->numberOfBlocksField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::numberOfBlocks::set(System::String^  value) {
    this->numberOfBlocksField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::numberOfRejectedBlocks::get() {
    return this->numberOfRejectedBlocksField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::numberOfRejectedBlocks::set(System::String^  value) {
    this->numberOfRejectedBlocksField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::numberOfDopplerRecords::get() {
    return this->numberOfDopplerRecordsField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::numberOfDopplerRecords::set(System::String^  value) {
    this->numberOfDopplerRecordsField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::dopplerRecordAzimuthSpacing::get() {
    return this->dopplerRecordAzimuthSpacingField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::dopplerRecordAzimuthSpacing::set(System::String^  value) {
    this->dopplerRecordAzimuthSpacingField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate^  >^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::dopplerEstimate::get() {
    return this->dopplerEstimateField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::dopplerEstimate::set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate^  >^  value) {
    this->dopplerEstimateField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroid::layerIndex::set(System::String^  value) {
    this->layerIndexField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::timeUTC::set(System::String^  value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAtMidRange::get() {
    return this->dopplerAtMidRangeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAtMidRange::set(System::String^  value) {
    this->dopplerAtMidRangeField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::geometricDopplerFlag::get() {
    return this->geometricDopplerFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::geometricDopplerFlag::set(System::String^  value) {
    this->geometricDopplerFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAmbiguity::get() {
    return this->dopplerAmbiguityField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAmbiguity::set(System::String^  value) {
    this->dopplerAmbiguityField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerConsistencyFlag::get() {
    return this->dopplerConsistencyFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerConsistencyFlag::set(System::String^  value) {
    this->dopplerConsistencyFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerEstimateConfidence::get() {
    return this->dopplerEstimateConfidenceField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::dopplerEstimateConfidence::set(System::String^  value) {
    this->dopplerEstimateConfidenceField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler^  >^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::basebandDoppler::get() {
    return this->basebandDopplerField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::basebandDoppler::set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler^  >^  value) {
    this->basebandDopplerField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler^  >^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::geometricDoppler::get() {
    return this->geometricDopplerField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::geometricDoppler::set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler^  >^  value) {
    this->geometricDopplerField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  >^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::combinedDoppler::get() {
    return this->combinedDopplerField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimate::combinedDoppler::set(cli::array< level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  >^  value) {
    this->combinedDopplerField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateBasebandDoppler::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateGeometricDoppler::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::processingInfoCoordinateType::get() {
    return this->processingInfoCoordinateTypeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::processingInfoCoordinateType::set(System::String^  value) {
    this->processingInfoCoordinateTypeField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::rangeLooks::get() {
    return this->rangeLooksField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::rangeLooks::set(System::String^  value) {
    this->rangeLooksField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthLooks::get() {
    return this->azimuthLooksField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthLooks::set(System::String^  value) {
    this->azimuthLooksField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::rangeLookBandwidth::get() {
    return this->rangeLookBandwidthField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::rangeLookBandwidth::set(System::String^  value) {
    this->rangeLookBandwidthField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthLookBandwidth::get() {
    return this->azimuthLookBandwidthField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthLookBandwidth::set(System::String^  value) {
    this->azimuthLookBandwidthField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::totalProcessedRangeBandwidth::get() {
    return this->totalProcessedRangeBandwidthField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::totalProcessedRangeBandwidth::set(System::String^  value) {
    this->totalProcessedRangeBandwidthField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::totalProcessedAzimuthBandwidth::get() {
    return this->totalProcessedAzimuthBandwidthField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::totalProcessedAzimuthBandwidth::set(System::String^  value) {
    this->totalProcessedAzimuthBandwidthField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::rangeWindowID::get() {
    return this->rangeWindowIDField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::rangeWindowID::set(System::String^  value) {
    this->rangeWindowIDField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::rangeWindowCoefficient::get() {
    return this->rangeWindowCoefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::rangeWindowCoefficient::set(System::String^  value) {
    this->rangeWindowCoefficientField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthWindowID::get() {
    return this->azimuthWindowIDField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthWindowID::set(System::String^  value) {
    this->azimuthWindowIDField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthWindowCoefficient::get() {
    return this->azimuthWindowCoefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::azimuthWindowCoefficient::set(System::String^  value) {
    this->azimuthWindowCoefficientField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression^  >^  level1ProductProductQualityLimitsProcessingProcessingParameter::rangeCompression::get() {
    return this->rangeCompressionField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::rangeCompression::set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression^  >^  value) {
    this->rangeCompressionField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay^  >^  level1ProductProductQualityLimitsProcessingProcessingParameter::correctedInstrumentDelay::get() {
    return this->correctedInstrumentDelayField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameter::correctedInstrumentDelay::set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay^  >^  value) {
    this->correctedInstrumentDelayField = value;
}


inline cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo^  >^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression::segmentInfo::get() {
    return this->segmentInfoField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression::segmentInfo::set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo^  >^  value) {
    this->segmentInfoField = value;
}

inline cli::array< cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp^  >^  >^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression::chirps::get() {
    return this->chirpsField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompression::chirps::set(cli::array< cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp^  >^  >^  value) {
    this->chirpsField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline cli::array< dataSegment^  >^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo::DataSegment::get() {
    return this->dataSegmentField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo::DataSegment::set(cli::array< dataSegment^  >^  value) {
    this->dataSegmentField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo::segmentID::get() {
    return this->segmentIDField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionSegmentInfo::segmentID::set(System::String^  value) {
    this->segmentIDField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseType::get() {
    return this->pulseTypeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseType::set(System::String^  value) {
    this->pulseTypeField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::chirpDesignator::get() {
    return this->chirpDesignatorField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::chirpDesignator::set(System::String^  value) {
    this->chirpDesignatorField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::chirpSlope::get() {
    return this->chirpSlopeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::chirpSlope::set(System::String^  value) {
    this->chirpSlopeField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseLength::get() {
    return this->pulseLengthField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseLength::set(System::String^  value) {
    this->pulseLengthField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseBandwidth::get() {
    return this->pulseBandwidthField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseBandwidth::set(System::String^  value) {
    this->pulseBandwidthField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::centerFrequency::get() {
    return this->centerFrequencyField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::centerFrequency::set(System::String^  value) {
    this->centerFrequencyField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude^  >^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::amplitude::get() {
    return this->amplitudeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::amplitude::set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude^  >^  value) {
    this->amplitudeField = value;
}

inline cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase^  >^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::phase::get() {
    return this->phaseField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::phase::set(cli::array< level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase^  >^  value) {
    this->phaseField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseCode::get() {
    return this->pulseCodeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirp::pulseCode::set(System::String^  value) {
    this->pulseCodeField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpAmplitude::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::validityRangeMin::set(System::String^  value) {
    this->validityRangeMinField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::validityRangeMax::set(System::String^  value) {
    this->validityRangeMaxField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::referencePoint::set(System::String^  value) {
    this->referencePointField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::polynomialDegree::set(System::String^  value) {
    this->polynomialDegreeField = value;
}

inline cli::array< coefficient^  >^  level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::Coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterRangeCompressionChirpsReferenceChirpPhase::Coefficient::set(cli::array< coefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay::DRAoffset::set(System::String^  value) {
    this->dRAoffsetField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay::totalTimeDelay::get() {
    return this->totalTimeDelayField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingParameterCorrectedInstrumentDelay::totalTimeDelay::set(System::String^  value) {
    this->totalTimeDelayField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::RXGainCorrectedFlag::get() {
    return this->rXGainCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::RXGainCorrectedFlag::set(System::String^  value) {
    this->rXGainCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::DRAChannelSyncFlag::get() {
    return this->dRAChannelSyncFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::DRAChannelSyncFlag::set(System::String^  value) {
    this->dRAChannelSyncFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::DRAChannelDemixingPerformedFlag::get() {
    return this->dRAChannelDemixingPerformedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::DRAChannelDemixingPerformedFlag::set(System::String^  value) {
    this->dRAChannelDemixingPerformedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::hybridCouplerCorrectedFlag::get() {
    return this->hybridCouplerCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::hybridCouplerCorrectedFlag::set(System::String^  value) {
    this->hybridCouplerCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::chirpDriftCorrectedFlag::get() {
    return this->chirpDriftCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::chirpDriftCorrectedFlag::set(System::String^  value) {
    this->chirpDriftCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::chirpReplicaUsedFlag::get() {
    return this->chirpReplicaUsedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::chirpReplicaUsedFlag::set(System::String^  value) {
    this->chirpReplicaUsedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::geometricDopplerUsedFlag::get() {
    return this->geometricDopplerUsedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::geometricDopplerUsedFlag::set(System::String^  value) {
    this->geometricDopplerUsedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::noiseCorrectedFlag::get() {
    return this->noiseCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::noiseCorrectedFlag::set(System::String^  value) {
    this->noiseCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::rangeSpreadingLossCorrectedFlag::get() {
    return this->rangeSpreadingLossCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::rangeSpreadingLossCorrectedFlag::set(System::String^  value) {
    this->rangeSpreadingLossCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::scanSARBeamCorrectedFlag::get() {
    return this->scanSARBeamCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::scanSARBeamCorrectedFlag::set(System::String^  value) {
    this->scanSARBeamCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::spotLightBeamCorrectedFlag::get() {
    return this->spotLightBeamCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::spotLightBeamCorrectedFlag::set(System::String^  value) {
    this->spotLightBeamCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::azimuthPatternCorrectedFlag::get() {
    return this->azimuthPatternCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::azimuthPatternCorrectedFlag::set(System::String^  value) {
    this->azimuthPatternCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::elevationPatternCorrectedFlag::get() {
    return this->elevationPatternCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::elevationPatternCorrectedFlag::set(System::String^  value) {
    this->elevationPatternCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::polarisationCorrectedFlag::get() {
    return this->polarisationCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::polarisationCorrectedFlag::set(System::String^  value) {
    this->polarisationCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::detectedFlag::get() {
    return this->detectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::detectedFlag::set(System::String^  value) {
    this->detectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::multiLookedFlag::get() {
    return this->multiLookedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::multiLookedFlag::set(System::String^  value) {
    this->multiLookedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::propagationEffectsCorrectedFlag::get() {
    return this->propagationEffectsCorrectedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::propagationEffectsCorrectedFlag::set(System::String^  value) {
    this->propagationEffectsCorrectedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::geocodedFlag::get() {
    return this->geocodedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::geocodedFlag::set(System::String^  value) {
    this->geocodedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::incidenceAngleMaskGeneratedFlag::get() {
    return this->incidenceAngleMaskGeneratedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::incidenceAngleMaskGeneratedFlag::set(System::String^  value) {
    this->incidenceAngleMaskGeneratedFlagField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingProcessingFlags::nominalProcessingPerformedFlag::get() {
    return this->nominalProcessingPerformedFlagField;
}
inline System::Void level1ProductProductQualityLimitsProcessingProcessingFlags::nominalProcessingPerformedFlag::set(System::String^  value) {
    this->nominalProcessingPerformedFlagField = value;
}


inline System::String^  level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcNearRangeLimit::get() {
    return this->fdcNearRangeLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcNearRangeLimit::set(System::String^  value) {
    this->fdcNearRangeLimitField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcMidRangeLimit::get() {
    return this->fdcMidRangeLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcMidRangeLimit::set(System::String^  value) {
    this->fdcMidRangeLimitField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcFarRangeLimit::get() {
    return this->fdcFarRangeLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcFarRangeLimit::set(System::String^  value) {
    this->fdcFarRangeLimitField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearRangeDriftMaxLimit::get() {
    return this->fdcLinearRangeDriftMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearRangeDriftMaxLimit::set(System::String^  value) {
    this->fdcLinearRangeDriftMaxLimitField = value;
}

inline System::String^  level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearAzimuthDriftMaxLimit::get() {
    return this->fdcLinearAzimuthDriftMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearAzimuthDriftMaxLimit::set(System::String^  value) {
    this->fdcLinearAzimuthDriftMaxLimitField = value;
}


inline cli::array< level1ProductProductSpecificComplexImageInfo^  >^  level1ProductProductSpecific::complexImageInfo::get() {
    return this->complexImageInfoField;
}
inline System::Void level1ProductProductSpecific::complexImageInfo::set(cli::array< level1ProductProductSpecificComplexImageInfo^  >^  value) {
    this->complexImageInfoField = value;
}


inline System::String^  level1ProductProductSpecificComplexImageInfo::commonPRF::get() {
    return this->commonPRFField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::commonPRF::set(System::String^  value) {
    this->commonPRFField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::commonRSF::get() {
    return this->commonRSFField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::commonRSF::set(System::String^  value) {
    this->commonRSFField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::slantRangeResolution::get() {
    return this->slantRangeResolutionField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::slantRangeResolution::set(System::String^  value) {
    this->slantRangeResolutionField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::projectedSpacingAzimuth::get() {
    return this->projectedSpacingAzimuthField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::projectedSpacingAzimuth::set(System::String^  value) {
    this->projectedSpacingAzimuthField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::imageCoordinateType::get() {
    return this->imageCoordinateTypeField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::imageCoordinateType::set(System::String^  value) {
    this->imageCoordinateTypeField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::imageDataStartWith::get() {
    return this->imageDataStartWithField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::imageDataStartWith::set(System::String^  value) {
    this->imageDataStartWithField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::quicklookDataStartWith::get() {
    return this->quicklookDataStartWithField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::quicklookDataStartWith::set(System::String^  value) {
    this->quicklookDataStartWithField = value;
}

inline cli::array< projectedSpacingRange^  >^  level1ProductProductSpecificComplexImageInfo::ProjectedSpacingRange::get() {
    return this->projectedSpacingRangeField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::ProjectedSpacingRange::set(cli::array< projectedSpacingRange^  >^  value) {
    this->projectedSpacingRangeField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline cli::array< level1ProductSetupOrderInfo^  >^  level1ProductSetup::orderInfo::get() {
    return this->orderInfoField;
}
inline System::Void level1ProductSetup::orderInfo::set(cli::array< level1ProductSetupOrderInfo^  >^  value) {
    this->orderInfoField = value;
}

inline cli::array< level1ProductSetupInputData^  >^  level1ProductSetup::inputData::get() {
    return this->inputDataField;
}
inline System::Void level1ProductSetup::inputData::set(cli::array< level1ProductSetupInputData^  >^  value) {
    this->inputDataField = value;
}

inline cli::array< cli::array< level1ProductSetupProcessingStepsSoftware^  >^  >^  level1ProductSetup::processingSteps::get() {
    return this->processingStepsField;
}
inline System::Void level1ProductSetup::processingSteps::set(cli::array< cli::array< level1ProductSetupProcessingStepsSoftware^  >^  >^  value) {
    this->processingStepsField = value;
}


inline System::String^  level1ProductSetupOrderInfo::orderType::get() {
    return this->orderTypeField;
}
inline System::Void level1ProductSetupOrderInfo::orderType::set(System::String^  value) {
    this->orderTypeField = value;
}

inline System::String^  level1ProductSetupOrderInfo::processingPriority::get() {
    return this->processingPriorityField;
}
inline System::Void level1ProductSetupOrderInfo::processingPriority::set(System::String^  value) {
    this->processingPriorityField = value;
}

inline System::String^  level1ProductSetupOrderInfo::orbitAccuracy::get() {
    return this->orbitAccuracyField;
}
inline System::Void level1ProductSetupOrderInfo::orbitAccuracy::set(System::String^  value) {
    this->orbitAccuracyField = value;
}

inline System::String^  level1ProductSetupOrderInfo::sceneSpecification::get() {
    return this->sceneSpecificationField;
}
inline System::Void level1ProductSetupOrderInfo::sceneSpecification::set(System::String^  value) {
    this->sceneSpecificationField = value;
}

inline System::String^  level1ProductSetupOrderInfo::imagingMode::get() {
    return this->imagingModeField;
}
inline System::Void level1ProductSetupOrderInfo::imagingMode::set(System::String^  value) {
    this->imagingModeField = value;
}

inline System::String^  level1ProductSetupOrderInfo::lookDirection::get() {
    return this->lookDirectionField;
}
inline System::Void level1ProductSetupOrderInfo::lookDirection::set(System::String^  value) {
    this->lookDirectionField = value;
}

inline System::String^  level1ProductSetupOrderInfo::antennaReceiveConfiguration::get() {
    return this->antennaReceiveConfigurationField;
}
inline System::Void level1ProductSetupOrderInfo::antennaReceiveConfiguration::set(System::String^  value) {
    this->antennaReceiveConfigurationField = value;
}

inline System::String^  level1ProductSetupOrderInfo::polarisationMode::get() {
    return this->polarisationModeField;
}
inline System::Void level1ProductSetupOrderInfo::polarisationMode::set(System::String^  value) {
    this->polarisationModeField = value;
}

inline System::String^  level1ProductSetupOrderInfo::elevationBeamConfiguration::get() {
    return this->elevationBeamConfigurationField;
}
inline System::Void level1ProductSetupOrderInfo::elevationBeamConfiguration::set(System::String^  value) {
    this->elevationBeamConfigurationField = value;
}

inline System::String^  level1ProductSetupOrderInfo::productVariant::get() {
    return this->productVariantField;
}
inline System::Void level1ProductSetupOrderInfo::productVariant::set(System::String^  value) {
    this->productVariantField = value;
}

inline System::String^  level1ProductSetupOrderInfo::resolutionVariant::get() {
    return this->resolutionVariantField;
}
inline System::Void level1ProductSetupOrderInfo::resolutionVariant::set(System::String^  value) {
    this->resolutionVariantField = value;
}

inline System::String^  level1ProductSetupOrderInfo::projection::get() {
    return this->projectionField;
}
inline System::Void level1ProductSetupOrderInfo::projection::set(System::String^  value) {
    this->projectionField = value;
}

inline System::String^  level1ProductSetupOrderInfo::procGainAttenuation::get() {
    return this->procGainAttenuationField;
}
inline System::Void level1ProductSetupOrderInfo::procGainAttenuation::set(System::String^  value) {
    this->procGainAttenuationField = value;
}

inline cli::array< cli::array< level1ProductSetupOrderInfoOrderedSceneSceneExtent^  >^  >^  level1ProductSetupOrderInfo::orderedScene::get() {
    return this->orderedSceneField;
}
inline System::Void level1ProductSetupOrderInfo::orderedScene::set(cli::array< cli::array< level1ProductSetupOrderInfoOrderedSceneSceneExtent^  >^  >^  value) {
    this->orderedSceneField = value;
}

inline cli::array< level1ProductSetupOrderInfoPolList^  >^  level1ProductSetupOrderInfo::polList::get() {
    return this->polListField;
}
inline System::Void level1ProductSetupOrderInfo::polList::set(cli::array< level1ProductSetupOrderInfoPolList^  >^  value) {
    this->polListField = value;
}

inline cli::array< level1ProductSetupOrderInfoUserData^  >^  level1ProductSetupOrderInfo::userData::get() {
    return this->userDataField;
}
inline System::Void level1ProductSetupOrderInfo::userData::set(cli::array< level1ProductSetupOrderInfoUserData^  >^  value) {
    this->userDataField = value;
}


inline System::String^  level1ProductSetupOrderInfoOrderedSceneSceneExtent::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneExtent::startTimeUTC::set(System::String^  value) {
    this->startTimeUTCField = value;
}

inline System::String^  level1ProductSetupOrderInfoOrderedSceneSceneExtent::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneExtent::stopTimeUTC::set(System::String^  value) {
    this->stopTimeUTCField = value;
}


inline System::String^  level1ProductSetupOrderInfoPolList::polLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductSetupOrderInfoPolList::polLayer::set(System::String^  value) {
    this->polLayerField = value;
}


inline System::String^  level1ProductSetupOrderInfoUserData::customerOrderID::get() {
    return this->customerOrderIDField;
}
inline System::Void level1ProductSetupOrderInfoUserData::customerOrderID::set(System::String^  value) {
    this->customerOrderIDField = value;
}

inline System::String^  level1ProductSetupOrderInfoUserData::customerOrderName::get() {
    return this->customerOrderNameField;
}
inline System::Void level1ProductSetupOrderInfoUserData::customerOrderName::set(System::String^  value) {
    this->customerOrderNameField = value;
}

inline System::String^  level1ProductSetupOrderInfoUserData::customerOrderItemID::get() {
    return this->customerOrderItemIDField;
}
inline System::Void level1ProductSetupOrderInfoUserData::customerOrderItemID::set(System::String^  value) {
    this->customerOrderItemIDField = value;
}


inline System::String^  level1ProductSetupInputData::logicalDataTakeID::get() {
    return this->logicalDataTakeIDField;
}
inline System::Void level1ProductSetupInputData::logicalDataTakeID::set(System::String^  value) {
    this->logicalDataTakeIDField = value;
}

inline System::String^  level1ProductSetupInputData::uniqueDataTakeID::get() {
    return this->uniqueDataTakeIDField;
}
inline System::Void level1ProductSetupInputData::uniqueDataTakeID::set(System::String^  value) {
    this->uniqueDataTakeIDField = value;
}

inline System::String^  level1ProductSetupInputData::level0ProductID::get() {
    return this->level0ProductIDField;
}
inline System::Void level1ProductSetupInputData::level0ProductID::set(System::String^  value) {
    this->level0ProductIDField = value;
}

inline System::String^  level1ProductSetupInputData::L0BaseGenerationTimeUTC::get() {
    return this->l0BaseGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::L0BaseGenerationTimeUTC::set(System::String^  value) {
    this->l0BaseGenerationTimeUTCField = value;
}

inline System::String^  level1ProductSetupInputData::L0SARGenerationTimeUTC::get() {
    return this->l0SARGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::L0SARGenerationTimeUTC::set(System::String^  value) {
    this->l0SARGenerationTimeUTCField = value;
}

inline System::String^  level1ProductSetupInputData::IOCSAuxProductID::get() {
    return this->iOCSAuxProductIDField;
}
inline System::Void level1ProductSetupInputData::IOCSAuxProductID::set(System::String^  value) {
    this->iOCSAuxProductIDField = value;
}

inline System::String^  level1ProductSetupInputData::IOCSAuxProductFileName::get() {
    return this->iOCSAuxProductFileNameField;
}
inline System::Void level1ProductSetupInputData::IOCSAuxProductFileName::set(System::String^  value) {
    this->iOCSAuxProductFileNameField = value;
}

inline System::String^  level1ProductSetupInputData::IOCSAuxProductVersion::get() {
    return this->iOCSAuxProductVersionField;
}
inline System::Void level1ProductSetupInputData::IOCSAuxProductVersion::set(System::String^  value) {
    this->iOCSAuxProductVersionField = value;
}

inline System::String^  level1ProductSetupInputData::IOCSAuxProductGenerationTimeUTC::get() {
    return this->iOCSAuxProductGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::IOCSAuxProductGenerationTimeUTC::set(System::String^  value) {
    this->iOCSAuxProductGenerationTimeUTCField = value;
}

inline System::String^  level1ProductSetupInputData::orbitProductID::get() {
    return this->orbitProductIDField;
}
inline System::Void level1ProductSetupInputData::orbitProductID::set(System::String^  value) {
    this->orbitProductIDField = value;
}

inline System::String^  level1ProductSetupInputData::orbitProductFileName::get() {
    return this->orbitProductFileNameField;
}
inline System::Void level1ProductSetupInputData::orbitProductFileName::set(System::String^  value) {
    this->orbitProductFileNameField = value;
}

inline System::String^  level1ProductSetupInputData::orbitAccuracy::get() {
    return this->orbitAccuracyField;
}
inline System::Void level1ProductSetupInputData::orbitAccuracy::set(System::String^  value) {
    this->orbitAccuracyField = value;
}

inline System::String^  level1ProductSetupInputData::orbitProductGenerationTimeUTC::get() {
    return this->orbitProductGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::orbitProductGenerationTimeUTC::set(System::String^  value) {
    this->orbitProductGenerationTimeUTCField = value;
}

inline System::String^  level1ProductSetupInputData::attitudeProductID::get() {
    return this->attitudeProductIDField;
}
inline System::Void level1ProductSetupInputData::attitudeProductID::set(System::String^  value) {
    this->attitudeProductIDField = value;
}

inline System::String^  level1ProductSetupInputData::attitudeProductFileName::get() {
    return this->attitudeProductFileNameField;
}
inline System::Void level1ProductSetupInputData::attitudeProductFileName::set(System::String^  value) {
    this->attitudeProductFileNameField = value;
}

inline System::String^  level1ProductSetupInputData::attitudeProductGenerationTimeUTC::get() {
    return this->attitudeProductGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::attitudeProductGenerationTimeUTC::set(System::String^  value) {
    this->attitudeProductGenerationTimeUTCField = value;
}

inline System::String^  level1ProductSetupInputData::configurationID::get() {
    return this->configurationIDField;
}
inline System::Void level1ProductSetupInputData::configurationID::set(System::String^  value) {
    this->configurationIDField = value;
}

inline System::String^  level1ProductSetupInputData::configurationFileName::get() {
    return this->configurationFileNameField;
}
inline System::Void level1ProductSetupInputData::configurationFileName::set(System::String^  value) {
    this->configurationFileNameField = value;
}

inline System::String^  level1ProductSetupInputData::configurationGenerationTimeUTC::get() {
    return this->configurationGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::configurationGenerationTimeUTC::set(System::String^  value) {
    this->configurationGenerationTimeUTCField = value;
}


inline System::String^  level1ProductSetupProcessingStepsSoftware::softwareID::get() {
    return this->softwareIDField;
}
inline System::Void level1ProductSetupProcessingStepsSoftware::softwareID::set(System::String^  value) {
    this->softwareIDField = value;
}

inline System::String^  level1ProductSetupProcessingStepsSoftware::softwareVersion::get() {
    return this->softwareVersionField;
}
inline System::Void level1ProductSetupProcessingStepsSoftware::softwareVersion::set(System::String^  value) {
    this->softwareVersionField = value;
}
