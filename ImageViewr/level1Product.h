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
ref class generalHeader;
ref class generalHeaderGenerationSystem;
ref class qualityLimitsType;
ref class floatVector;
ref class dblVector;
ref class floatPolynom;
ref class floatPolynomCoefficient;
ref class dblComplex;
ref class segmentInfoType;
ref class segmentInfoTypeDataSegment;
ref class dblPolynom;
ref class dblPolynomCoefficient;
ref class file;
ref class fileLocation;
ref class level1Product;
ref class level1ProductProductComponents;
ref class level1ProductProductComponentsAnnotation;
ref class level1ProductProductComponentsImageData;
ref class level1ProductProductComponentsAuxRasterFiles;
ref class level1ProductProductComponentsQuicklooks;
ref class level1ProductProductComponentsCompositeQuicklook;
ref class level1ProductProductComponentsBrowseImage;
ref class level1ProductProductComponentsMapPlot;
ref class level1ProductProductInfo;
ref class level1ProductProductInfoGenerationInfo;
ref class level1ProductProductInfoGenerationInfoQualityInfo;
ref class level1ProductProductInfoMissionInfo;
ref class level1ProductProductInfoAcquisitionInfo;
ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo;
ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR;
ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight;
ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap;
ref class level1ProductProductInfoProductVariantInfo;
ref class level1ProductProductInfoImageDataInfo;
ref class level1ProductProductInfoImageDataInfoImageRaster;
ref class level1ProductProductInfoImageDataInfoImageRasterRowSpacing;
ref class level1ProductProductInfoImageDataInfoImageRasterColumnSpacing;
ref class level1ProductProductInfoSceneInfo;
ref class level1ProductProductInfoSceneInfoStart;
ref class level1ProductProductInfoSceneInfoStop;
ref class level1ProductProductInfoSceneInfoRangeTime;
ref class level1ProductProductInfoSceneInfoSceneCenterCoord;
ref class level1ProductProductInfoSceneInfoSceneCornerCoord;
ref class level1ProductProductInfoSceneInfoSceneLocalisationAccuracy;
ref class level1ProductProductInfoPreviewInfo;
ref class level1ProductProductInfoPreviewInfoQuicklooks;
ref class level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling;
ref class level1ProductProductInfoPreviewInfoQuicklooksImageRaster;
ref class level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing;
ref class level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing;
ref class level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange;
ref class level1ProductProductInfoPreviewInfoCompositeQuicklook;
ref class level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode;
ref class level1ProductProductInfoPreviewInfoBrowseImage;
ref class level1ProductProductSpecific;
ref class level1ProductProductSpecificComplexImageInfo;
ref class level1ProductProductSpecificComplexImageInfoProjectedSpacingRange;
ref class level1ProductProductSpecificProjectedImageInfo;
ref class level1ProductProductSpecificProjectedImageInfoMappingGridInfo;
ref class level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime;
ref class level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster;
ref class level1ProductProductSpecificGeocodedImageInfo;
ref class level1ProductProductSpecificGeocodedImageInfoGeocodingSetup;
ref class level1ProductProductSpecificGeocodedImageInfoMapProjection;
ref class level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter;
ref class level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameter;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic;
ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic;
ref class level1ProductProductSpecificGeocodedImageInfoElevationData;
ref class level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion;
ref class level1ProductProductSpecificGeocodedImageInfoMappingGridInfo;
ref class level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime;
ref class level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster;
ref class level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription;
ref class level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster;
ref class level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription;
ref class level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster;
ref class level1ProductSetup;
ref class level1ProductSetupOrderInfo;
ref class level1ProductSetupOrderInfoOrderedScene;
ref class level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord;
ref class level1ProductSetupOrderInfoOrderedSceneSceneExtent;
ref class level1ProductSetupOrderInfoGeocodingOrder;
ref class level1ProductSetupOrderInfoUserData;
ref class level1ProductSetupInputData;
ref class level1ProductSetupSoftware;
ref class level1ProductProcessing;
ref class level1ProductProcessingSignalDataAnalysis;
ref class level1ProductProcessingSignalDataAnalysisDataGapInfo;
ref class level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfo;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate;
ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter;
ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysis;
ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence;
ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis;
ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection;
ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection;
ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection;
ref class level1ProductProcessingSignalDataAnalysisNoiseAnalysis;
ref class level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence;
ref class level1ProductProcessingSignalDataAnalysisBurstInfo;
ref class level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence;
ref class level1ProductProcessingGeometry;
ref class level1ProductProcessingGeometryVelocityParameter;
ref class level1ProductProcessingGeometryZeroDopplerVelocity;
ref class level1ProductProcessingGeometryDopplerRate;
ref class level1ProductProcessingDoppler;
ref class level1ProductProcessingDopplerDopplerCentroid;
ref class level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression;
ref class level1ProductProcessingDopplerDopplerCentroidDopplerEstimate;
ref class level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler;
ref class level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient;
ref class level1ProductProcessingProcessingParameter;
ref class level1ProductProcessingProcessingParameterRangeCompression;
ref class level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp;
ref class level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica;
ref class level1ProductProcessingProcessingParameterCorrectedInstrumentDelay;
ref class level1ProductProcessingProcessingParameterScanSARBeamOverlap;
ref class level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight;
ref class level1ProductProcessingProcessingFlags;
ref class level1ProductInstrument;
ref class level1ProductInstrumentRadarParameters;
ref class level1ProductInstrumentSettings;
ref class level1ProductInstrumentSettingsRxGainSetting;
ref class level1ProductInstrumentSettingsRxGainSettingRxGain;
ref class level1ProductInstrumentSettingsQuantisationControl;
ref class level1ProductInstrumentSettingsRxBandwidth;
ref class level1ProductInstrumentSettingsRSF;
ref class level1ProductInstrumentSettingsSettingRecord;
ref class level1ProductInstrumentSettingsSettingRecordDataSegment;
ref class level1ProductInstrumentSettingsSettingRecordPRF;
ref class level1ProductInstrumentSettingsSettingRecordEchoWindowPosition;
ref class level1ProductInstrumentSettingsSettingRecordEchowindowLength;
ref class level1ProductCalibration;
ref class level1ProductCalibrationCalibrationData;
ref class level1ProductCalibrationCalibrationDataRadiometricDEMID;
ref class level1ProductCalibrationCalibrationDataAntennaPattern;
ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern;
ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt;
ref class level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern;
ref class level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt;
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
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters;
ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix;
ref class level1ProductCalibrationNominalGeometricPerformance;
ref class level1ProductCalibrationCalibrationConstant;
ref class level1ProductCalibrationCalibrationConstantCalFactor;
ref class level1ProductNoise;
ref class level1ProductNoiseImageNoise;
ref class level1ProductPlatform;
ref class level1ProductPlatformReferenceData;
ref class level1ProductPlatformReferenceDataSARAntennaPosition;
ref class level1ProductPlatformReferenceDataGPSAntennaPosition;
ref class level1ProductPlatformOrbit;
ref class level1ProductPlatformOrbitOrbitHeader;
ref class level1ProductPlatformOrbitOrbitHeaderGenerationSystem;
ref class level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom;
ref class level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff;
ref class level1ProductPlatformOrbitOrbitHeaderFirstStateTime;
ref class level1ProductPlatformOrbitOrbitHeaderLastStateTime;
ref class level1ProductPlatformOrbitStateVec;
ref class level1ProductPlatformAttitude;
ref class level1ProductPlatformAttitudeAttitudeHeader;
ref class level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem;
ref class level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames;
ref class level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom;
ref class level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff;
ref class level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime;
ref class level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime;
ref class level1ProductPlatformAttitudeAttitudeData;
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
ref class level1ProductProductQualityLimitsRawData;
ref class level1ProductProductQualityLimitsRawDataADCOverflow;
ref class level1ProductProductQualityLimitsRawDataADCOverflowIChannel;
ref class level1ProductProductQualityLimitsRawDataADCOverflowQChannel;
ref class level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics;
ref class level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit;
ref class level1ProductProductQualityLimitsRawDataSARDataStatistics;
ref class level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel;
ref class level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel;
ref class level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel;
ref class level1ProductProductQualityLimitsProcessing;
ref class level1ProductProductQualityLimitsProcessingDopplerCentroidInformation;
ref class level1ProductProductQualityLimitsImageData;


/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public enum class polLayer {
    
    /// <remarks/>
    HH,
    
    /// <remarks/>
    HV,
    
    /// <remarks/>
    VH,
    
    /// <remarks/>
    VV,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class segmentInfoTypeDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public enum class chirpSlope {
    
    /// <remarks/>
    UP,
    
    /// <remarks/>
    DOWN,
    
    /// <remarks/>
    UPDOWN,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public enum class antennaReceiveConfiguration {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRA,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public enum class lookDirection {
    
    /// <remarks/>
    LEFT,
    
    /// <remarks/>
    RIGHT,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public enum class imagingMode {
    
    /// <remarks/>
    SM,
    
    /// <remarks/>
    SL,
    
    /// <remarks/>
    SC,
    
    /// <remarks/>
    HS,
    
    /// <remarks/>
    ST,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public enum class polarisationMode {
    
    /// <remarks/>
    SINGLE,
    
    /// <remarks/>
    DUAL,
    
    /// <remarks/>
    TWIN,
    
    /// <remarks/>
    QUAD,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductComponentsAnnotationType {
    
    /// <remarks/>
    MAIN,
    
    /// <remarks/>
    GEOREF,
    
    /// <remarks/>
    GEOCODE,
    
    /// <remarks/>
    OTHER,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductComponentsImageDataDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductComponentsQuicklooksDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoGenerationInfoGroundOperationsType {
    
    /// <remarks/>
    operational,
    
    /// <remarks/>
    preoperational,
    
    /// <remarks/>
    instrument,
    
    /// <remarks/>
    test,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoGenerationInfoQualityInfoQualityInspection {
    
    /// <remarks/>
    AUTO_APPROVED,
    
    /// <remarks/>
    OPERATOR_APPROVED,
    
    /// <remarks/>
    NOT_APPROVED,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoMissionInfoOrbitDirection {
    
    /// <remarks/>
    ASCENDING,
    
    /// <remarks/>
    DESCENDING,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoProductVariantInfoProductVariant {
    
    /// <remarks/>
    SSC,
    
    /// <remarks/>
    MGD,
    
    /// <remarks/>
    GEC,
    
    /// <remarks/>
    EEC,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoProductVariantInfoProjection {
    
    /// <remarks/>
    SLANTRANGE,
    
    /// <remarks/>
    UNDEFINED,
    
    /// <remarks/>
    GROUNDRANGE,
    
    /// <remarks/>
    MAP,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoProductVariantInfoMapProjection {
    
    /// <remarks/>
    UTM,
    
    /// <remarks/>
    UPS,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoProductVariantInfoResolutionVariant {
    
    /// <remarks/>
    SE,
    
    /// <remarks/>
    RE,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoProductVariantInfoRadiometricCorrection {
    
    /// <remarks/>
    CALIBRATED,
    
    /// <remarks/>
    NOTCALIBRATED,
    
    /// <remarks/>
    UNDEFINED,
    
    /// <remarks/>
    RELCALIBRATED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoImageDataInfoImageDataType {
    
    /// <remarks/>
    COMPLEX,
    
    /// <remarks/>
    DETECTED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoImageDataInfoImageDataFormat {
    
    /// <remarks/>
    GEOTIFF,
    
    /// <remarks/>
    COSAR,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoImageDataInfoImageStorageOrder {
    
    /// <remarks/>
    ROWBYROW,
    
    /// <remarks/>
    COLBYCOL,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoImageDataInfoImageRasterRowSpacingUnits {
    
    /// <remarks/>
    s,
    
    /// <remarks/>
    m,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoImageDataInfoImageRasterColumnSpacingUnits {
    
    /// <remarks/>
    s,
    
    /// <remarks/>
    m,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductInfoPreviewInfoQuicklooksImageDataScalingDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductSpecificComplexImageInfoImageCoordinateType {
    
    /// <remarks/>
    RAW,
    
    /// <remarks/>
    ZERODOPPLER,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductSpecificComplexImageInfoImageDataStartWith {
    
    /// <remarks/>
    EARLYAZNEARRG,
    
    /// <remarks/>
    EARLYAZFARRG,
    
    /// <remarks/>
    LATEAZNEARRG,
    
    /// <remarks/>
    LATEAZFARRG,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductSpecificComplexImageInfoQuicklookDataStartWith {
    
    /// <remarks/>
    EARLYAZNEARRG,
    
    /// <remarks/>
    EARLYAZFARRG,
    
    /// <remarks/>
    LATEAZNEARRG,
    
    /// <remarks/>
    LATEAZFARRG,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageStorageOrder {
    
    /// <remarks/>
    ROWBYROW,
    
    /// <remarks/>
    COLBYCOL,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageStorageOrder {
    
    /// <remarks/>
    ROWBYROW,
    
    /// <remarks/>
    COLBYCOL,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductSetupOrderInfoOrbitAccuracy {
    
    /// <remarks/>
    REFE,
    
    /// <remarks/>
    PRED,
    
    /// <remarks/>
    QUKL,
    
    /// <remarks/>
    RAPD,
    
    /// <remarks/>
    SCIE,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductSetupOrderInfoSceneSpecification {
    
    /// <remarks/>
    TIME,
    
    /// <remarks/>
    CENTERCOORDS,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductSetupOrderInfoProductVariant {
    
    /// <remarks/>
    SSC,
    
    /// <remarks/>
    MGD,
    
    /// <remarks/>
    GEC,
    
    /// <remarks/>
    EEC,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductSetupOrderInfoResolutionVariant {
    
    /// <remarks/>
    SE,
    
    /// <remarks/>
    RE,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductSetupOrderInfoProjection {
    
    /// <remarks/>
    GROUNDRANGE,
    
    /// <remarks/>
    SLANTRANGE,
    
    /// <remarks/>
    UNDEFINED,
    
    /// <remarks/>
    MAP,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductSetupOrderInfoGeocodingOrderMapProjection {
    
    /// <remarks/>
    UTM,
    
    /// <remarks/>
    UPS,
    
    /// <remarks/>
    UNDEFINED,
    
    /// <remarks/>
    AUTO,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductSetupInputDataOrbitAccuracy {
    
    /// <remarks/>
    REFE,
    
    /// <remarks/>
    PRED,
    
    /// <remarks/>
    QUKL,
    
    /// <remarks/>
    RAPD,
    
    /// <remarks/>
    SCIE,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingSignalDataAnalysisSignalDataCoordinateType {
    
    /// <remarks/>
    RAW,
    
    /// <remarks/>
    ZERODOPPLER,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionAppliedCorrectionID {
    
    /// <remarks/>
    DEFAULTS,
    
    /// <remarks/>
    ANALYSIS,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrectionTimeEffect {
    
    /// <remarks/>
    __identifier(short),
    
    /// <remarks/>
    __identifier(long),
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrectionTimeEffect {
    
    /// <remarks/>
    __identifier(short),
    
    /// <remarks/>
    __identifier(long),
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingDopplerDopplerCentroidCoordinateType {
    
    /// <remarks/>
    RAW,
    
    /// <remarks/>
    ZERODOPPLER,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingDopplerDopplerCentroidDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingProcessingParameterProcessingInfoCoordinateType {
    
    /// <remarks/>
    RAW,
    
    /// <remarks/>
    ZERODOPPLER,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpChirpDesignator {
    
    /// <remarks/>
    IDEAL,
    
    /// <remarks/>
    NOMINAL,
    
    /// <remarks/>
    REPLICA,
    
    /// <remarks/>
    MODEL,
    
    /// <remarks/>
    CUSTOM,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProcessingProcessingParameterCorrectedInstrumentDelayDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductInstrumentInstrumentInfoCoordinateType {
    
    /// <remarks/>
    RAW,
    
    /// <remarks/>
    ZERODOPPLER,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductInstrumentSettingsDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationDataAntennaPatternDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorPolarisationChannel {
    
    /// <remarks/>
    HH,
    
    /// <remarks/>
    VV,
    
    /// <remarks/>
    HV,
    
    /// <remarks/>
    VH,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorLookDirection {
    
    /// <remarks/>
    left,
    
    /// <remarks/>
    right,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorAntennaMode {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelayPolarisationChannel {
    
    /// <remarks/>
    HH,
    
    /// <remarks/>
    VV,
    
    /// <remarks/>
    HV,
    
    /// <remarks/>
    VH,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristicsChannel {
    
    /// <remarks/>
    I,
    
    /// <remarks/>
    Q,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalkPolarisation {
    
    /// <remarks/>
    H2V,
    
    /// <remarks/>
    V2H,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductCalibrationCalibrationConstantDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductNoiseDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformReferenceDataSARAntennaPositionDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformReferenceDataGPSAntennaPositionGPSreceiver {
    
    /// <remarks/>
    L1,
    
    /// <remarks/>
    L2,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformReferenceDataGPSAntennaPositionUnit {
    
    /// <remarks/>
    Main,
    
    /// <remarks/>
    Redundant,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformOrbitOrbitHeaderSensor {
    
    /// <remarks/>
    PROP,
    
    /// <remarks/>
    GPSS,
    
    /// <remarks/>
    GPSD,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformOrbitOrbitHeaderAccuracy {
    
    /// <remarks/>
    REFE,
    
    /// <remarks/>
    PRED,
    
    /// <remarks/>
    QUKL,
    
    /// <remarks/>
    RAPD,
    
    /// <remarks/>
    SCIE,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformOrbitStateVecManeuver {
    
    /// <remarks/>
    YES,
    
    /// <remarks/>
    NO,
    
    /// <remarks/>
    NA,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformAttitudeAttitudeHeaderSensor {
    
    /// <remarks/>
    AOCS,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformAttitudeAttitudeHeaderAccuracy {
    
    /// <remarks/>
    STD,
    
    /// <remarks/>
    RREF,
    
    /// <remarks/>
    LREF,
    
    /// <remarks/>
    REFE,
    
    /// <remarks/>
    RPRD,
    
    /// <remarks/>
    LPRD,
    
    /// <remarks/>
    UNDEFINED,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductPlatformAttitudeAttitudeDataManeuver {
    
    /// <remarks/>
    YES,
    
    /// <remarks/>
    NO,
    
    /// <remarks/>
    NA,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public enum class level1ProductProductQualityImageDataQualityDRAoffset {
    
    /// <remarks/>
    SRA,
    
    /// <remarks/>
    DRAFore,
    
    /// <remarks/>
    DRAAft,
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true), 
System::Xml::Serialization::XmlRootAttribute(Namespace=L"", IsNullable=false)]
public ref class generalHeader {
    
    private: System::String^  itemNameField;
    
    private: System::String^  missionField;
    
    private: System::String^  sourceField;
    
    private: System::String^  destinationField;
    
    private: generalHeaderGenerationSystem^  generationSystemField;
    
    private: System::DateTime generationTimeField;
    
    private: System::String^  referenceDocumentField;
    
    private: System::String^  revisionField;
    
    private: System::String^  revisionCommentField;
    
    private: System::String^  remarkField;
    
    private: System::String^  fileNameField;
    
    private: System::String^  fileVersionField;
    
    private: System::String^  statusField;
    
    /// <remarks/>
    public: property System::String^  itemName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  mission {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  source {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  destination {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property generalHeaderGenerationSystem^  generationSystem {
        generalHeaderGenerationSystem^  get();
        System::Void set(generalHeaderGenerationSystem^  value);
    }
    
    /// <remarks/>
    public: property System::DateTime generationTime {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::String^  referenceDocument {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  revision {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  revisionComment {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  remark {
        System::String^  get();
        System::Void set(System::String^  value);
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
public ref class generalHeaderGenerationSystem {
    
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
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class qualityLimitsType {
    
    private: System::Single expectedField;
    
    private: System::Single minimumField;
    
    private: System::Single maximumField;
    
    /// <remarks/>
    public: property System::Single expected {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single minimum {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single maximum {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class floatVector {
    
    private: System::Single xField;
    
    private: System::Single yField;
    
    private: System::Single zField;
    
    /// <remarks/>
    public: property System::Single x {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single y {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single z {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class dblVector {
    
    private: System::Double xField;
    
    private: System::Double yField;
    
    private: System::Double zField;
    
    /// <remarks/>
    public: property System::Double x {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double y {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double z {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class floatPolynom {
    
    private: System::Single validityRangeMinField;
    
    private: System::Single validityRangeMaxField;
    
    private: System::Single referencePointField;
    
    private: System::UInt32 polynomialDegreeField;
    
    private: cli::array< floatPolynomCoefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: property System::Single validityRangeMin {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single validityRangeMax {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single referencePoint {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::UInt32 polynomialDegree {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient")]
    property cli::array< floatPolynomCoefficient^  >^  coefficient {
        cli::array< floatPolynomCoefficient^  >^  get();
        System::Void set(cli::array< floatPolynomCoefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class floatPolynomCoefficient {
    
    private: System::UInt32 exponentField;
    
    private: System::Boolean exponentFieldSpecified;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt32 exponent {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean exponentSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class dblComplex {
    
    private: System::Double amplitudeField;
    
    private: System::Double phaseField;
    
    /// <remarks/>
    public: property System::Double amplitude {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double phase {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class segmentInfoType {
    
    private: polLayer polLayerField;
    
    private: System::String^  beamIDField;
    
    private: segmentInfoTypeDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: segmentInfoTypeDataSegment^  dataSegmentField;
    
    private: System::Int32 segmentIDField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property segmentInfoTypeDRAoffset DRAoffset {
        segmentInfoTypeDRAoffset get();
        System::Void set(segmentInfoTypeDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property segmentInfoTypeDataSegment^  dataSegment {
        segmentInfoTypeDataSegment^  get();
        System::Void set(segmentInfoTypeDataSegment^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 segmentID {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class segmentInfoTypeDataSegment {
    
    private: System::DateTime startTimeUTCField;
    
    private: System::DateTime stopTimeUTCField;
    
    private: System::Int32 numberOfRowsField;
    
    /// <remarks/>
    public: property System::DateTime startTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::DateTime stopTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code")]
public ref class dblPolynom {
    
    private: System::Double validityRangeMinField;
    
    private: System::Double validityRangeMaxField;
    
    private: System::Double referencePointField;
    
    private: System::UInt32 polynomialDegreeField;
    
    private: cli::array< dblPolynomCoefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: property System::Double validityRangeMin {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double validityRangeMax {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double referencePoint {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::UInt32 polynomialDegree {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient")]
    property cli::array< dblPolynomCoefficient^  >^  coefficient {
        cli::array< dblPolynomCoefficient^  >^  get();
        System::Void set(cli::array< dblPolynomCoefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class dblPolynomCoefficient {
    
    private: System::UInt32 exponentField;
    
    private: System::Boolean exponentFieldSpecified;
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt32 exponent {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean exponentSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
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
    
    private: fileLocation^  locationField;
    
    private: System::Int64 sizeField;
    
    /// <remarks/>
    public: property fileLocation^  location {
        fileLocation^  get();
        System::Void set(fileLocation^  value);
    }
    
    /// <remarks/>
    public: property System::Int64 size {
        System::Int64 get();
        System::Void set(System::Int64 value);
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
    public: property System::String^  host {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  path {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  filename {
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
    
    private: generalHeader^  generalHeaderField;
    
    private: level1ProductProductComponents^  productComponentsField;
    
    private: level1ProductProductInfo^  productInfoField;
    
    private: level1ProductProductSpecific^  productSpecificField;
    
    private: level1ProductSetup^  setupField;
    
    private: level1ProductProcessing^  processingField;
    
    private: level1ProductInstrument^  instrumentField;
    
    private: level1ProductCalibration^  calibrationField;
    
    private: cli::array< level1ProductNoise^  >^  noiseField;
    
    private: level1ProductPlatform^  platformField;
    
    private: level1ProductProductQuality^  productQualityField;
    
    /// <remarks/>
    public: property generalHeader^  GeneralHeader {
        generalHeader^  get();
        System::Void set(generalHeader^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductComponents^  productComponents {
        level1ProductProductComponents^  get();
        System::Void set(level1ProductProductComponents^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfo^  productInfo {
        level1ProductProductInfo^  get();
        System::Void set(level1ProductProductInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecific^  productSpecific {
        level1ProductProductSpecific^  get();
        System::Void set(level1ProductProductSpecific^  value);
    }
    
    /// <remarks/>
    public: property level1ProductSetup^  setup {
        level1ProductSetup^  get();
        System::Void set(level1ProductSetup^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessing^  processing {
        level1ProductProcessing^  get();
        System::Void set(level1ProductProcessing^  value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrument^  instrument {
        level1ProductInstrument^  get();
        System::Void set(level1ProductInstrument^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibration^  calibration {
        level1ProductCalibration^  get();
        System::Void set(level1ProductCalibration^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"noise")]
    property cli::array< level1ProductNoise^  >^  noise {
        cli::array< level1ProductNoise^  >^  get();
        System::Void set(cli::array< level1ProductNoise^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatform^  platform {
        level1ProductPlatform^  get();
        System::Void set(level1ProductPlatform^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQuality^  productQuality {
        level1ProductProductQuality^  get();
        System::Void set(level1ProductProductQuality^  value);
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
    
    private: cli::array< level1ProductProductComponentsImageData^  >^  imageDataField;
    
    private: cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  auxRasterFilesField;
    
    private: cli::array< level1ProductProductComponentsQuicklooks^  >^  quicklooksField;
    
    private: level1ProductProductComponentsCompositeQuicklook^  compositeQuicklookField;
    
    private: level1ProductProductComponentsBrowseImage^  browseImageField;
    
    private: level1ProductProductComponentsMapPlot^  mapPlotField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"annotation")]
    property cli::array< level1ProductProductComponentsAnnotation^  >^  annotation {
        cli::array< level1ProductProductComponentsAnnotation^  >^  get();
        System::Void set(cli::array< level1ProductProductComponentsAnnotation^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageData")]
    property cli::array< level1ProductProductComponentsImageData^  >^  imageData {
        cli::array< level1ProductProductComponentsImageData^  >^  get();
        System::Void set(cli::array< level1ProductProductComponentsImageData^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"auxRasterFiles")]
    property cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  auxRasterFiles {
        cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  get();
        System::Void set(cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"quicklooks")]
    property cli::array< level1ProductProductComponentsQuicklooks^  >^  quicklooks {
        cli::array< level1ProductProductComponentsQuicklooks^  >^  get();
        System::Void set(cli::array< level1ProductProductComponentsQuicklooks^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductComponentsCompositeQuicklook^  compositeQuicklook {
        level1ProductProductComponentsCompositeQuicklook^  get();
        System::Void set(level1ProductProductComponentsCompositeQuicklook^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductComponentsBrowseImage^  browseImage {
        level1ProductProductComponentsBrowseImage^  get();
        System::Void set(level1ProductProductComponentsBrowseImage^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductComponentsMapPlot^  mapPlot {
        level1ProductProductComponentsMapPlot^  get();
        System::Void set(level1ProductProductComponentsMapPlot^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsAnnotation {
    
    private: level1ProductProductComponentsAnnotationType typeField;
    
    private: file^  fileField;
    
    /// <remarks/>
    public: property level1ProductProductComponentsAnnotationType type {
        level1ProductProductComponentsAnnotationType get();
        System::Void set(level1ProductProductComponentsAnnotationType value);
    }
    
    /// <remarks/>
    public: property file^  File {
        file^  get();
        System::Void set(file^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsImageData {
    
    private: polLayer polLayerField;
    
    private: System::String^  beamIDField;
    
    private: level1ProductProductComponentsImageDataDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: file^  fileField;
    
    private: System::UInt32 layerIndexField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductComponentsImageDataDRAoffset DRAoffset {
        level1ProductProductComponentsImageDataDRAoffset get();
        System::Void set(level1ProductProductComponentsImageDataDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property file^  File {
        file^  get();
        System::Void set(file^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt32 layerIndex {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
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
    
    private: file^  fileField;
    
    /// <remarks/>
    public: property System::String^  type {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property file^  File {
        file^  get();
        System::Void set(file^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsQuicklooks {
    
    private: polLayer polLayerField;
    
    private: System::String^  beamIDField;
    
    private: level1ProductProductComponentsQuicklooksDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: file^  fileField;
    
    private: System::UInt32 layerIndexField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductComponentsQuicklooksDRAoffset DRAoffset {
        level1ProductProductComponentsQuicklooksDRAoffset get();
        System::Void set(level1ProductProductComponentsQuicklooksDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property file^  File {
        file^  get();
        System::Void set(file^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt32 layerIndex {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsCompositeQuicklook {
    
    private: file^  fileField;
    
    /// <remarks/>
    public: property file^  File {
        file^  get();
        System::Void set(file^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsBrowseImage {
    
    private: file^  fileField;
    
    /// <remarks/>
    public: property file^  File {
        file^  get();
        System::Void set(file^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductComponentsMapPlot {
    
    private: file^  fileField;
    
    /// <remarks/>
    public: property file^  File {
        file^  get();
        System::Void set(file^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfo {
    
    private: level1ProductProductInfoGenerationInfo^  generationInfoField;
    
    private: level1ProductProductInfoMissionInfo^  missionInfoField;
    
    private: level1ProductProductInfoAcquisitionInfo^  acquisitionInfoField;
    
    private: level1ProductProductInfoProductVariantInfo^  productVariantInfoField;
    
    private: level1ProductProductInfoImageDataInfo^  imageDataInfoField;
    
    private: level1ProductProductInfoSceneInfo^  sceneInfoField;
    
    private: level1ProductProductInfoPreviewInfo^  previewInfoField;
    
    /// <remarks/>
    public: property level1ProductProductInfoGenerationInfo^  generationInfo {
        level1ProductProductInfoGenerationInfo^  get();
        System::Void set(level1ProductProductInfoGenerationInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoMissionInfo^  missionInfo {
        level1ProductProductInfoMissionInfo^  get();
        System::Void set(level1ProductProductInfoMissionInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoAcquisitionInfo^  acquisitionInfo {
        level1ProductProductInfoAcquisitionInfo^  get();
        System::Void set(level1ProductProductInfoAcquisitionInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoProductVariantInfo^  productVariantInfo {
        level1ProductProductInfoProductVariantInfo^  get();
        System::Void set(level1ProductProductInfoProductVariantInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoImageDataInfo^  imageDataInfo {
        level1ProductProductInfoImageDataInfo^  get();
        System::Void set(level1ProductProductInfoImageDataInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoSceneInfo^  sceneInfo {
        level1ProductProductInfoSceneInfo^  get();
        System::Void set(level1ProductProductInfoSceneInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfo^  previewInfo {
        level1ProductProductInfoPreviewInfo^  get();
        System::Void set(level1ProductProductInfoPreviewInfo^  value);
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
    
    private: level1ProductProductInfoGenerationInfoGroundOperationsType groundOperationsTypeField;
    
    private: System::String^  deliveryInfoField;
    
    private: System::String^  copyrightInfoField;
    
    private: level1ProductProductInfoGenerationInfoQualityInfo^  qualityInfoField;
    
    /// <remarks/>
    public: property System::String^  logicalProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  receivingStation {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  level0ProcessingFacility {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  level1ProcessingFacility {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoGenerationInfoGroundOperationsType groundOperationsType {
        level1ProductProductInfoGenerationInfoGroundOperationsType get();
        System::Void set(level1ProductProductInfoGenerationInfoGroundOperationsType value);
    }
    
    /// <remarks/>
    public: property System::String^  deliveryInfo {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  copyrightInfo {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoGenerationInfoQualityInfo^  qualityInfo {
        level1ProductProductInfoGenerationInfoQualityInfo^  get();
        System::Void set(level1ProductProductInfoGenerationInfoQualityInfo^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoGenerationInfoQualityInfo {
    
    private: level1ProductProductInfoGenerationInfoQualityInfoQualityInspection qualityInspectionField;
    
    private: System::String^  qualityRemarkField;
    
    /// <remarks/>
    public: property level1ProductProductInfoGenerationInfoQualityInfoQualityInspection qualityInspection {
        level1ProductProductInfoGenerationInfoQualityInfoQualityInspection get();
        System::Void set(level1ProductProductInfoGenerationInfoQualityInfoQualityInspection value);
    }
    
    /// <remarks/>
    public: property System::String^  qualityRemark {
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
    
    private: System::Int32 orbitPhaseField;
    
    private: System::Int32 orbitCycleField;
    
    private: System::Int32 absOrbitField;
    
    private: System::Int32 relOrbitField;
    
    private: System::Int32 numOrbitsInCycleField;
    
    private: level1ProductProductInfoMissionInfoOrbitDirection orbitDirectionField;
    
    /// <remarks/>
    public: property System::String^  mission {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 orbitPhase {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 orbitCycle {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 absOrbit {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 relOrbit {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numOrbitsInCycle {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoMissionInfoOrbitDirection orbitDirection {
        level1ProductProductInfoMissionInfoOrbitDirection get();
        System::Void set(level1ProductProductInfoMissionInfoOrbitDirection value);
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
    
    private: imagingMode imagingModeField;
    
    private: lookDirection lookDirectionField;
    
    private: antennaReceiveConfiguration antennaReceiveConfigurationField;
    
    private: polarisationMode polarisationModeField;
    
    private: cli::array< polLayer >^  polarisationListField;
    
    private: System::String^  elevationBeamConfigurationField;
    
    private: level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo^  imagingModeSpecificInfoField;
    
    /// <remarks/>
    public: property System::String^  sensor {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property imagingMode ImagingMode {
        imagingMode get();
        System::Void set(imagingMode value);
    }
    
    /// <remarks/>
    public: property lookDirection LookDirection {
        lookDirection get();
        System::Void set(lookDirection value);
    }
    
    /// <remarks/>
    public: property antennaReceiveConfiguration AntennaReceiveConfiguration {
        antennaReceiveConfiguration get();
        System::Void set(antennaReceiveConfiguration value);
    }
    
    /// <remarks/>
    public: property polarisationMode PolarisationMode {
        polarisationMode get();
        System::Void set(polarisationMode value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayItemAttribute(L"polLayer", IsNullable=false)]
    property cli::array< polLayer >^  polarisationList {
        cli::array< polLayer >^  get();
        System::Void set(cli::array< polLayer >^  value);
    }
    
    /// <remarks/>
    public: property System::String^  elevationBeamConfiguration {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo^  imagingModeSpecificInfo {
        level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo^  get();
        System::Void set(level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo {
    
    private: System::Object^  itemField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"scanSAR", level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"spotLight", level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"stripMap", level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoStripMap::typeid)]
    property System::Object^  Item {
        System::Object^  get();
        System::Void set(System::Object^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR {
    
    private: System::Int32 numberOfBeamsField;
    
    private: cli::array< System::String^  >^  beamListField;
    
    private: System::String^  azimuthBeamIDField;
    
    private: System::Int32 numberOfBurstsField;
    
    private: System::Int32 burstIndexLastField;
    
    private: System::Boolean burstIndexLastFieldSpecified;
    
    private: System::Int32 burstIndexFirstField;
    
    private: System::Boolean burstIndexFirstFieldSpecified;
    
    /// <remarks/>
    public: property System::Int32 numberOfBeams {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayItemAttribute(L"beamID", IsNullable=false)]
    property cli::array< System::String^  >^  beamList {
        cli::array< System::String^  >^  get();
        System::Void set(cli::array< System::String^  >^  value);
    }
    
    /// <remarks/>
    public: property System::String^  azimuthBeamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfBursts {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 burstIndexLast {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean burstIndexLastSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Int32 burstIndexFirst {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean burstIndexFirstSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight {
    
    private: System::Int32 numberOfAzimuthBeamsField;
    
    private: System::String^  azimuthBeamIDFirstField;
    
    private: System::String^  azimuthBeamIDLastField;
    
    private: System::Single azimuthSteeringAngleFirstField;
    
    private: System::Single azimuthSteeringAngleLastField;
    
    /// <remarks/>
    public: property System::Int32 numberOfAzimuthBeams {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::String^  azimuthBeamIDFirst {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  azimuthBeamIDLast {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Single azimuthSteeringAngleFirst {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single azimuthSteeringAngleLast {
        System::Single get();
        System::Void set(System::Single value);
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
    public: property System::String^  azimuthBeamID {
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
    
    private: level1ProductProductInfoProductVariantInfoProductVariant productVariantField;
    
    private: level1ProductProductInfoProductVariantInfoProjection projectionField;
    
    private: level1ProductProductInfoProductVariantInfoMapProjection mapProjectionField;
    
    private: System::Boolean mapProjectionFieldSpecified;
    
    private: level1ProductProductInfoProductVariantInfoResolutionVariant resolutionVariantField;
    
    private: level1ProductProductInfoProductVariantInfoRadiometricCorrection radiometricCorrectionField;
    
    /// <remarks/>
    public: property System::String^  productType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoProductVariantInfoProductVariant productVariant {
        level1ProductProductInfoProductVariantInfoProductVariant get();
        System::Void set(level1ProductProductInfoProductVariantInfoProductVariant value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoProductVariantInfoProjection projection {
        level1ProductProductInfoProductVariantInfoProjection get();
        System::Void set(level1ProductProductInfoProductVariantInfoProjection value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoProductVariantInfoMapProjection mapProjection {
        level1ProductProductInfoProductVariantInfoMapProjection get();
        System::Void set(level1ProductProductInfoProductVariantInfoMapProjection value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean mapProjectionSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoProductVariantInfoResolutionVariant resolutionVariant {
        level1ProductProductInfoProductVariantInfoResolutionVariant get();
        System::Void set(level1ProductProductInfoProductVariantInfoResolutionVariant value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoProductVariantInfoRadiometricCorrection radiometricCorrection {
        level1ProductProductInfoProductVariantInfoRadiometricCorrection get();
        System::Void set(level1ProductProductInfoProductVariantInfoRadiometricCorrection value);
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
    
    private: level1ProductProductInfoImageDataInfoImageDataType imageDataTypeField;
    
    private: level1ProductProductInfoImageDataInfoImageDataFormat imageDataFormatField;
    
    private: System::Int32 numberOfLayersField;
    
    private: System::Int32 imageDataDepthField;
    
    private: level1ProductProductInfoImageDataInfoImageStorageOrder imageStorageOrderField;
    
    private: System::String^  rowContentField;
    
    private: System::String^  columnContentField;
    
    private: cli::array< level1ProductProductInfoImageDataInfoImageRaster^  >^  imageRasterField;
    
    /// <remarks/>
    public: property System::String^  pixelValueID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoImageDataInfoImageDataType imageDataType {
        level1ProductProductInfoImageDataInfoImageDataType get();
        System::Void set(level1ProductProductInfoImageDataInfoImageDataType value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoImageDataInfoImageDataFormat imageDataFormat {
        level1ProductProductInfoImageDataInfoImageDataFormat get();
        System::Void set(level1ProductProductInfoImageDataInfoImageDataFormat value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfLayers {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoImageDataInfoImageStorageOrder imageStorageOrder {
        level1ProductProductInfoImageDataInfoImageStorageOrder get();
        System::Void set(level1ProductProductInfoImageDataInfoImageStorageOrder value);
    }
    
    /// <remarks/>
    public: property System::String^  rowContent {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  columnContent {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageRaster")]
    property cli::array< level1ProductProductInfoImageDataInfoImageRaster^  >^  imageRaster {
        cli::array< level1ProductProductInfoImageDataInfoImageRaster^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoImageDataInfoImageRaster^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoImageDataInfoImageRaster {
    
    private: System::Int32 numberOfRowsField;
    
    private: System::Int32 numberOfColumnsField;
    
    private: level1ProductProductInfoImageDataInfoImageRasterRowSpacing^  rowSpacingField;
    
    private: level1ProductProductInfoImageDataInfoImageRasterColumnSpacing^  columnSpacingField;
    
    private: System::Double groundRangeResolutionField;
    
    private: System::Double azimuthResolutionField;
    
    private: System::Single azimuthLooksField;
    
    private: System::Single rangeLooksField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfColumns {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoImageDataInfoImageRasterRowSpacing^  rowSpacing {
        level1ProductProductInfoImageDataInfoImageRasterRowSpacing^  get();
        System::Void set(level1ProductProductInfoImageDataInfoImageRasterRowSpacing^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoImageDataInfoImageRasterColumnSpacing^  columnSpacing {
        level1ProductProductInfoImageDataInfoImageRasterColumnSpacing^  get();
        System::Void set(level1ProductProductInfoImageDataInfoImageRasterColumnSpacing^  value);
    }
    
    /// <remarks/>
    public: property System::Double groundRangeResolution {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double azimuthResolution {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Single azimuthLooks {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single rangeLooks {
        System::Single get();
        System::Void set(System::Single value);
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
public ref class level1ProductProductInfoImageDataInfoImageRasterRowSpacing {
    
    private: level1ProductProductInfoImageDataInfoImageRasterRowSpacingUnits unitsField;
    
    private: System::Boolean unitsFieldSpecified;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductProductInfoImageDataInfoImageRasterRowSpacingUnits units {
        level1ProductProductInfoImageDataInfoImageRasterRowSpacingUnits get();
        System::Void set(level1ProductProductInfoImageDataInfoImageRasterRowSpacingUnits value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean unitsSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoImageDataInfoImageRasterColumnSpacing {
    
    private: level1ProductProductInfoImageDataInfoImageRasterColumnSpacingUnits unitsField;
    
    private: System::Boolean unitsFieldSpecified;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductProductInfoImageDataInfoImageRasterColumnSpacingUnits units {
        level1ProductProductInfoImageDataInfoImageRasterColumnSpacingUnits get();
        System::Void set(level1ProductProductInfoImageDataInfoImageRasterColumnSpacingUnits value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean unitsSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
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
    
    private: level1ProductProductInfoSceneInfoStart^  startField;
    
    private: level1ProductProductInfoSceneInfoStop^  stopField;
    
    private: level1ProductProductInfoSceneInfoRangeTime^  rangeTimeField;
    
    private: System::Double sceneAzimuthExtentField;
    
    private: System::Double sceneRangeExtentField;
    
    private: System::Boolean sceneRangeExtentFieldSpecified;
    
    private: level1ProductProductInfoSceneInfoSceneCenterCoord^  sceneCenterCoordField;
    
    private: System::Double sceneAverageHeightField;
    
    private: cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  sceneCornerCoordField;
    
    private: level1ProductProductInfoSceneInfoSceneLocalisationAccuracy^  sceneLocalisationAccuracyField;
    
    private: System::Single headingAngleField;
    
    /// <remarks/>
    public: property System::String^  sceneID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoSceneInfoStart^  start {
        level1ProductProductInfoSceneInfoStart^  get();
        System::Void set(level1ProductProductInfoSceneInfoStart^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoSceneInfoStop^  stop {
        level1ProductProductInfoSceneInfoStop^  get();
        System::Void set(level1ProductProductInfoSceneInfoStop^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoSceneInfoRangeTime^  rangeTime {
        level1ProductProductInfoSceneInfoRangeTime^  get();
        System::Void set(level1ProductProductInfoSceneInfoRangeTime^  value);
    }
    
    /// <remarks/>
    public: property System::Double sceneAzimuthExtent {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double sceneRangeExtent {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean sceneRangeExtentSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoSceneInfoSceneCenterCoord^  sceneCenterCoord {
        level1ProductProductInfoSceneInfoSceneCenterCoord^  get();
        System::Void set(level1ProductProductInfoSceneInfoSceneCenterCoord^  value);
    }
    
    /// <remarks/>
    public: property System::Double sceneAverageHeight {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"sceneCornerCoord")]
    property cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  sceneCornerCoord {
        cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoSceneInfoSceneLocalisationAccuracy^  sceneLocalisationAccuracy {
        level1ProductProductInfoSceneInfoSceneLocalisationAccuracy^  get();
        System::Void set(level1ProductProductInfoSceneInfoSceneLocalisationAccuracy^  value);
    }
    
    /// <remarks/>
    public: property System::Single headingAngle {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoStart {
    
    private: System::DateTime timeUTCField;
    
    private: System::Int64 timeGPSField;
    
    private: System::Single timeGPSFractionField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Int64 timeGPS {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
    
    /// <remarks/>
    public: property System::Single timeGPSFraction {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoStop {
    
    private: System::DateTime timeUTCField;
    
    private: System::Int64 timeGPSField;
    
    private: System::Single timeGPSFractionField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Int64 timeGPS {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
    
    /// <remarks/>
    public: property System::Single timeGPSFraction {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoRangeTime {
    
    private: System::Double firstPixelField;
    
    private: System::Double lastPixelField;
    
    /// <remarks/>
    public: property System::Double firstPixel {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lastPixel {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoSceneCenterCoord {
    
    private: System::Int32 refRowField;
    
    private: System::Boolean refRowFieldSpecified;
    
    private: System::Int32 refColumnField;
    
    private: System::Boolean refColumnFieldSpecified;
    
    private: System::Single latField;
    
    private: System::Single lonField;
    
    private: System::DateTime azimuthTimeUTCField;
    
    private: System::Double rangeTimeField;
    
    private: System::Double incidenceAngleField;
    
    /// <remarks/>
    public: property System::Int32 refRow {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean refRowSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Int32 refColumn {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean refColumnSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Single lat {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lon {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::DateTime azimuthTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Double rangeTime {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double incidenceAngle {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoSceneCornerCoord {
    
    private: System::Int32 refRowField;
    
    private: System::Boolean refRowFieldSpecified;
    
    private: System::Int32 refColumnField;
    
    private: System::Boolean refColumnFieldSpecified;
    
    private: System::Single latField;
    
    private: System::Single lonField;
    
    private: System::DateTime azimuthTimeUTCField;
    
    private: System::Double rangeTimeField;
    
    private: System::Double incidenceAngleField;
    
    /// <remarks/>
    public: property System::Int32 refRow {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean refRowSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Int32 refColumn {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean refColumnSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Single lat {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lon {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::DateTime azimuthTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Double rangeTime {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double incidenceAngle {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoSceneInfoSceneLocalisationAccuracy {
    
    private: System::String^  referenceProjectionField;
    
    private: System::Single latErrorField;
    
    private: System::Single lonErrorField;
    
    /// <remarks/>
    public: property System::String^  referenceProjection {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Single latError {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lonError {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfo {
    
    private: level1ProductProductInfoPreviewInfoQuicklooks^  quicklooksField;
    
    private: level1ProductProductInfoPreviewInfoCompositeQuicklook^  compositeQuicklookField;
    
    private: level1ProductProductInfoPreviewInfoBrowseImage^  browseImageField;
    
    private: System::String^  mapPlotFormatField;
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfoQuicklooks^  quicklooks {
        level1ProductProductInfoPreviewInfoQuicklooks^  get();
        System::Void set(level1ProductProductInfoPreviewInfoQuicklooks^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfoCompositeQuicklook^  compositeQuicklook {
        level1ProductProductInfoPreviewInfoCompositeQuicklook^  get();
        System::Void set(level1ProductProductInfoPreviewInfoCompositeQuicklook^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfoBrowseImage^  browseImage {
        level1ProductProductInfoPreviewInfoBrowseImage^  get();
        System::Void set(level1ProductProductInfoPreviewInfoBrowseImage^  value);
    }
    
    /// <remarks/>
    public: property System::String^  mapPlotFormat {
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
public ref class level1ProductProductInfoPreviewInfoQuicklooks {
    
    private: System::String^  imageDataFormatField;
    
    private: System::Int32 imageDataDepthField;
    
    private: cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling^  >^  imageDataScalingField;
    
    private: cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageRaster^  >^  imageRasterField;
    
    /// <remarks/>
    public: property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageDataScaling")]
    property cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling^  >^  imageDataScaling {
        cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageRaster")]
    property cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageRaster^  >^  imageRaster {
        cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageRaster^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageRaster^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling {
    
    private: polLayer polLayerField;
    
    private: System::Boolean polLayerFieldSpecified;
    
    private: System::String^  beamIDField;
    
    private: level1ProductProductInfoPreviewInfoQuicklooksImageDataScalingDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: System::Double gammaField;
    
    private: System::Double scalingFactorField;
    
    private: System::Double clipUpperField;
    
    private: System::Double clipLowerField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean polLayerSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfoQuicklooksImageDataScalingDRAoffset DRAoffset {
        level1ProductProductInfoPreviewInfoQuicklooksImageDataScalingDRAoffset get();
        System::Void set(level1ProductProductInfoPreviewInfoQuicklooksImageDataScalingDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Double gamma {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double scalingFactor {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double clipUpper {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double clipLower {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfoQuicklooksImageRaster {
    
    private: System::Int32 numberOfRowsField;
    
    private: System::Int32 numberOfColumnsField;
    
    private: System::Single columnBlockLengthField;
    
    private: System::Single rowBlockLengthField;
    
    private: level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing^  rowSpacingField;
    
    private: level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing^  columnSpacingField;
    
    private: System::Single projectedSpacingAzimuthField;
    
    private: System::Boolean projectedSpacingAzimuthFieldSpecified;
    
    private: level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange^  projectedSpacingRangeField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfColumns {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single columnBlockLength {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single rowBlockLength {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing^  rowSpacing {
        level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing^  get();
        System::Void set(level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing^  columnSpacing {
        level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing^  get();
        System::Void set(level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing^  value);
    }
    
    /// <remarks/>
    public: property System::Single projectedSpacingAzimuth {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean projectedSpacingAzimuthSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange^  projectedSpacingRange {
        level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange^  get();
        System::Void set(level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange^  value);
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
public ref class level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing {
    
    private: System::String^  unitsField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  units {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing {
    
    private: System::String^  unitsField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  units {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange {
    
    private: System::Single groundNearField;
    
    private: System::Single groundFarField;
    
    private: System::Single slantRangeField;
    
    /// <remarks/>
    public: property System::Single groundNear {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single groundFar {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single slantRange {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfoCompositeQuicklook {
    
    private: System::String^  imageDataFormatField;
    
    private: System::Int32 imageDataDepthField;
    
    private: cli::array< level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode^  >^  polLayerCodeField;
    
    /// <remarks/>
    public: property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"polLayerCode")]
    property cli::array< level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode^  >^  polLayerCode {
        cli::array< level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode^  >^  get();
        System::Void set(cli::array< level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode {
    
    private: System::String^  polarisationField;
    
    private: System::String^  colourField;
    
    /// <remarks/>
    public: property System::String^  polarisation {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  colour {
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
public ref class level1ProductProductInfoPreviewInfoBrowseImage {
    
    private: System::String^  imageDataFormatField;
    
    private: System::Int32 imageDataDepthField;
    
    /// <remarks/>
    public: property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
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
    
    private: level1ProductProductSpecificProjectedImageInfo^  projectedImageInfoField;
    
    private: level1ProductProductSpecificGeocodedImageInfo^  geocodedImageInfoField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"complexImageInfo")]
    property cli::array< level1ProductProductSpecificComplexImageInfo^  >^  complexImageInfo {
        cli::array< level1ProductProductSpecificComplexImageInfo^  >^  get();
        System::Void set(cli::array< level1ProductProductSpecificComplexImageInfo^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificProjectedImageInfo^  projectedImageInfo {
        level1ProductProductSpecificProjectedImageInfo^  get();
        System::Void set(level1ProductProductSpecificProjectedImageInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfo^  geocodedImageInfo {
        level1ProductProductSpecificGeocodedImageInfo^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfo^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificComplexImageInfo {
    
    private: System::Double commonPRFField;
    
    private: System::Double commonRSFField;
    
    private: System::Double slantRangeResolutionField;
    
    private: System::Single projectedSpacingAzimuthField;
    
    private: level1ProductProductSpecificComplexImageInfoProjectedSpacingRange^  projectedSpacingRangeField;
    
    private: level1ProductProductSpecificComplexImageInfoImageCoordinateType imageCoordinateTypeField;
    
    private: level1ProductProductSpecificComplexImageInfoImageDataStartWith imageDataStartWithField;
    
    private: level1ProductProductSpecificComplexImageInfoQuicklookDataStartWith quicklookDataStartWithField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: property System::Double commonPRF {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double commonRSF {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double slantRangeResolution {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Single projectedSpacingAzimuth {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificComplexImageInfoProjectedSpacingRange^  projectedSpacingRange {
        level1ProductProductSpecificComplexImageInfoProjectedSpacingRange^  get();
        System::Void set(level1ProductProductSpecificComplexImageInfoProjectedSpacingRange^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificComplexImageInfoImageCoordinateType imageCoordinateType {
        level1ProductProductSpecificComplexImageInfoImageCoordinateType get();
        System::Void set(level1ProductProductSpecificComplexImageInfoImageCoordinateType value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificComplexImageInfoImageDataStartWith imageDataStartWith {
        level1ProductProductSpecificComplexImageInfoImageDataStartWith get();
        System::Void set(level1ProductProductSpecificComplexImageInfoImageDataStartWith value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificComplexImageInfoQuicklookDataStartWith quicklookDataStartWith {
        level1ProductProductSpecificComplexImageInfoQuicklookDataStartWith get();
        System::Void set(level1ProductProductSpecificComplexImageInfoQuicklookDataStartWith value);
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
public ref class level1ProductProductSpecificComplexImageInfoProjectedSpacingRange {
    
    private: System::Single groundNearField;
    
    private: System::Single groundFarField;
    
    private: System::Single slantRangeField;
    
    /// <remarks/>
    public: property System::Single groundNear {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single groundFar {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single slantRange {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificProjectedImageInfo {
    
    private: dblPolynom^  slantToGroundRangeProjectionField;
    
    private: level1ProductProductSpecificProjectedImageInfoMappingGridInfo^  mappingGridInfoField;
    
    /// <remarks/>
    public: property dblPolynom^  slantToGroundRangeProjection {
        dblPolynom^  get();
        System::Void set(dblPolynom^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificProjectedImageInfoMappingGridInfo^  mappingGridInfo {
        level1ProductProductSpecificProjectedImageInfoMappingGridInfo^  get();
        System::Void set(level1ProductProductSpecificProjectedImageInfoMappingGridInfo^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificProjectedImageInfoMappingGridInfo {
    
    private: System::String^  pixelValueIDField;
    
    private: System::String^  imageDataFormatField;
    
    private: System::Int32 imageDataDepthField;
    
    private: level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageStorageOrder imageStorageOrderField;
    
    private: level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime^  gridReferenceTimeField;
    
    private: level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster^  imageRasterField;
    
    /// <remarks/>
    public: property System::String^  pixelValueID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageStorageOrder imageStorageOrder {
        level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageStorageOrder get();
        System::Void set(level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageStorageOrder value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime^  gridReferenceTime {
        level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime^  get();
        System::Void set(level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster^  imageRaster {
        level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster^  get();
        System::Void set(level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime {
    
    private: System::DateTime tReferenceTimeUTCField;
    
    private: System::Double tauReferenceTimeField;
    
    private: System::Int64 refRowField;
    
    private: System::Int64 refColField;
    
    /// <remarks/>
    public: property System::DateTime tReferenceTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Double tauReferenceTime {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Int64 refRow {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
    
    /// <remarks/>
    public: property System::Int64 refCol {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster {
    
    private: System::Int32 numberOfRowsField;
    
    private: System::Int32 numberOfColumnsField;
    
    private: System::Single rowSpacingField;
    
    private: System::Single columnSpacingField;
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfColumns {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single rowSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single columnSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfo {
    
    private: level1ProductProductSpecificGeocodedImageInfoGeocodingSetup^  geocodingSetupField;
    
    private: level1ProductProductSpecificGeocodedImageInfoMapProjection^  mapProjectionField;
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameter^  geoParameterField;
    
    private: level1ProductProductSpecificGeocodedImageInfoElevationData^  elevationDataField;
    
    private: level1ProductProductSpecificGeocodedImageInfoMappingGridInfo^  mappingGridInfoField;
    
    private: level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription^  incidenceAngleMaskDescriptionField;
    
    private: level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription^  dEMCoverageMapDescriptionField;
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeocodingSetup^  geocodingSetup {
        level1ProductProductSpecificGeocodedImageInfoGeocodingSetup^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeocodingSetup^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoMapProjection^  mapProjection {
        level1ProductProductSpecificGeocodedImageInfoMapProjection^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoMapProjection^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameter^  geoParameter {
        level1ProductProductSpecificGeocodedImageInfoGeoParameter^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameter^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoElevationData^  elevationData {
        level1ProductProductSpecificGeocodedImageInfoElevationData^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoElevationData^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoMappingGridInfo^  mappingGridInfo {
        level1ProductProductSpecificGeocodedImageInfoMappingGridInfo^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription^  incidenceAngleMaskDescription {
        level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription^  DEMCoverageMapDescription {
        level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeocodingSetup {
    
    private: System::String^  geocodingFacilityField;
    
    private: System::String^  softwareVersionField;
    
    private: System::Boolean generationFlagGIMField;
    
    /// <remarks/>
    public: property System::String^  geocodingFacility {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  softwareVersion {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Boolean generationFlagGIM {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoMapProjection {
    
    private: System::String^  geodeticDatumIDField;
    
    private: System::String^  projectionIDField;
    
    private: System::String^  zoneIDField;
    
    private: level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter^  projectionCenterField;
    
    private: level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin^  mapOriginField;
    
    private: System::Single scaleFactorField;
    
    /// <remarks/>
    public: property System::String^  geodeticDatumID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  projectionID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  zoneID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter^  projectionCenter {
        level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin^  mapOrigin {
        level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin^  value);
    }
    
    /// <remarks/>
    public: property System::Single scaleFactor {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter {
    
    private: System::Single longitudeField;
    
    private: System::Single latitudeField;
    
    /// <remarks/>
    public: property System::Single longitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single latitude {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin {
    
    private: System::Single eastingField;
    
    private: System::Single northingField;
    
    /// <remarks/>
    public: property System::Single easting {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single northing {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameter {
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing^  pixelSpacingField;
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic^  frameCoordsGeographicField;
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic^  frameCoordsCartographicField;
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic^  sceneCoordsGeographicField;
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic^  sceneCoordsCartographicField;
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic^  sceneCenterCoordsGeographicField;
    
    private: level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic^  sceneCenterCoordsCartographicField;
    
    private: System::String^  imageResamplingMethodField;
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing^  pixelSpacing {
        level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic^  frameCoordsGeographic {
        level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic^  frameCoordsCartographic {
        level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic^  sceneCoordsGeographic {
        level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic^  sceneCoordsCartographic {
        level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic^  sceneCenterCoordsGeographic {
        level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic^  sceneCenterCoordsCartographic {
        level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic^  value);
    }
    
    /// <remarks/>
    public: property System::String^  imageResamplingMethod {
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
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing {
    
    private: System::Single eastingField;
    
    private: System::Single northingField;
    
    /// <remarks/>
    public: property System::Single easting {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single northing {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic {
    
    private: System::Single upperLeftLongitudeField;
    
    private: System::Single upperLeftLatitudeField;
    
    private: System::Single upperRightLongitudeField;
    
    private: System::Single upperRightLatitudeField;
    
    private: System::Single lowerRightLongitudeField;
    
    private: System::Single lowerRightLatitudeField;
    
    private: System::Single lowerLeftLongitudeField;
    
    private: System::Single lowerLeftLatitudeField;
    
    /// <remarks/>
    public: property System::Single upperLeftLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single upperLeftLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single upperRightLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single upperRightLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerRightLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerRightLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerLeftLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerLeftLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic {
    
    private: System::Double upperLeftEastingField;
    
    private: System::Double upperLeftNorthingField;
    
    private: System::Double upperRightEastingField;
    
    private: System::Double upperRightNorthingField;
    
    private: System::Double lowerRightEastingField;
    
    private: System::Double lowerRightNorthingField;
    
    private: System::Double lowerLeftEastingField;
    
    private: System::Double lowerLeftNorthingField;
    
    /// <remarks/>
    public: property System::Double upperLeftEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double upperLeftNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double upperRightEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double upperRightNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerRightEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerRightNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerLeftEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerLeftNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic {
    
    private: System::Single upperLeftLongitudeField;
    
    private: System::Single upperLeftLatitudeField;
    
    private: System::Single upperRightLongitudeField;
    
    private: System::Single upperRightLatitudeField;
    
    private: System::Single lowerRightLongitudeField;
    
    private: System::Single lowerRightLatitudeField;
    
    private: System::Single lowerLeftLongitudeField;
    
    private: System::Single lowerLeftLatitudeField;
    
    /// <remarks/>
    public: property System::Single upperLeftLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single upperLeftLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single upperRightLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single upperRightLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerRightLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerRightLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerLeftLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lowerLeftLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic {
    
    private: System::Double upperLeftEastingField;
    
    private: System::Double upperLeftNorthingField;
    
    private: System::Double upperRightEastingField;
    
    private: System::Double upperRightNorthingField;
    
    private: System::Double lowerRightEastingField;
    
    private: System::Double lowerRightNorthingField;
    
    private: System::Double lowerLeftEastingField;
    
    private: System::Double lowerLeftNorthingField;
    
    /// <remarks/>
    public: property System::Double upperLeftEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double upperLeftNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double upperRightEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double upperRightNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerRightEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerRightNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerLeftEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double lowerLeftNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic {
    
    private: System::Single centerCoordLongitudeField;
    
    private: System::Single centerCoordLatitudeField;
    
    /// <remarks/>
    public: property System::Single centerCoordLongitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single centerCoordLatitude {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic {
    
    private: System::Double centerCoordEastingField;
    
    private: System::Double centerCoordNorthingField;
    
    /// <remarks/>
    public: property System::Double centerCoordEasting {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double centerCoordNorthing {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoElevationData {
    
    private: level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion^  dEMDBContentVersionField;
    
    private: System::Single minimumHeightField;
    
    private: System::Single meanHeightField;
    
    private: System::Single maximumHeightField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"DEM-DB-ContentVersion")]
    property level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion^  DEMDBContentVersion {
        level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion^  value);
    }
    
    /// <remarks/>
    public: property System::Single minimumHeight {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single meanHeight {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single maximumHeight {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion {
    
    private: System::String^  valueField;
    
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
public ref class level1ProductProductSpecificGeocodedImageInfoMappingGridInfo {
    
    private: System::String^  pixelValueIDField;
    
    private: System::String^  imageDataFormatField;
    
    private: System::Int32 imageDataDepthField;
    
    private: level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageStorageOrder imageStorageOrderField;
    
    private: level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime^  gridReferenceTimeField;
    
    private: level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster^  imageRasterField;
    
    /// <remarks/>
    public: property System::String^  pixelValueID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageStorageOrder imageStorageOrder {
        level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageStorageOrder get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageStorageOrder value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime^  gridReferenceTime {
        level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster^  imageRaster {
        level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime {
    
    private: System::DateTime tReferenceTimeUTCField;
    
    private: System::Double tauReferenceTimeField;
    
    private: System::Int64 refRowField;
    
    private: System::Int64 refColField;
    
    /// <remarks/>
    public: property System::DateTime tReferenceTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Double tauReferenceTime {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Int64 refRow {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
    
    /// <remarks/>
    public: property System::Int64 refCol {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster {
    
    private: System::Int32 numberOfRowsField;
    
    private: System::Int32 numberOfColumnsField;
    
    private: System::Single rowSpacingField;
    
    private: System::Single columnSpacingField;
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfColumns {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single rowSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single columnSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription {
    
    private: System::String^  pixelValueIDField;
    
    private: System::String^  imageDataFormatField;
    
    private: System::Int32 imageDataDepthField;
    
    private: level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster^  imageRasterField;
    
    /// <remarks/>
    public: property System::String^  pixelValueID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster^  imageRaster {
        level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster {
    
    private: System::Int32 numberOfRowsField;
    
    private: System::Int32 numberOfColumnsField;
    
    private: System::Single rowSpacingField;
    
    private: System::Single columnSpacingField;
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfColumns {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single rowSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single columnSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription {
    
    private: System::String^  pixelValueIDField;
    
    private: System::String^  imageDataFormatField;
    
    private: System::Int32 imageDataDepthField;
    
    private: level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster^  imageRasterField;
    
    /// <remarks/>
    public: property System::String^  pixelValueID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  imageDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 imageDataDepth {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster^  imageRaster {
        level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster^  get();
        System::Void set(level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster {
    
    private: System::Int32 numberOfRowsField;
    
    private: System::Int32 numberOfColumnsField;
    
    private: System::Single rowSpacingField;
    
    private: System::Single columnSpacingField;
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfColumns {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single rowSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single columnSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetup {
    
    private: level1ProductSetupOrderInfo^  orderInfoField;
    
    private: level1ProductSetupInputData^  inputDataField;
    
    private: cli::array< level1ProductSetupSoftware^  >^  processingStepsField;
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfo^  orderInfo {
        level1ProductSetupOrderInfo^  get();
        System::Void set(level1ProductSetupOrderInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupInputData^  inputData {
        level1ProductSetupInputData^  get();
        System::Void set(level1ProductSetupInputData^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayItemAttribute(L"software", IsNullable=false)]
    property cli::array< level1ProductSetupSoftware^  >^  processingSteps {
        cli::array< level1ProductSetupSoftware^  >^  get();
        System::Void set(cli::array< level1ProductSetupSoftware^  >^  value);
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
    
    private: level1ProductSetupOrderInfoOrbitAccuracy orbitAccuracyField;
    
    private: level1ProductSetupOrderInfoSceneSpecification sceneSpecificationField;
    
    private: level1ProductSetupOrderInfoOrderedScene^  orderedSceneField;
    
    private: imagingMode imagingModeField;
    
    private: lookDirection lookDirectionField;
    
    private: antennaReceiveConfiguration antennaReceiveConfigurationField;
    
    private: polarisationMode polarisationModeField;
    
    private: cli::array< polLayer >^  polListField;
    
    private: System::String^  elevationBeamConfigurationField;
    
    private: level1ProductSetupOrderInfoProductVariant productVariantField;
    
    private: level1ProductSetupOrderInfoResolutionVariant resolutionVariantField;
    
    private: level1ProductSetupOrderInfoProjection projectionField;
    
    private: level1ProductSetupOrderInfoGeocodingOrder^  geocodingOrderField;
    
    private: level1ProductSetupOrderInfoUserData^  userDataField;
    
    private: System::Double procGainAttenuationField;
    
    private: System::Boolean procGainAttenuationFieldSpecified;
    
    /// <remarks/>
    public: property System::String^  orderType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  processingPriority {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoOrbitAccuracy orbitAccuracy {
        level1ProductSetupOrderInfoOrbitAccuracy get();
        System::Void set(level1ProductSetupOrderInfoOrbitAccuracy value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoSceneSpecification sceneSpecification {
        level1ProductSetupOrderInfoSceneSpecification get();
        System::Void set(level1ProductSetupOrderInfoSceneSpecification value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoOrderedScene^  orderedScene {
        level1ProductSetupOrderInfoOrderedScene^  get();
        System::Void set(level1ProductSetupOrderInfoOrderedScene^  value);
    }
    
    /// <remarks/>
    public: property imagingMode ImagingMode {
        imagingMode get();
        System::Void set(imagingMode value);
    }
    
    /// <remarks/>
    public: property lookDirection LookDirection {
        lookDirection get();
        System::Void set(lookDirection value);
    }
    
    /// <remarks/>
    public: property antennaReceiveConfiguration AntennaReceiveConfiguration {
        antennaReceiveConfiguration get();
        System::Void set(antennaReceiveConfiguration value);
    }
    
    /// <remarks/>
    public: property polarisationMode PolarisationMode {
        polarisationMode get();
        System::Void set(polarisationMode value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayItemAttribute(L"polLayer", IsNullable=false)]
    property cli::array< polLayer >^  polList {
        cli::array< polLayer >^  get();
        System::Void set(cli::array< polLayer >^  value);
    }
    
    /// <remarks/>
    public: property System::String^  elevationBeamConfiguration {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoProductVariant productVariant {
        level1ProductSetupOrderInfoProductVariant get();
        System::Void set(level1ProductSetupOrderInfoProductVariant value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoResolutionVariant resolutionVariant {
        level1ProductSetupOrderInfoResolutionVariant get();
        System::Void set(level1ProductSetupOrderInfoResolutionVariant value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoProjection projection {
        level1ProductSetupOrderInfoProjection get();
        System::Void set(level1ProductSetupOrderInfoProjection value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoGeocodingOrder^  geocodingOrder {
        level1ProductSetupOrderInfoGeocodingOrder^  get();
        System::Void set(level1ProductSetupOrderInfoGeocodingOrder^  value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoUserData^  userData {
        level1ProductSetupOrderInfoUserData^  get();
        System::Void set(level1ProductSetupOrderInfoUserData^  value);
    }
    
    /// <remarks/>
    public: property System::Double procGainAttenuation {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean procGainAttenuationSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfoOrderedScene {
    
    private: System::Object^  itemField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"sceneCenterCoord", level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::typeid), 
    System::Xml::Serialization::XmlElementAttribute(L"sceneExtent", level1ProductSetupOrderInfoOrderedSceneSceneExtent::typeid)]
    property System::Object^  Item {
        System::Object^  get();
        System::Void set(System::Object^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord {
    
    private: System::Single latField;
    
    private: System::Single lonField;
    
    private: System::Double centerCoordHeightField;
    
    private: System::Boolean centerCoordHeightFieldSpecified;
    
    /// <remarks/>
    public: property System::Single lat {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single lon {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Double centerCoordHeight {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean centerCoordHeightSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfoOrderedSceneSceneExtent {
    
    private: System::DateTime startTimeUTCField;
    
    private: System::DateTime stopTimeUTCField;
    
    /// <remarks/>
    public: property System::DateTime startTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::DateTime stopTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupOrderInfoGeocodingOrder {
    
    private: level1ProductSetupOrderInfoGeocodingOrderMapProjection mapProjectionField;
    
    private: System::String^  countryIDField;
    
    private: System::String^  datumIDField;
    
    /// <remarks/>
    public: property level1ProductSetupOrderInfoGeocodingOrderMapProjection mapProjection {
        level1ProductSetupOrderInfoGeocodingOrderMapProjection get();
        System::Void set(level1ProductSetupOrderInfoGeocodingOrderMapProjection value);
    }
    
    /// <remarks/>
    public: property System::String^  countryID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  datumID {
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
    public: property System::String^  customerOrderID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  customerOrderName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  customerOrderItemID {
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
    
    private: System::DateTime l0BaseGenerationTimeUTCField;
    
    private: System::DateTime l0SARGenerationTimeUTCField;
    
    private: System::String^  iOCSAuxProductIDField;
    
    private: System::String^  iOCSAuxProductFileNameField;
    
    private: System::String^  iOCSAuxProductVersionField;
    
    private: System::DateTime iOCSAuxProductGenerationTimeUTCField;
    
    private: System::String^  orbitProductIDField;
    
    private: System::String^  orbitProductFileNameField;
    
    private: level1ProductSetupInputDataOrbitAccuracy orbitAccuracyField;
    
    private: System::DateTime orbitProductGenerationTimeUTCField;
    
    private: System::String^  attitudeProductIDField;
    
    private: System::String^  attitudeProductFileNameField;
    
    private: System::DateTime attitudeProductGenerationTimeUTCField;
    
    private: System::Boolean attitudeProductGenerationTimeUTCFieldSpecified;
    
    private: System::String^  configurationIDField;
    
    private: System::String^  configurationFileNameField;
    
    private: System::DateTime configurationGenerationTimeUTCField;
    
    /// <remarks/>
    public: property System::String^  logicalDataTakeID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  uniqueDataTakeID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  level0ProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::DateTime L0BaseGenerationTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::DateTime L0SARGenerationTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::String^  IOCSAuxProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  IOCSAuxProductFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  IOCSAuxProductVersion {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::DateTime IOCSAuxProductGenerationTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::String^  orbitProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  orbitProductFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductSetupInputDataOrbitAccuracy orbitAccuracy {
        level1ProductSetupInputDataOrbitAccuracy get();
        System::Void set(level1ProductSetupInputDataOrbitAccuracy value);
    }
    
    /// <remarks/>
    public: property System::DateTime orbitProductGenerationTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::String^  attitudeProductID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  attitudeProductFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::DateTime attitudeProductGenerationTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean attitudeProductGenerationTimeUTCSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::String^  configurationID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  configurationFileName {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::DateTime configurationGenerationTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductSetupSoftware {
    
    private: System::String^  softwareIDField;
    
    private: System::String^  softwareVersionField;
    
    private: System::String^  algorithmField;
    
    /// <remarks/>
    public: property System::String^  softwareID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  softwareVersion {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  algorithm {
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
public ref class level1ProductProcessing {
    
    private: level1ProductProcessingSignalDataAnalysis^  signalDataAnalysisField;
    
    private: level1ProductProcessingGeometry^  geometryField;
    
    private: level1ProductProcessingDoppler^  dopplerField;
    
    private: cli::array< level1ProductProcessingProcessingParameter^  >^  processingParameterField;
    
    private: level1ProductProcessingProcessingFlags^  processingFlagsField;
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysis^  signalDataAnalysis {
        level1ProductProcessingSignalDataAnalysis^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysis^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingGeometry^  geometry {
        level1ProductProcessingGeometry^  get();
        System::Void set(level1ProductProcessingGeometry^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingDoppler^  doppler {
        level1ProductProcessingDoppler^  get();
        System::Void set(level1ProductProcessingDoppler^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"processingParameter")]
    property cli::array< level1ProductProcessingProcessingParameter^  >^  processingParameter {
        cli::array< level1ProductProcessingProcessingParameter^  >^  get();
        System::Void set(cli::array< level1ProductProcessingProcessingParameter^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingProcessingFlags^  processingFlags {
        level1ProductProcessingProcessingFlags^  get();
        System::Void set(level1ProductProcessingProcessingFlags^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysis {
    
    private: level1ProductProcessingSignalDataAnalysisSignalDataCoordinateType signalDataCoordinateTypeField;
    
    private: level1ProductProcessingSignalDataAnalysisDataGapInfo^  dataGapInfoField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfo^  rawDataInfoField;
    
    private: level1ProductProcessingSignalDataAnalysisCalPulseAnalysis^  calPulseAnalysisField;
    
    private: level1ProductProcessingSignalDataAnalysisNoiseAnalysis^  noiseAnalysisField;
    
    private: level1ProductProcessingSignalDataAnalysisBurstInfo^  burstInfoField;
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisSignalDataCoordinateType signalDataCoordinateType {
        level1ProductProcessingSignalDataAnalysisSignalDataCoordinateType get();
        System::Void set(level1ProductProcessingSignalDataAnalysisSignalDataCoordinateType value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisDataGapInfo^  dataGapInfo {
        level1ProductProcessingSignalDataAnalysisDataGapInfo^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisDataGapInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfo^  rawDataInfo {
        level1ProductProcessingSignalDataAnalysisRawDataInfo^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisCalPulseAnalysis^  calPulseAnalysis {
        level1ProductProcessingSignalDataAnalysisCalPulseAnalysis^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisCalPulseAnalysis^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisNoiseAnalysis^  noiseAnalysis {
        level1ProductProcessingSignalDataAnalysisNoiseAnalysis^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisNoiseAnalysis^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisBurstInfo^  burstInfo {
        level1ProductProcessingSignalDataAnalysisBurstInfo^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisBurstInfo^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisDataGapInfo {
    
    private: System::Int32 numberOfGapsField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap^  >^  dataGapField;
    
    /// <remarks/>
    public: property System::Int32 numberOfGaps {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dataGap")]
    property cli::array< level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap^  >^  dataGap {
        cli::array< level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap {
    
    private: segmentInfoType^  segmentInfoField;
    
    private: System::Int32 numberOfMissingISPsField;
    
    private: System::String^  iSPdesignatorField;
    
    /// <remarks/>
    public: property segmentInfoType^  segmentInfo {
        segmentInfoType^  get();
        System::Void set(segmentInfoType^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfMissingISPs {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::String^  ISPdesignator {
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
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfo {
    
    private: System::Int32 numberOfRawDataBlocksField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection^  >^  rawDataStatisticsAndCorrectionField;
    
    /// <remarks/>
    public: property System::Int32 numberOfRawDataBlocks {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rawDataStatisticsAndCorrection")]
    property cli::array< level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection^  >^  rawDataStatisticsAndCorrection {
        cli::array< level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection {
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo^  blockInfoField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias^  iQbiasField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation^  iQstdDeviationField;
    
    private: System::Single iQGainImbalanceField;
    
    private: System::Single iQNonOrthogonalityField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples^  totalNumberOfValidSamplesField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation^  aDCMaxSaturationField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation^  aDCMinSaturationField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate^  bitErrorRateField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter^  totalBitErrorCounterField;
    
    private: System::Object^  quantisationStatisticsField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionAppliedCorrectionID appliedCorrectionIDField;
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo^  blockInfo {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias^  IQbias {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation^  IQstdDeviation {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation^  value);
    }
    
    /// <remarks/>
    public: property System::Single IQGainImbalance {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IQNonOrthogonality {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples^  totalNumberOfValidSamples {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation^  ADCMaxSaturation {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation^  ADCMinSaturation {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate^  bitErrorRate {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter^  totalBitErrorCounter {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter^  value);
    }
    
    /// <remarks/>
    public: property System::Object^  quantisationStatistics {
        System::Object^  get();
        System::Void set(System::Object^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionAppliedCorrectionID appliedCorrectionID {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionAppliedCorrectionID get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionAppliedCorrectionID value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo {
    
    private: System::String^  instrumentChannelField;
    
    private: System::String^  beamIDField;
    
    private: level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock^  dataBlockField;
    
    private: System::Int32 blockIDField;
    
    /// <remarks/>
    public: property System::String^  instrumentChannel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock^  dataBlock {
        level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock^  get();
        System::Void set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 blockID {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock {
    
    private: System::DateTime startTimeUTCField;
    
    private: System::DateTime stopTimeUTCField;
    
    private: System::Double rangeTimeFirstField;
    
    private: System::Double rangeTimeLastField;
    
    private: System::Int32 numberOfLinesField;
    
    private: System::Int32 numberOfSamplesField;
    
    /// <remarks/>
    public: property System::DateTime startTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::DateTime stopTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Double rangeTimeFirst {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double rangeTimeLast {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfLines {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfSamples {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias {
    
    private: System::Single iChannelField;
    
    private: System::Single qChannelField;
    
    /// <remarks/>
    public: property System::Single IChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single QChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation {
    
    private: System::Single iChannelField;
    
    private: System::Single qChannelField;
    
    /// <remarks/>
    public: property System::Single IChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single QChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples {
    
    private: System::Int64 iChannelField;
    
    private: System::Int64 qChannelField;
    
    /// <remarks/>
    public: property System::Int64 IChannel {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
    
    /// <remarks/>
    public: property System::Int64 QChannel {
        System::Int64 get();
        System::Void set(System::Int64 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation {
    
    private: System::Single iChannelField;
    
    private: System::Single qChannelField;
    
    /// <remarks/>
    public: property System::Single IChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single QChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation {
    
    private: System::Single iChannelField;
    
    private: System::Single qChannelField;
    
    /// <remarks/>
    public: property System::Single IChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single QChannel {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate {
    
    private: System::Int32 iChannelField;
    
    private: System::Int32 qChannelField;
    
    /// <remarks/>
    public: property System::Int32 IChannel {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 QChannel {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter {
    
    private: System::Int32 iChannelField;
    
    private: System::Int32 qChannelField;
    
    /// <remarks/>
    public: property System::Int32 IChannel {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 QChannel {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysis {
    
    private: System::Int32 totalNumberOfCalPulsesField;
    
    private: System::Int32 numberOfCalSequencesField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence^  >^  calSequenceField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis^  >^  chirpAnalysisField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection^  >^  pulseCorrectionField;
    
    /// <remarks/>
    public: property System::Int32 totalNumberOfCalPulses {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfCalSequences {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"calSequence")]
    property cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence^  >^  calSequence {
        cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"chirpAnalysis")]
    property cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis^  >^  chirpAnalysis {
        cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"pulseCorrection")]
    property cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection^  >^  pulseCorrection {
        cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence {
    
    private: segmentInfoType^  segmentInfoField;
    
    private: System::Int32 numberOfCalPulsesField;
    
    private: System::String^  calSequenceTypeField;
    
    /// <remarks/>
    public: property segmentInfoType^  segmentInfo {
        segmentInfoType^  get();
        System::Void set(segmentInfoType^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfCalPulses {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::String^  calSequenceType {
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
public ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis {
    
    private: segmentInfoType^  segmentInfoField;
    
    private: System::String^  pulseCodeField;
    
    private: System::Single totalPowerField;
    
    private: System::Single meanAmplitudeField;
    
    private: System::Double peakLocationField;
    
    private: System::Single pulseLengthField;
    
    private: System::Double resolutionField;
    
    private: System::Single pSLRField;
    
    private: System::Single iSLRField;
    
    /// <remarks/>
    public: property segmentInfoType^  segmentInfo {
        segmentInfoType^  get();
        System::Void set(segmentInfoType^  value);
    }
    
    /// <remarks/>
    public: property System::String^  pulseCode {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Single totalPower {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single meanAmplitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Double peakLocation {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Single pulseLength {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Double resolution {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Single PSLR {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single ISLR {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection {
    
    private: segmentInfoType^  segmentInfoField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection^  >^  amplCorrectionField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection^  >^  phaseCorrectionField;
    
    /// <remarks/>
    public: property segmentInfoType^  segmentInfo {
        segmentInfoType^  get();
        System::Void set(segmentInfoType^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"amplCorrection")]
    property cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection^  >^  amplCorrection {
        cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"phaseCorrection")]
    property cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection^  >^  phaseCorrection {
        cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection : public dblPolynom {
    
    private: level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrectionTimeEffect timeEffectField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrectionTimeEffect timeEffect {
        level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrectionTimeEffect get();
        System::Void set(level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrectionTimeEffect value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection : public dblPolynom {
    
    private: level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrectionTimeEffect timeEffectField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrectionTimeEffect timeEffect {
        level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrectionTimeEffect get();
        System::Void set(level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrectionTimeEffect value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisNoiseAnalysis {
    
    private: System::Int32 numberOfNoiseSequencesField;
    
    private: System::Int32 totalNumberOfNoisePulsesField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence^  >^  noiseSequenceField;
    
    /// <remarks/>
    public: property System::Int32 numberOfNoiseSequences {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 totalNumberOfNoisePulses {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"noiseSequence")]
    property cli::array< level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence^  >^  noiseSequence {
        cli::array< level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence {
    
    private: segmentInfoType^  segmentInfoField;
    
    private: System::Int32 numberOfNoisePulsesField;
    
    private: System::Single averageNoisePowerField;
    
    /// <remarks/>
    public: property segmentInfoType^  segmentInfo {
        segmentInfoType^  get();
        System::Void set(segmentInfoType^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfNoisePulses {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single averageNoisePower {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisBurstInfo {
    
    private: System::Int32 numberOfBurstsField;
    
    private: cli::array< level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence^  >^  burstSequenceField;
    
    /// <remarks/>
    public: property System::Int32 numberOfBursts {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"burstSequence")]
    property cli::array< level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence^  >^  burstSequence {
        cli::array< level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence^  >^  get();
        System::Void set(cli::array< level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence {
    
    private: System::String^  beamIDField;
    
    private: System::String^  polChannelField;
    
    private: System::DateTime startTimeUTCField;
    
    private: System::DateTime stopTimeUTCField;
    
    private: System::Int32 numberOfPulsesField;
    
    private: System::Int32 burstIndexField;
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  polChannel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::DateTime startTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::DateTime stopTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfPulses {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 burstIndex {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingGeometry {
    
    private: System::String^  geometryCoordinateTypeField;
    
    private: cli::array< level1ProductProcessingGeometryVelocityParameter^  >^  velocityParameterField;
    
    private: cli::array< level1ProductProcessingGeometryZeroDopplerVelocity^  >^  zeroDopplerVelocityField;
    
    private: cli::array< level1ProductProcessingGeometryDopplerRate^  >^  dopplerRateField;
    
    /// <remarks/>
    public: property System::String^  geometryCoordinateType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"velocityParameter")]
    property cli::array< level1ProductProcessingGeometryVelocityParameter^  >^  velocityParameter {
        cli::array< level1ProductProcessingGeometryVelocityParameter^  >^  get();
        System::Void set(cli::array< level1ProductProcessingGeometryVelocityParameter^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"zeroDopplerVelocity")]
    property cli::array< level1ProductProcessingGeometryZeroDopplerVelocity^  >^  zeroDopplerVelocity {
        cli::array< level1ProductProcessingGeometryZeroDopplerVelocity^  >^  get();
        System::Void set(cli::array< level1ProductProcessingGeometryZeroDopplerVelocity^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerRate")]
    property cli::array< level1ProductProcessingGeometryDopplerRate^  >^  dopplerRate {
        cli::array< level1ProductProcessingGeometryDopplerRate^  >^  get();
        System::Void set(cli::array< level1ProductProcessingGeometryDopplerRate^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingGeometryVelocityParameter {
    
    private: System::DateTime timeUTCField;
    
    private: System::String^  beamIDField;
    
    private: dblPolynom^  velocityParameterPolynomialField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property dblPolynom^  velocityParameterPolynomial {
        dblPolynom^  get();
        System::Void set(dblPolynom^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingGeometryZeroDopplerVelocity {
    
    private: System::String^  beamIDField;
    
    private: System::Double velocityField;
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Double velocity {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingGeometryDopplerRate {
    
    private: System::DateTime timeUTCField;
    
    private: System::String^  beamIDField;
    
    private: dblPolynom^  dopplerRatePolynomialField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property dblPolynom^  dopplerRatePolynomial {
        dblPolynom^  get();
        System::Void set(dblPolynom^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingDoppler {
    
    private: System::String^  dopplerBasebandEstimationMethodField;
    
    private: System::String^  dopplerGeometricEstimationMethodField;
    
    private: level1ProductProcessingDopplerDopplerCentroidCoordinateType dopplerCentroidCoordinateTypeField;
    
    private: cli::array< level1ProductProcessingDopplerDopplerCentroid^  >^  dopplerCentroidField;
    
    /// <remarks/>
    public: property System::String^  dopplerBasebandEstimationMethod {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  dopplerGeometricEstimationMethod {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingDopplerDopplerCentroidCoordinateType dopplerCentroidCoordinateType {
        level1ProductProcessingDopplerDopplerCentroidCoordinateType get();
        System::Void set(level1ProductProcessingDopplerDopplerCentroidCoordinateType value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerCentroid")]
    property cli::array< level1ProductProcessingDopplerDopplerCentroid^  >^  dopplerCentroid {
        cli::array< level1ProductProcessingDopplerDopplerCentroid^  >^  get();
        System::Void set(cli::array< level1ProductProcessingDopplerDopplerCentroid^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingDopplerDopplerCentroid {
    
    private: polLayer polLayerField;
    
    private: level1ProductProcessingDopplerDopplerCentroidDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: System::String^  beamIDField;
    
    private: System::Double scanSARDopplerOffsetField;
    
    private: System::Boolean scanSARDopplerOffsetFieldSpecified;
    
    private: level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression^  spotlightDopplerProgressionField;
    
    private: System::Double polLayerDopplerOffsetField;
    
    private: System::Boolean polLayerDopplerOffsetFieldSpecified;
    
    private: System::Int32 numberOfBlocksField;
    
    private: System::Int32 numberOfRejectedBlocksField;
    
    private: System::Int32 numberOfDopplerRecordsField;
    
    private: System::Single dopplerRecordAzimuthSpacingField;
    
    private: cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimate^  >^  dopplerEstimateField;
    
    private: System::Int32 layerIndexField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingDopplerDopplerCentroidDRAoffset DRAoffset {
        level1ProductProcessingDopplerDopplerCentroidDRAoffset get();
        System::Void set(level1ProductProcessingDopplerDopplerCentroidDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Double scanSARDopplerOffset {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean scanSARDopplerOffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression^  spotlightDopplerProgression {
        level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression^  get();
        System::Void set(level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression^  value);
    }
    
    /// <remarks/>
    public: property System::Double polLayerDopplerOffset {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean polLayerDopplerOffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfBlocks {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfRejectedBlocks {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfDopplerRecords {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single dopplerRecordAzimuthSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"dopplerEstimate")]
    property cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimate^  >^  dopplerEstimate {
        cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimate^  >^  get();
        System::Void set(cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimate^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 layerIndex {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression {
    
    private: System::Double dopplerMidRangeFirstField;
    
    private: System::Double dopplerMidRangeLastField;
    
    /// <remarks/>
    public: property System::Double dopplerMidRangeFirst {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double dopplerMidRangeLast {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingDopplerDopplerCentroidDopplerEstimate {
    
    private: System::DateTime timeUTCField;
    
    private: System::Double dopplerAtMidRangeField;
    
    private: dblPolynom^  basebandDopplerField;
    
    private: System::Boolean geometricDopplerFlagField;
    
    private: dblPolynom^  geometricDopplerField;
    
    private: System::Int32 dopplerAmbiguityField;
    
    private: System::Boolean dopplerConsistencyFlagField;
    
    private: System::Single dopplerEstimateConfidenceField;
    
    private: level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  combinedDopplerField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Double dopplerAtMidRange {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property dblPolynom^  basebandDoppler {
        dblPolynom^  get();
        System::Void set(dblPolynom^  value);
    }
    
    /// <remarks/>
    public: property System::Boolean geometricDopplerFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property dblPolynom^  geometricDoppler {
        dblPolynom^  get();
        System::Void set(dblPolynom^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 dopplerAmbiguity {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Boolean dopplerConsistencyFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Single dopplerEstimateConfidence {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  combinedDoppler {
        level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  get();
        System::Void set(level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler {
    
    private: System::Double validityRangeMinField;
    
    private: System::Double validityRangeMaxField;
    
    private: System::Double referencePointField;
    
    private: System::UInt32 polynomialDegreeField;
    
    private: cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient^  >^  coefficientField;
    
    /// <remarks/>
    public: property System::Double validityRangeMin {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double validityRangeMax {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double referencePoint {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::UInt32 polynomialDegree {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"coefficient")]
    property cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient^  >^  coefficient {
        cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient^  >^  get();
        System::Void set(cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient {
    
    private: System::UInt32 exponentField;
    
    private: System::Boolean exponentFieldSpecified;
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt32 exponent {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean exponentSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingParameter {
    
    private: System::String^  beamIDField;
    
    private: level1ProductProcessingProcessingParameterProcessingInfoCoordinateType processingInfoCoordinateTypeField;
    
    private: System::Single rangeLooksField;
    
    private: System::Single azimuthLooksField;
    
    private: System::Double rangeLookBandwidthField;
    
    private: System::Double azimuthLookBandwidthField;
    
    private: System::Double totalProcessedRangeBandwidthField;
    
    private: System::Double totalProcessedAzimuthBandwidthField;
    
    private: System::String^  rangeWindowIDField;
    
    private: System::Single rangeWindowCoefficientField;
    
    private: System::String^  azimuthWindowIDField;
    
    private: System::Single azimuthWindowCoefficientField;
    
    private: cli::array< level1ProductProcessingProcessingParameterRangeCompression^  >^  rangeCompressionField;
    
    private: cli::array< level1ProductProcessingProcessingParameterCorrectedInstrumentDelay^  >^  correctedInstrumentDelayField;
    
    private: level1ProductProcessingProcessingParameterScanSARBeamOverlap^  scanSARBeamOverlapField;
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingProcessingParameterProcessingInfoCoordinateType processingInfoCoordinateType {
        level1ProductProcessingProcessingParameterProcessingInfoCoordinateType get();
        System::Void set(level1ProductProcessingProcessingParameterProcessingInfoCoordinateType value);
    }
    
    /// <remarks/>
    public: property System::Single rangeLooks {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single azimuthLooks {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Double rangeLookBandwidth {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double azimuthLookBandwidth {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double totalProcessedRangeBandwidth {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double totalProcessedAzimuthBandwidth {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::String^  rangeWindowID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Single rangeWindowCoefficient {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::String^  azimuthWindowID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Single azimuthWindowCoefficient {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rangeCompression")]
    property cli::array< level1ProductProcessingProcessingParameterRangeCompression^  >^  rangeCompression {
        cli::array< level1ProductProcessingProcessingParameterRangeCompression^  >^  get();
        System::Void set(cli::array< level1ProductProcessingProcessingParameterRangeCompression^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"correctedInstrumentDelay")]
    property cli::array< level1ProductProcessingProcessingParameterCorrectedInstrumentDelay^  >^  correctedInstrumentDelay {
        cli::array< level1ProductProcessingProcessingParameterCorrectedInstrumentDelay^  >^  get();
        System::Void set(cli::array< level1ProductProcessingProcessingParameterCorrectedInstrumentDelay^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingProcessingParameterScanSARBeamOverlap^  scanSARBeamOverlap {
        level1ProductProcessingProcessingParameterScanSARBeamOverlap^  get();
        System::Void set(level1ProductProcessingProcessingParameterScanSARBeamOverlap^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingParameterRangeCompression {
    
    private: segmentInfoType^  segmentInfoField;
    
    private: cli::array< level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp^  >^  chirpsField;
    
    /// <remarks/>
    public: property segmentInfoType^  segmentInfo {
        segmentInfoType^  get();
        System::Void set(segmentInfoType^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayItemAttribute(L"referenceChirp", IsNullable=false)]
    property cli::array< level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp^  >^  chirps {
        cli::array< level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp^  >^  get();
        System::Void set(cli::array< level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp {
    
    private: System::String^  pulseTypeField;
    
    private: level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpChirpDesignator chirpDesignatorField;
    
    private: chirpSlope chirpSlopeField;
    
    private: System::Double pulseLengthField;
    
    private: System::Double pulseBandwidthField;
    
    private: System::Double centerFrequencyField;
    
    private: dblPolynom^  amplitudeField;
    
    private: dblPolynom^  phaseField;
    
    private: level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica^  replicaField;
    
    private: System::Int32 pulseCodeField;
    
    /// <remarks/>
    public: property System::String^  pulseType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpChirpDesignator chirpDesignator {
        level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpChirpDesignator get();
        System::Void set(level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpChirpDesignator value);
    }
    
    /// <remarks/>
    public: property chirpSlope ChirpSlope {
        chirpSlope get();
        System::Void set(chirpSlope value);
    }
    
    /// <remarks/>
    public: property System::Double pulseLength {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double pulseBandwidth {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double centerFrequency {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property dblPolynom^  amplitude {
        dblPolynom^  get();
        System::Void set(dblPolynom^  value);
    }
    
    /// <remarks/>
    public: property dblPolynom^  phase {
        dblPolynom^  get();
        System::Void set(dblPolynom^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica^  replica {
        level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica^  get();
        System::Void set(level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 pulseCode {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica {
    
    private: System::Boolean replicaQualityTooLowFlagField;
    
    private: System::Single totalPowerField;
    
    private: System::Single meanAmplitudeField;
    
    private: System::Double peakLocationField;
    
    private: System::Single pulseLengthField;
    
    private: System::Single resolutionField;
    
    private: System::Single pSLRField;
    
    private: System::Boolean pSLRFieldSpecified;
    
    private: System::Single iSLRField;
    
    private: System::Boolean iSLRFieldSpecified;
    
    /// <remarks/>
    public: property System::Boolean replicaQualityTooLowFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Single totalPower {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single meanAmplitude {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Double peakLocation {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Single pulseLength {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single resolution {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single PSLR {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean PSLRSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Single ISLR {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean ISLRSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingParameterCorrectedInstrumentDelay {
    
    private: polLayer polLayerField;
    
    private: level1ProductProcessingProcessingParameterCorrectedInstrumentDelayDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: System::Double totalTimeDelayField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingProcessingParameterCorrectedInstrumentDelayDRAoffset DRAoffset {
        level1ProductProcessingProcessingParameterCorrectedInstrumentDelayDRAoffset get();
        System::Void set(level1ProductProcessingProcessingParameterCorrectedInstrumentDelayDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Double totalTimeDelay {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingParameterScanSARBeamOverlap {
    
    private: System::Double rangeTimeStartField;
    
    private: System::Double rangeTimeStopField;
    
    private: System::Double farRangeBeamBorderTimeField;
    
    private: System::String^  mergingMethodField;
    
    private: level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight^  lookWeightField;
    
    /// <remarks/>
    public: property System::Double rangeTimeStart {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double rangeTimeStop {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double farRangeBeamBorderTime {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::String^  mergingMethod {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight^  lookWeight {
        level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight^  get();
        System::Void set(level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight {
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProcessingProcessingFlags {
    
    private: System::Boolean rXGainCorrectedFlagField;
    
    private: System::Boolean dRAChannelSyncFlagField;
    
    private: System::Boolean dRAChannelDemixingPerformedFlagField;
    
    private: System::Boolean hybridCouplerCorrectedFlagField;
    
    private: System::Boolean chirpDriftCorrectedFlagField;
    
    private: System::Boolean chirpReplicaUsedFlagField;
    
    private: System::Boolean geometricDopplerUsedFlagField;
    
    private: System::Boolean noiseCorrectedFlagField;
    
    private: System::Boolean rangeSpreadingLossCorrectedFlagField;
    
    private: System::Boolean scanSARBeamCorrectedFlagField;
    
    private: System::Boolean spotLightBeamCorrectedFlagField;
    
    private: System::Boolean azimuthPatternCorrectedFlagField;
    
    private: System::Boolean elevationPatternCorrectedFlagField;
    
    private: System::Boolean polarisationCorrectedFlagField;
    
    private: System::Boolean detectedFlagField;
    
    private: System::Boolean multiLookedFlagField;
    
    private: System::Boolean propagationEffectsCorrectedFlagField;
    
    private: System::Boolean geocodedFlagField;
    
    private: System::Boolean incidenceAngleMaskGeneratedFlagField;
    
    private: System::Boolean nominalProcessingPerformedFlagField;
    
    /// <remarks/>
    public: property System::Boolean RXGainCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean DRAChannelSyncFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean DRAChannelDemixingPerformedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean hybridCouplerCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean chirpDriftCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean chirpReplicaUsedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean geometricDopplerUsedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean noiseCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean rangeSpreadingLossCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean scanSARBeamCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean spotLightBeamCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean azimuthPatternCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean elevationPatternCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean polarisationCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean detectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean multiLookedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean propagationEffectsCorrectedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean geocodedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean incidenceAngleMaskGeneratedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean nominalProcessingPerformedFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrument {
    
    private: level1ProductInstrumentInstrumentInfoCoordinateType instrumentInfoCoordinateTypeField;
    
    private: level1ProductInstrumentRadarParameters^  radarParametersField;
    
    private: cli::array< level1ProductInstrumentSettings^  >^  settingsField;
    
    /// <remarks/>
    public: property level1ProductInstrumentInstrumentInfoCoordinateType instrumentInfoCoordinateType {
        level1ProductInstrumentInstrumentInfoCoordinateType get();
        System::Void set(level1ProductInstrumentInstrumentInfoCoordinateType value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentRadarParameters^  radarParameters {
        level1ProductInstrumentRadarParameters^  get();
        System::Void set(level1ProductInstrumentRadarParameters^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"settings")]
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
    
    private: System::Double centerFrequencyField;
    
    /// <remarks/>
    public: property System::Double centerFrequency {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettings {
    
    private: polLayer polLayerField;
    
    private: level1ProductInstrumentSettingsDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: System::String^  beamIDField;
    
    private: System::Int32 numberOfRxGainChangesField;
    
    private: cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  rxGainSettingField;
    
    private: System::String^  quantisationIDField;
    
    private: level1ProductInstrumentSettingsQuantisationControl^  quantisationControlField;
    
    private: level1ProductInstrumentSettingsRxBandwidth^  rxBandwidthField;
    
    private: level1ProductInstrumentSettingsRSF^  rSFField;
    
    private: System::Int32 numberOfPRFChangesField;
    
    private: System::Int32 numberOfEchoWindowPositionChangesField;
    
    private: System::Int32 numberOfEchoWindowLengthChangesField;
    
    private: System::Int32 numberOfSettingRecordsField;
    
    private: cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  settingRecordField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsDRAoffset DRAoffset {
        level1ProductInstrumentSettingsDRAoffset get();
        System::Void set(level1ProductInstrumentSettingsDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfRxGainChanges {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rxGainSetting")]
    property cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  rxGainSetting {
        cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  get();
        System::Void set(cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  value);
    }
    
    /// <remarks/>
    public: property System::String^  quantisationID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsQuantisationControl^  quantisationControl {
        level1ProductInstrumentSettingsQuantisationControl^  get();
        System::Void set(level1ProductInstrumentSettingsQuantisationControl^  value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsRxBandwidth^  rxBandwidth {
        level1ProductInstrumentSettingsRxBandwidth^  get();
        System::Void set(level1ProductInstrumentSettingsRxBandwidth^  value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsRSF^  RSF {
        level1ProductInstrumentSettingsRSF^  get();
        System::Void set(level1ProductInstrumentSettingsRSF^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfPRFChanges {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfEchoWindowPositionChanges {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfEchoWindowLengthChanges {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfSettingRecords {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"settingRecord")]
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
    
    private: System::DateTime startTimeUTCField;
    
    private: System::DateTime stopTimeUTCField;
    
    private: level1ProductInstrumentSettingsRxGainSettingRxGain^  rxGainField;
    
    /// <remarks/>
    public: property System::DateTime startTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::DateTime stopTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsRxGainSettingRxGain^  rxGain {
        level1ProductInstrumentSettingsRxGainSettingRxGain^  get();
        System::Void set(level1ProductInstrumentSettingsRxGainSettingRxGain^  value);
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
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsQuantisationControl {
    
    private: System::String^  valueField;
    
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
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
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
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsSettingRecord {
    
    private: level1ProductInstrumentSettingsSettingRecordDataSegment^  dataSegmentField;
    
    private: level1ProductInstrumentSettingsSettingRecordPRF^  pRFField;
    
    private: level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  echoWindowPositionField;
    
    private: level1ProductInstrumentSettingsSettingRecordEchowindowLength^  echowindowLengthField;
    
    private: System::String^  pulseTypeField;
    
    private: System::Int32 echoIndexField;
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsSettingRecordDataSegment^  dataSegment {
        level1ProductInstrumentSettingsSettingRecordDataSegment^  get();
        System::Void set(level1ProductInstrumentSettingsSettingRecordDataSegment^  value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsSettingRecordPRF^  PRF {
        level1ProductInstrumentSettingsSettingRecordPRF^  get();
        System::Void set(level1ProductInstrumentSettingsSettingRecordPRF^  value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  echoWindowPosition {
        level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  get();
        System::Void set(level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  value);
    }
    
    /// <remarks/>
    public: property level1ProductInstrumentSettingsSettingRecordEchowindowLength^  echowindowLength {
        level1ProductInstrumentSettingsSettingRecordEchowindowLength^  get();
        System::Void set(level1ProductInstrumentSettingsSettingRecordEchowindowLength^  value);
    }
    
    /// <remarks/>
    public: property System::String^  pulseType {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 echoIndex {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductInstrumentSettingsSettingRecordDataSegment {
    
    private: System::DateTime startTimeUTCField;
    
    private: System::DateTime stopTimeUTCField;
    
    private: System::Int32 numberOfRowsField;
    
    private: System::Int32 segmentIDField;
    
    /// <remarks/>
    public: property System::DateTime startTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::DateTime stopTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfRows {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 segmentID {
        System::Int32 get();
        System::Void set(System::Int32 value);
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
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
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
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
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
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  code {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibration {
    
    private: level1ProductCalibrationCalibrationData^  calibrationDataField;
    
    private: level1ProductCalibrationNominalGeometricPerformance^  nominalGeometricPerformanceField;
    
    private: cli::array< level1ProductCalibrationCalibrationConstant^  >^  calibrationConstantField;
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationData^  calibrationData {
        level1ProductCalibrationCalibrationData^  get();
        System::Void set(level1ProductCalibrationCalibrationData^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationNominalGeometricPerformance^  nominalGeometricPerformance {
        level1ProductCalibrationNominalGeometricPerformance^  get();
        System::Void set(level1ProductCalibrationNominalGeometricPerformance^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"calibrationConstant")]
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
    
    private: level1ProductCalibrationCalibrationDataRadiometricDEMID^  radiometricDEMIDField;
    
    private: System::Int32 numberOfAntennaPatternsField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  antennaPatternField;
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  calibrationInfoAndInstrumentCharacteristicsField;
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataRadiometricDEMID^  radiometricDEMID {
        level1ProductCalibrationCalibrationDataRadiometricDEMID^  get();
        System::Void set(level1ProductCalibrationCalibrationDataRadiometricDEMID^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfAntennaPatterns {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"antennaPattern")]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  antennaPattern {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  calibrationInfoAndInstrumentCharacteristics {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataRadiometricDEMID {
    
    private: System::String^  valueField;
    
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
public ref class level1ProductCalibrationCalibrationDataAntennaPattern {
    
    private: polLayer polLayerField;
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  elevationPatternField;
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  azimuthPatternField;
    
    private: System::Single azimuthSteeringAngleField;
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  elevationLookAnglesField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  beamPointingVectorField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternDRAoffset DRAoffset {
        level1ProductCalibrationCalibrationDataAntennaPatternDRAoffset get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"elevationPattern")]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  elevationPattern {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  azimuthPattern {
        level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  value);
    }
    
    /// <remarks/>
    public: property System::Single azimuthSteeringAngle {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  elevationLookAngles {
        level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"beamPointingVector")]
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
    
    private: System::Single referenceGainField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt^  >^  gainExtField;
    
    private: System::String^  descriptionField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: property System::Single referenceGain {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"gainExt")]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt^  >^  gainExt {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt^  >^  value);
    }
    
    /// <remarks/>
    public: property System::String^  description {
        System::String^  get();
        System::Void set(System::String^  value);
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
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt {
    
    private: System::Single angleField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Single angle {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern {
    
    private: System::Single referenceGainField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt^  >^  gainExtField;
    
    private: System::String^  descriptionField;
    
    private: System::String^  azimuthBeamIDField;
    
    /// <remarks/>
    public: property System::Single referenceGain {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"gainExt")]
    property cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt^  >^  gainExt {
        cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt^  >^  value);
    }
    
    /// <remarks/>
    public: property System::String^  description {
        System::String^  get();
        System::Void set(System::String^  value);
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
public ref class level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt {
    
    private: System::Single angleField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Single angle {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles {
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  coverageRegionMinField;
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  coverageRegionMaxField;
    
    private: System::Boolean fullPerformanceField;
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  coverageRegionMin {
        level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  coverageRegionMax {
        level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  value);
    }
    
    /// <remarks/>
    public: property System::Boolean fullPerformance {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin {
    
    private: System::Single incidenceAngleField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Single incidenceAngle {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax {
    
    private: System::Single incidenceAngleField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Single incidenceAngle {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector {
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  xField;
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  yField;
    
    private: level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  zField;
    
    private: System::String^  beamIDField;
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  x {
        level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  y {
        level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  z {
        level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  get();
        System::Void set(level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  value);
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
    
    private: System::Double errorField;
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Double error {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY {
    
    private: System::Double errorField;
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Double error {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ {
    
    private: System::Double errorField;
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Double error {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
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
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  totalInstrumentTimeDelayField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics^  >^  aDCandIQCharacteristicsField;
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection^  polarimetricChannelCorrectionField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters^  >^  dRAChannelParametersField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"absCalFactor")]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  absCalFactor {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  totalInstrumentTimeDelay {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlArrayItemAttribute(L"I-Q-Characteristics", IsNullable=false)]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics^  >^  ADCandIQCharacteristics {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection^  polarimetricChannelCorrection {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection^  get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"DRAChannelParameters")]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters^  >^  DRAChannelParameters {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor {
    
    private: System::String^  imagingModeField;
    
    private: System::String^  beamIDField;
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorPolarisationChannel polarisationChannelField;
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorLookDirection lookDirectionField;
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorAntennaMode antennaModeField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  imagingMode {
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
    property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorPolarisationChannel polarisationChannel {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorPolarisationChannel get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorPolarisationChannel value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorLookDirection lookDirection {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorLookDirection get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorLookDirection value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorAntennaMode antennaMode {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorAntennaMode get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorAntennaMode value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay {
    
    private: System::Single instrCESystematicTimeDelayField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  internalDelayField;
    
    public: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay();
    /// <remarks/>
    public: property System::Single instrCESystematicTimeDelay {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"internalDelay")]
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
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelayPolarisationChannel polarisationChannelField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelayPolarisationChannel polarisationChannel {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelayPolarisationChannel get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelayPolarisationChannel value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics {
    
    private: System::Double biasField;
    
    private: System::Double imbalanceField;
    
    private: System::Double nonorthogonalityField;
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristicsChannel channelField;
    
    /// <remarks/>
    public: property System::Double bias {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double imbalance {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"non-orthogonality")]
    property System::Double nonorthogonality {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristicsChannel channel {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristicsChannel get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristicsChannel value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection {
    
    private: System::Single channelImbalanceField;
    
    private: cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk^  >^  crosstalkField;
    
    /// <remarks/>
    public: property System::Single channelImbalance {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"crosstalk")]
    property cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk^  >^  crosstalk {
        cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk^  >^  get();
        System::Void set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk^  >^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk {
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalkPolarisation polarisationField;
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalkPolarisation polarisation {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalkPolarisation get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalkPolarisation value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters {
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters^  draParametersField;
    
    private: System::UInt64 numField;
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters^  draParameters {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters^  get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt64 num {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters {
    
    private: System::Double sumToDiffDelayField;
    
    private: level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix^  transformationMatrixField;
    
    /// <remarks/>
    public: property System::Double sumToDiffDelay {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix^  transformationMatrix {
        level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix^  get();
        System::Void set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix {
    
    private: System::Double k1Field;
    
    private: dblComplex^  h_1_1Field;
    
    private: dblComplex^  h_1_2Field;
    
    private: dblComplex^  h_2_1Field;
    
    private: dblComplex^  h_2_2Field;
    
    /// <remarks/>
    public: property System::Double k1 {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property dblComplex^  h_1_1 {
        dblComplex^  get();
        System::Void set(dblComplex^  value);
    }
    
    /// <remarks/>
    public: property dblComplex^  h_1_2 {
        dblComplex^  get();
        System::Void set(dblComplex^  value);
    }
    
    /// <remarks/>
    public: property dblComplex^  h_2_1 {
        dblComplex^  get();
        System::Void set(dblComplex^  value);
    }
    
    /// <remarks/>
    public: property dblComplex^  h_2_2 {
        dblComplex^  get();
        System::Void set(dblComplex^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationNominalGeometricPerformance {
    
    private: System::Single azimuthResField;
    
    private: System::Single slantRangeResField;
    
    private: System::Single nominalSwathWidthField;
    
    /// <remarks/>
    public: property System::Single azimuthRes {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single slantRangeRes {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single nominalSwathWidth {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductCalibrationCalibrationConstant {
    
    private: polLayer polLayerField;
    
    private: System::Boolean polLayerFieldSpecified;
    
    private: System::String^  beamIDField;
    
    private: level1ProductCalibrationCalibrationConstantDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: level1ProductCalibrationCalibrationConstantCalFactor^  calFactorField;
    
    private: System::String^  layerIndexField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean polLayerSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationConstantDRAoffset DRAoffset {
        level1ProductCalibrationCalibrationConstantDRAoffset get();
        System::Void set(level1ProductCalibrationCalibrationConstantDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property level1ProductCalibrationCalibrationConstantCalFactor^  calFactor {
        level1ProductCalibrationCalibrationConstantCalFactor^  get();
        System::Void set(level1ProductCalibrationCalibrationConstantCalFactor^  value);
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
public ref class level1ProductCalibrationCalibrationConstantCalFactor {
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductNoise {
    
    private: polLayer PolLayerField;
    
    private: System::String^  beamIDField;
    
    private: level1ProductNoiseDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: System::String^  noiseModelIDField;
    
    private: System::String^  noiseLevelRefField;
    
    private: System::Int32 numberOfNoiseRecordsField;
    
    private: System::Single averageNoiseRecordAzimuthSpacingField;
    
    private: cli::array< level1ProductNoiseImageNoise^  >^  imageNoiseField;
    
    private: System::Int32 layerIndexField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductNoiseDRAoffset DRAoffset {
        level1ProductNoiseDRAoffset get();
        System::Void set(level1ProductNoiseDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::String^  noiseModelID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  noiseLevelRef {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 numberOfNoiseRecords {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single averageNoiseRecordAzimuthSpacing {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageNoise")]
    property cli::array< level1ProductNoiseImageNoise^  >^  imageNoise {
        cli::array< level1ProductNoiseImageNoise^  >^  get();
        System::Void set(cli::array< level1ProductNoiseImageNoise^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 layerIndex {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductNoiseImageNoise {
    
    private: System::DateTime timeUTCField;
    
    private: cli::array< dblPolynom^  >^  noiseEstimateField;
    
    private: System::Single noiseEstimateConfidenceField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"noiseEstimate")]
    property cli::array< dblPolynom^  >^  noiseEstimate {
        cli::array< dblPolynom^  >^  get();
        System::Void set(cli::array< dblPolynom^  >^  value);
    }
    
    /// <remarks/>
    public: property System::Single noiseEstimateConfidence {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatform {
    
    private: level1ProductPlatformReferenceData^  referenceDataField;
    
    private: level1ProductPlatformOrbit^  orbitField;
    
    private: level1ProductPlatformAttitude^  attitudeField;
    
    /// <remarks/>
    public: property level1ProductPlatformReferenceData^  referenceData {
        level1ProductPlatformReferenceData^  get();
        System::Void set(level1ProductPlatformReferenceData^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformOrbit^  orbit {
        level1ProductPlatformOrbit^  get();
        System::Void set(level1ProductPlatformOrbit^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformAttitude^  attitude {
        level1ProductPlatformAttitude^  get();
        System::Void set(level1ProductPlatformAttitude^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformReferenceData {
    
    private: System::Double sARAntennaMechanicalBoresightField;
    
    private: cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  sARAntennaPositionField;
    
    private: cli::array< level1ProductPlatformReferenceDataGPSAntennaPosition^  >^  gPSAntennaPositionField;
    
    /// <remarks/>
    public: property System::Double SARAntennaMechanicalBoresight {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"SARAntennaPosition")]
    property cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  SARAntennaPosition {
        cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  get();
        System::Void set(cli::array< level1ProductPlatformReferenceDataSARAntennaPosition^  >^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"GPSAntennaPosition")]
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
public ref class level1ProductPlatformReferenceDataSARAntennaPosition : public floatVector {
    
    private: level1ProductPlatformReferenceDataSARAntennaPositionDRAoffset dRAoffsetField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductPlatformReferenceDataSARAntennaPositionDRAoffset DRAoffset {
        level1ProductPlatformReferenceDataSARAntennaPositionDRAoffset get();
        System::Void set(level1ProductPlatformReferenceDataSARAntennaPositionDRAoffset value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformReferenceDataGPSAntennaPosition : public floatVector {
    
    private: level1ProductPlatformReferenceDataGPSAntennaPositionGPSreceiver gPSreceiverField;
    
    private: level1ProductPlatformReferenceDataGPSAntennaPositionUnit unitField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductPlatformReferenceDataGPSAntennaPositionGPSreceiver GPSreceiver {
        level1ProductPlatformReferenceDataGPSAntennaPositionGPSreceiver get();
        System::Void set(level1ProductPlatformReferenceDataGPSAntennaPositionGPSreceiver value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductPlatformReferenceDataGPSAntennaPositionUnit unit {
        level1ProductPlatformReferenceDataGPSAntennaPositionUnit get();
        System::Void set(level1ProductPlatformReferenceDataGPSAntennaPositionUnit value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbit {
    
    private: level1ProductPlatformOrbitOrbitHeader^  orbitHeaderField;
    
    private: cli::array< level1ProductPlatformOrbitStateVec^  >^  stateVecField;
    
    /// <remarks/>
    public: property level1ProductPlatformOrbitOrbitHeader^  orbitHeader {
        level1ProductPlatformOrbitOrbitHeader^  get();
        System::Void set(level1ProductPlatformOrbitOrbitHeader^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"stateVec")]
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
    
    private: level1ProductPlatformOrbitOrbitHeaderGenerationSystem^  generationSystemField;
    
    private: level1ProductPlatformOrbitOrbitHeaderSensor sensorField;
    
    private: level1ProductPlatformOrbitOrbitHeaderAccuracy accuracyField;
    
    private: System::String^  stateVectorRefFrameField;
    
    private: level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom^  coordSystemTransfromField;
    
    private: System::String^  stateVectorRefTimeField;
    
    private: System::String^  stateVecFormatField;
    
    private: System::UInt64 numStateVectorsField;
    
    private: level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  firstStateTimeField;
    
    private: level1ProductPlatformOrbitOrbitHeaderLastStateTime^  lastStateTimeField;
    
    private: System::Double stateVectorTimeSpacingField;
    
    private: System::Single positionAccuracyMarginField;
    
    private: System::Single velocityAccuracyMarginField;
    
    private: System::String^  recProcessingTechniqueField;
    
    private: System::Int32 recPolDegreeField;
    
    private: System::Int32 dataGapIndicatorField;
    
    /// <remarks/>
    public: property level1ProductPlatformOrbitOrbitHeaderGenerationSystem^  generationSystem {
        level1ProductPlatformOrbitOrbitHeaderGenerationSystem^  get();
        System::Void set(level1ProductPlatformOrbitOrbitHeaderGenerationSystem^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformOrbitOrbitHeaderSensor sensor {
        level1ProductPlatformOrbitOrbitHeaderSensor get();
        System::Void set(level1ProductPlatformOrbitOrbitHeaderSensor value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformOrbitOrbitHeaderAccuracy accuracy {
        level1ProductPlatformOrbitOrbitHeaderAccuracy get();
        System::Void set(level1ProductPlatformOrbitOrbitHeaderAccuracy value);
    }
    
    /// <remarks/>
    public: property System::String^  stateVectorRefFrame {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom^  coordSystemTransfrom {
        level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom^  get();
        System::Void set(level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom^  value);
    }
    
    /// <remarks/>
    public: property System::String^  stateVectorRefTime {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  stateVecFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::UInt64 numStateVectors {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  firstStateTime {
        level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  get();
        System::Void set(level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformOrbitOrbitHeaderLastStateTime^  lastStateTime {
        level1ProductPlatformOrbitOrbitHeaderLastStateTime^  get();
        System::Void set(level1ProductPlatformOrbitOrbitHeaderLastStateTime^  value);
    }
    
    /// <remarks/>
    public: property System::Double stateVectorTimeSpacing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Single positionAccuracyMargin {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single velocityAccuracyMargin {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::String^  recProcessingTechnique {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 recPolDegree {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 dataGapIndicator {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeaderGenerationSystem {
    
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
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom {
    
    private: cli::array< level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff^  >^  rotMatrixCoeffField;
    
    private: dblVector^  shiftField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rotMatrixCoeff")]
    property cli::array< level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff^  >^  rotMatrixCoeff {
        cli::array< level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff^  >^  get();
        System::Void set(cli::array< level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff^  >^  value);
    }
    
    /// <remarks/>
    public: property dblVector^  shift {
        dblVector^  get();
        System::Void set(dblVector^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff {
    
    private: System::Int32 iField;
    
    private: System::Int32 jField;
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 i {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 j {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeaderFirstStateTime {
    
    private: System::DateTime firstStateTimeUTCField;
    
    private: System::UInt32 firstStateTimeGPSField;
    
    private: System::Double firstStateTimeGPSFractionField;
    
    /// <remarks/>
    public: property System::DateTime firstStateTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::UInt32 firstStateTimeGPS {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: property System::Double firstStateTimeGPSFraction {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitOrbitHeaderLastStateTime {
    
    private: System::DateTime lastStateTimeUTCField;
    
    private: System::UInt32 lastStateTimeGPSField;
    
    private: System::Double lastStateTimeGPSFractionField;
    
    /// <remarks/>
    public: property System::DateTime lastStateTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::UInt32 lastStateTimeGPS {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: property System::Double lastStateTimeGPSFraction {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformOrbitStateVec {
    
    private: System::DateTime timeUTCField;
    
    private: System::UInt64 timeGPSField;
    
    private: System::Double timeGPSFractionField;
    
    private: System::Double posXField;
    
    private: System::Double posYField;
    
    private: System::Double posZField;
    
    private: System::Double velXField;
    
    private: System::Double velYField;
    
    private: System::Double velZField;
    
    private: System::UInt64 numField;
    
    private: level1ProductPlatformOrbitStateVecManeuver maneuverField;
    
    private: System::Byte qualIndField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::UInt64 timeGPS {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: property System::Double timeGPSFraction {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double posX {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double posY {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double posZ {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double velX {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double velY {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double velZ {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt64 num {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductPlatformOrbitStateVecManeuver maneuver {
        level1ProductPlatformOrbitStateVecManeuver get();
        System::Void set(level1ProductPlatformOrbitStateVecManeuver value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Byte qualInd {
        System::Byte get();
        System::Void set(System::Byte value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitude {
    
    private: level1ProductPlatformAttitudeAttitudeHeader^  attitudeHeaderField;
    
    private: cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  attitudeDataField;
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeader^  attitudeHeader {
        level1ProductPlatformAttitudeAttitudeHeader^  get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeader^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"attitudeData")]
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
    
    private: level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem^  generationSystemField;
    
    private: level1ProductPlatformAttitudeAttitudeHeaderSensor sensorField;
    
    private: level1ProductPlatformAttitudeAttitudeHeaderAccuracy accuracyField;
    
    private: level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  attitudeDataRefFramesField;
    
    private: level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom^  coordSystemTransfromField;
    
    private: System::String^  attitudeDataRefTimeField;
    
    private: System::String^  attitudeDataFormatField;
    
    private: System::UInt64 numRecordsField;
    
    private: level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  firstAttitudeTimeField;
    
    private: level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  lastAttitudeTimeField;
    
    private: System::Double attitudeDataTimeSpacingField;
    
    private: System::Single accuracyMarginField;
    
    private: System::String^  recInterpolTechniqueField;
    
    private: System::Int32 recInterpolPolDegreeField;
    
    private: System::Int32 dataGapIndicatorField;
    
    private: System::String^  steeringLawIndicatorField;
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem^  generationSystem {
        level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem^  get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeaderSensor sensor {
        level1ProductPlatformAttitudeAttitudeHeaderSensor get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeaderSensor value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeaderAccuracy accuracy {
        level1ProductPlatformAttitudeAttitudeHeaderAccuracy get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeaderAccuracy value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  attitudeDataRefFrames {
        level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom^  coordSystemTransfrom {
        level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom^  get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom^  value);
    }
    
    /// <remarks/>
    public: property System::String^  attitudeDataRefTime {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  attitudeDataFormat {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::UInt64 numRecords {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  firstAttitudeTime {
        level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  value);
    }
    
    /// <remarks/>
    public: property level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  lastAttitudeTime {
        level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  get();
        System::Void set(level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  value);
    }
    
    /// <remarks/>
    public: property System::Double attitudeDataTimeSpacing {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Single accuracyMargin {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::String^  recInterpolTechnique {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Int32 recInterpolPolDegree {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Int32 dataGapIndicator {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::String^  steeringLawIndicator {
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
public ref class level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem {
    
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
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames {
    
    private: System::String^  fromFrameField;
    
    private: System::String^  toFrameField;
    
    /// <remarks/>
    public: property System::String^  FromFrame {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  ToFrame {
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
public ref class level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom {
    
    private: cli::array< level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff^  >^  rotMatrixCoeffField;
    
    private: dblVector^  shiftField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rotMatrixCoeff")]
    property cli::array< level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff^  >^  rotMatrixCoeff {
        cli::array< level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff^  >^  get();
        System::Void set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff^  >^  value);
    }
    
    /// <remarks/>
    public: property dblVector^  shift {
        dblVector^  get();
        System::Void set(dblVector^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff {
    
    private: System::Int32 iField;
    
    private: System::Int32 jField;
    
    private: System::Double valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 i {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 j {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Double Value {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime {
    
    private: System::DateTime firstAttitudeTimeUTCField;
    
    private: System::UInt32 firstAttitudeTimeGPSField;
    
    private: System::Double firstAttitudeTimeGPSFractionField;
    
    /// <remarks/>
    public: property System::DateTime firstAttitudeTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::UInt32 firstAttitudeTimeGPS {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: property System::Double firstAttitudeTimeGPSFraction {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime {
    
    private: System::DateTime lastAttitudeTimeUTCField;
    
    private: System::UInt32 lastAttitudeTimeGPSField;
    
    private: System::Double lastAttitudeTimeGPSFractionField;
    
    /// <remarks/>
    public: property System::DateTime lastAttitudeTimeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::UInt32 lastAttitudeTimeGPS {
        System::UInt32 get();
        System::Void set(System::UInt32 value);
    }
    
    /// <remarks/>
    public: property System::Double lastAttitudeTimeGPSFraction {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductPlatformAttitudeAttitudeData {
    
    private: System::DateTime timeUTCField;
    
    private: System::UInt64 timeGPSField;
    
    private: System::Double timeGPSFractionField;
    
    private: System::Double q0Field;
    
    private: System::Double q1Field;
    
    private: System::Double q2Field;
    
    private: System::Double q3Field;
    
    private: System::UInt64 numField;
    
    private: level1ProductPlatformAttitudeAttitudeDataManeuver maneuverField;
    
    private: System::Byte qualIndField;
    
    private: System::String^  antsteerIndField;
    
    /// <remarks/>
    public: property System::DateTime timeUTC {
        System::DateTime get();
        System::Void set(System::DateTime value);
    }
    
    /// <remarks/>
    public: property System::UInt64 timeGPS {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: property System::Double timeGPSFraction {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double q0 {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double q1 {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double q2 {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double q3 {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::UInt64 num {
        System::UInt64 get();
        System::Void set(System::UInt64 value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property level1ProductPlatformAttitudeAttitudeDataManeuver maneuver {
        level1ProductPlatformAttitudeAttitudeDataManeuver get();
        System::Void set(level1ProductPlatformAttitudeAttitudeDataManeuver value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Byte qualInd {
        System::Byte get();
        System::Void set(System::Byte value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::String^  antsteerInd {
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
public ref class level1ProductProductQuality {
    
    private: cli::array< level1ProductProductQualityRawDataQuality^  >^  rawDataQualityField;
    
    private: level1ProductProductQualityAuxDataQuality^  auxDataQualityField;
    
    private: level1ProductProductQualityProcessingParameterQuality^  processingParameterQualityField;
    
    private: cli::array< level1ProductProductQualityImageDataQuality^  >^  imageDataQualityField;
    
    private: level1ProductProductQualityLimits^  limitsField;
    
    private: System::String^  instrumentStateRemarkField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rawDataQuality")]
    property cli::array< level1ProductProductQualityRawDataQuality^  >^  rawDataQuality {
        cli::array< level1ProductProductQualityRawDataQuality^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityRawDataQuality^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityAuxDataQuality^  auxDataQuality {
        level1ProductProductQualityAuxDataQuality^  get();
        System::Void set(level1ProductProductQualityAuxDataQuality^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityProcessingParameterQuality^  processingParameterQuality {
        level1ProductProductQualityProcessingParameterQuality^  get();
        System::Void set(level1ProductProductQualityProcessingParameterQuality^  value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"imageDataQuality")]
    property cli::array< level1ProductProductQualityImageDataQuality^  >^  imageDataQuality {
        cli::array< level1ProductProductQualityImageDataQuality^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityImageDataQuality^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimits^  limits {
        level1ProductProductQualityLimits^  get();
        System::Void set(level1ProductProductQualityLimits^  value);
    }
    
    /// <remarks/>
    public: property System::String^  instrumentStateRemark {
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
public ref class level1ProductProductQualityRawDataQuality {
    
    private: System::String^  instrumentChannelField;
    
    private: System::String^  beamIDField;
    
    private: System::String^  polarizationField;
    
    private: System::Boolean gapSignificanceFlagField;
    
    private: System::Boolean missingLinesSignificanceFlagField;
    
    private: System::Boolean aDCOverflowSignificanceFlagField;
    
    private: System::Boolean bitErrorsSignificanceFlagField;
    
    private: System::Boolean iBiasOutsideLimitsFlagField;
    
    private: System::Boolean qBiasOutsideLimitsFlagField;
    
    private: System::Boolean iQImbalanceOutsideLimitsFlagField;
    
    private: System::Boolean iQNonOrthogonalityOutsideLimitsFlagField;
    
    /// <remarks/>
    public: property System::String^  instrumentChannel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::String^  polarization {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property System::Boolean gapSignificanceFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean missingLinesSignificanceFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean ADCOverflowSignificanceFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean bitErrorsSignificanceFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean IBiasOutsideLimitsFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean QBiasOutsideLimitsFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean IQImbalanceOutsideLimitsFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean IQNonOrthogonalityOutsideLimitsFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityAuxDataQuality {
    
    private: System::Boolean orbitDataQualityLowFlagField;
    
    private: System::Boolean attitudeDataQualityLowFlagField;
    
    private: System::Boolean dEMqualityLowFlagField;
    
    private: System::Boolean missingAuxDataFlagField;
    
    /// <remarks/>
    public: property System::Boolean orbitDataQualityLowFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean attitudeDataQualityLowFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean DEMqualityLowFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean missingAuxDataFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQuality {
    
    private: level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  averageDopplerCentroidInfoField;
    
    private: System::Boolean dopplerAmbiguityNotZeroFlagField;
    
    private: System::Boolean dopplerInconsistencyFlagField;
    
    private: System::Boolean dopplerOutsideLimitsFlagsField;
    
    private: System::Boolean dopplerDriftOutsideLimitsFlagsField;
    
    private: System::Boolean chirpQualityLowFlagField;
    
    private: System::Boolean geolocationQualityLowFlagField;
    
    /// <remarks/>
    public: property level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  averageDopplerCentroidInfo {
        level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  get();
        System::Void set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  value);
    }
    
    /// <remarks/>
    public: property System::Boolean dopplerAmbiguityNotZeroFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean dopplerInconsistencyFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean dopplerOutsideLimitsFlags {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean dopplerDriftOutsideLimitsFlags {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean chirpQualityLowFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean geolocationQualityLowFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo {
    
    private: level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  azimuthStartField;
    
    private: level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  azimuthCenterField;
    
    private: level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  azimuthStopField;
    
    /// <remarks/>
    public: property level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  azimuthStart {
        level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  get();
        System::Void set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  azimuthCenter {
        level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  get();
        System::Void set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  azimuthStop {
        level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  get();
        System::Void set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart {
    
    private: System::Double nearRangeField;
    
    private: System::Double midRangeField;
    
    private: System::Double farRangeField;
    
    /// <remarks/>
    public: property System::Double nearRange {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double midRange {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double farRange {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter {
    
    private: System::Double nearRangeField;
    
    private: System::Double midRangeField;
    
    private: System::Double farRangeField;
    
    /// <remarks/>
    public: property System::Double nearRange {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double midRange {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double farRange {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop {
    
    private: System::Double nearRangeField;
    
    private: System::Double midRangeField;
    
    private: System::Double farRangeField;
    
    /// <remarks/>
    public: property System::Double nearRange {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double midRange {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double farRange {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityImageDataQuality {
    
    private: polLayer polLayerField;
    
    private: System::String^  beamIDField;
    
    private: level1ProductProductQualityImageDataQualityDRAoffset dRAoffsetField;
    
    private: System::Boolean dRAoffsetFieldSpecified;
    
    private: level1ProductProductQualityImageDataQualityImageDataStatistics^  imageDataStatisticsField;
    
    private: System::Single nominalSNRField;
    
    private: System::Boolean imageMeanFlagField;
    
    private: System::Boolean imageStdDevFlagField;
    
    private: System::Int32 layerIndexField;
    
    /// <remarks/>
    public: property polLayer PolLayer {
        polLayer get();
        System::Void set(polLayer value);
    }
    
    /// <remarks/>
    public: property System::String^  beamID {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityImageDataQualityDRAoffset DRAoffset {
        level1ProductProductQualityImageDataQualityDRAoffset get();
        System::Void set(level1ProductProductQualityImageDataQualityDRAoffset value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlIgnoreAttribute]
    property System::Boolean DRAoffsetSpecified {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityImageDataQualityImageDataStatistics^  imageDataStatistics {
        level1ProductProductQualityImageDataQualityImageDataStatistics^  get();
        System::Void set(level1ProductProductQualityImageDataQualityImageDataStatistics^  value);
    }
    
    /// <remarks/>
    public: property System::Single nominalSNR {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Boolean imageMeanFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: property System::Boolean imageStdDevFlag {
        System::Boolean get();
        System::Void set(System::Boolean value);
    }
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlAttributeAttribute]
    property System::Int32 layerIndex {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityImageDataQualityImageDataStatistics {
    
    private: System::Double meanField;
    
    private: System::Double maxField;
    
    private: System::Double minField;
    
    private: System::Double stdDevField;
    
    /// <remarks/>
    public: property System::Double mean {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double max {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double min {
        System::Double get();
        System::Void set(System::Double value);
    }
    
    /// <remarks/>
    public: property System::Double stdDev {
        System::Double get();
        System::Void set(System::Double value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimits {
    
    private: cli::array< level1ProductProductQualityLimitsRawData^  >^  rawDataField;
    
    private: level1ProductProductQualityLimitsProcessing^  processingField;
    
    private: level1ProductProductQualityLimitsImageData^  imageDataField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlElementAttribute(L"rawData")]
    property cli::array< level1ProductProductQualityLimitsRawData^  >^  rawData {
        cli::array< level1ProductProductQualityLimitsRawData^  >^  get();
        System::Void set(cli::array< level1ProductProductQualityLimitsRawData^  >^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsProcessing^  processing {
        level1ProductProductQualityLimitsProcessing^  get();
        System::Void set(level1ProductProductQualityLimitsProcessing^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsImageData^  imageData {
        level1ProductProductQualityLimitsImageData^  get();
        System::Void set(level1ProductProductQualityLimitsImageData^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawData {
    
    private: System::String^  instrumentChannelField;
    
    private: level1ProductProductQualityLimitsRawDataADCOverflow^  aDCOverflowField;
    
    private: level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics^  echoBufferParityErrorStatisticsField;
    
    private: level1ProductProductQualityLimitsRawDataSARDataStatistics^  sARDataStatisticsField;
    
    private: System::Single missingLinePercentageLimitField;
    
    private: System::Int32 gapDefinitionField;
    
    private: System::Single gapPercentageLimitField;
    
    /// <remarks/>
    public: property System::String^  instrumentChannel {
        System::String^  get();
        System::Void set(System::String^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataADCOverflow^  ADCOverflow {
        level1ProductProductQualityLimitsRawDataADCOverflow^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataADCOverflow^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics^  echoBufferParityErrorStatistics {
        level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataSARDataStatistics^  SARDataStatistics {
        level1ProductProductQualityLimitsRawDataSARDataStatistics^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataSARDataStatistics^  value);
    }
    
    /// <remarks/>
    public: property System::Single missingLinePercentageLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Int32 gapDefinition {
        System::Int32 get();
        System::Void set(System::Int32 value);
    }
    
    /// <remarks/>
    public: property System::Single gapPercentageLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataADCOverflow {
    
    private: level1ProductProductQualityLimitsRawDataADCOverflowIChannel^  iChannelField;
    
    private: level1ProductProductQualityLimitsRawDataADCOverflowQChannel^  qChannelField;
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataADCOverflowIChannel^  IChannel {
        level1ProductProductQualityLimitsRawDataADCOverflowIChannel^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataADCOverflowIChannel^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataADCOverflowQChannel^  QChannel {
        level1ProductProductQualityLimitsRawDataADCOverflowQChannel^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataADCOverflowQChannel^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataADCOverflowIChannel {
    
    private: System::Single iAdcOvlMaxLimitField;
    
    private: System::Single iAdcOvlStdLimitField;
    
    /// <remarks/>
    public: property System::Single IAdcOvlMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IAdcOvlStdLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataADCOverflowQChannel {
    
    private: System::Single qAdcOvlMaxLimitField;
    
    private: System::Single qAdcOvlStdLimitField;
    
    /// <remarks/>
    public: property System::Single QAdcOvlMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single QAdcOvlStdLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics {
    
    private: level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit^  eBParityErrorRateMaxLimitField;
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit^  EBParityErrorRateMaxLimit {
        level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit {
    
    private: System::Single valueField;
    
    /// <remarks/>
    public: [System::Xml::Serialization::XmlTextAttribute]
    property System::Single Value {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataSARDataStatistics {
    
    private: level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel^  iChannelField;
    
    private: level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel^  qChannelField;
    
    private: level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel^  iQChannelField;
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel^  IChannel {
        level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel^  QChannel {
        level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel^  value);
    }
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel^  IQChannel {
        level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel^  get();
        System::Void set(level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel^  value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel {
    
    private: System::Single iMeanMaxLimitField;
    
    private: System::Single iMeanStdLimitField;
    
    private: System::Single iBiasMaxLimitField;
    
    /// <remarks/>
    public: property System::Single IMeanMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IMeanStdLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IBiasMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel {
    
    private: System::Single qMeanMaxLimitField;
    
    private: System::Single qMeanStdLimitField;
    
    private: System::Single qBiasMaxLimitField;
    
    /// <remarks/>
    public: property System::Single QMeanMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single QMeanStdLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single QBiasMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel {
    
    private: System::Single iQGainImbalanceMaxLimitField;
    
    private: System::Single iQGainImbalanceStdLimitField;
    
    private: System::Single iQNonorthogonalityMaxLimitField;
    
    private: System::Single iQNonorthogonalityStdLimitField;
    
    private: System::Single iQCrossCorrelationMaxLimitField;
    
    private: System::Single iQCrossCorrelationStdLimitField;
    
    /// <remarks/>
    public: property System::Single IQGainImbalanceMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IQGainImbalanceStdLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IQNonorthogonalityMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IQNonorthogonalityStdLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IQCrossCorrelationMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single IQCrossCorrelationStdLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessing {
    
    private: level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  dopplerCentroidInformationField;
    
    private: System::Single chirpQualityLimitField;
    
    private: System::Single geolocationQualityLimitField;
    
    /// <remarks/>
    public: property level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  dopplerCentroidInformation {
        level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  get();
        System::Void set(level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  value);
    }
    
    /// <remarks/>
    public: property System::Single chirpQualityLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single geolocationQualityLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsProcessingDopplerCentroidInformation {
    
    private: System::Single fdcNearRangeLimitField;
    
    private: System::Single fdcMidRangeLimitField;
    
    private: System::Single fdcFarRangeLimitField;
    
    private: System::Single fdcLinearRangeDriftMaxLimitField;
    
    private: System::Single fdcLinearAzimuthDriftMaxLimitField;
    
    /// <remarks/>
    public: property System::Single fdcNearRangeLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single fdcMidRangeLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single fdcFarRangeLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single fdcLinearRangeDriftMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
    
    /// <remarks/>
    public: property System::Single fdcLinearAzimuthDriftMaxLimit {
        System::Single get();
        System::Void set(System::Single value);
    }
};

/// <remarks/>
[System::CodeDom::Compiler::GeneratedCodeAttribute(L"xsd", L"4.6.81.0"), 
System::SerializableAttribute, 
System::Diagnostics::DebuggerStepThroughAttribute, 
System::ComponentModel::DesignerCategoryAttribute(L"code"), 
System::Xml::Serialization::XmlTypeAttribute(AnonymousType=true)]
public ref class level1ProductProductQualityLimitsImageData {
    
    private: qualityLimitsType^  imageMeanField;
    
    private: qualityLimitsType^  imageSigmaField;
    
    /// <remarks/>
    public: property qualityLimitsType^  imageMean {
        qualityLimitsType^  get();
        System::Void set(qualityLimitsType^  value);
    }
    
    /// <remarks/>
    public: property qualityLimitsType^  imageSigma {
        qualityLimitsType^  get();
        System::Void set(qualityLimitsType^  value);
    }
};




































































inline System::String^  generalHeader::itemName::get() {
    return this->itemNameField;
}
inline System::Void generalHeader::itemName::set(System::String^  value) {
    this->itemNameField = value;
}

inline System::String^  generalHeader::mission::get() {
    return this->missionField;
}
inline System::Void generalHeader::mission::set(System::String^  value) {
    this->missionField = value;
}

inline System::String^  generalHeader::source::get() {
    return this->sourceField;
}
inline System::Void generalHeader::source::set(System::String^  value) {
    this->sourceField = value;
}

inline System::String^  generalHeader::destination::get() {
    return this->destinationField;
}
inline System::Void generalHeader::destination::set(System::String^  value) {
    this->destinationField = value;
}

inline generalHeaderGenerationSystem^  generalHeader::generationSystem::get() {
    return this->generationSystemField;
}
inline System::Void generalHeader::generationSystem::set(generalHeaderGenerationSystem^  value) {
    this->generationSystemField = value;
}

inline System::DateTime generalHeader::generationTime::get() {
    return this->generationTimeField;
}
inline System::Void generalHeader::generationTime::set(System::DateTime value) {
    this->generationTimeField = value;
}

inline System::String^  generalHeader::referenceDocument::get() {
    return this->referenceDocumentField;
}
inline System::Void generalHeader::referenceDocument::set(System::String^  value) {
    this->referenceDocumentField = value;
}

inline System::String^  generalHeader::revision::get() {
    return this->revisionField;
}
inline System::Void generalHeader::revision::set(System::String^  value) {
    this->revisionField = value;
}

inline System::String^  generalHeader::revisionComment::get() {
    return this->revisionCommentField;
}
inline System::Void generalHeader::revisionComment::set(System::String^  value) {
    this->revisionCommentField = value;
}

inline System::String^  generalHeader::remark::get() {
    return this->remarkField;
}
inline System::Void generalHeader::remark::set(System::String^  value) {
    this->remarkField = value;
}

inline System::String^  generalHeader::fileName::get() {
    return this->fileNameField;
}
inline System::Void generalHeader::fileName::set(System::String^  value) {
    this->fileNameField = value;
}

inline System::String^  generalHeader::fileVersion::get() {
    return this->fileVersionField;
}
inline System::Void generalHeader::fileVersion::set(System::String^  value) {
    this->fileVersionField = value;
}

inline System::String^  generalHeader::status::get() {
    return this->statusField;
}
inline System::Void generalHeader::status::set(System::String^  value) {
    this->statusField = value;
}


inline System::String^  generalHeaderGenerationSystem::version::get() {
    return this->versionField;
}
inline System::Void generalHeaderGenerationSystem::version::set(System::String^  value) {
    this->versionField = value;
}

inline System::String^  generalHeaderGenerationSystem::Value::get() {
    return this->valueField;
}
inline System::Void generalHeaderGenerationSystem::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::Single qualityLimitsType::expected::get() {
    return this->expectedField;
}
inline System::Void qualityLimitsType::expected::set(System::Single value) {
    this->expectedField = value;
}

inline System::Single qualityLimitsType::minimum::get() {
    return this->minimumField;
}
inline System::Void qualityLimitsType::minimum::set(System::Single value) {
    this->minimumField = value;
}

inline System::Single qualityLimitsType::maximum::get() {
    return this->maximumField;
}
inline System::Void qualityLimitsType::maximum::set(System::Single value) {
    this->maximumField = value;
}


inline System::Single floatVector::x::get() {
    return this->xField;
}
inline System::Void floatVector::x::set(System::Single value) {
    this->xField = value;
}

inline System::Single floatVector::y::get() {
    return this->yField;
}
inline System::Void floatVector::y::set(System::Single value) {
    this->yField = value;
}

inline System::Single floatVector::z::get() {
    return this->zField;
}
inline System::Void floatVector::z::set(System::Single value) {
    this->zField = value;
}


inline System::Double dblVector::x::get() {
    return this->xField;
}
inline System::Void dblVector::x::set(System::Double value) {
    this->xField = value;
}

inline System::Double dblVector::y::get() {
    return this->yField;
}
inline System::Void dblVector::y::set(System::Double value) {
    this->yField = value;
}

inline System::Double dblVector::z::get() {
    return this->zField;
}
inline System::Void dblVector::z::set(System::Double value) {
    this->zField = value;
}


inline System::Single floatPolynom::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void floatPolynom::validityRangeMin::set(System::Single value) {
    this->validityRangeMinField = value;
}

inline System::Single floatPolynom::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void floatPolynom::validityRangeMax::set(System::Single value) {
    this->validityRangeMaxField = value;
}

inline System::Single floatPolynom::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void floatPolynom::referencePoint::set(System::Single value) {
    this->referencePointField = value;
}

inline System::UInt32 floatPolynom::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void floatPolynom::polynomialDegree::set(System::UInt32 value) {
    this->polynomialDegreeField = value;
}

inline cli::array< floatPolynomCoefficient^  >^  floatPolynom::coefficient::get() {
    return this->coefficientField;
}
inline System::Void floatPolynom::coefficient::set(cli::array< floatPolynomCoefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::UInt32 floatPolynomCoefficient::exponent::get() {
    return this->exponentField;
}
inline System::Void floatPolynomCoefficient::exponent::set(System::UInt32 value) {
    this->exponentField = value;
}

inline System::Boolean floatPolynomCoefficient::exponentSpecified::get() {
    return this->exponentFieldSpecified;
}
inline System::Void floatPolynomCoefficient::exponentSpecified::set(System::Boolean value) {
    this->exponentFieldSpecified = value;
}

inline System::Single floatPolynomCoefficient::Value::get() {
    return this->valueField;
}
inline System::Void floatPolynomCoefficient::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::Double dblComplex::amplitude::get() {
    return this->amplitudeField;
}
inline System::Void dblComplex::amplitude::set(System::Double value) {
    this->amplitudeField = value;
}

inline System::Double dblComplex::phase::get() {
    return this->phaseField;
}
inline System::Void dblComplex::phase::set(System::Double value) {
    this->phaseField = value;
}


inline polLayer segmentInfoType::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void segmentInfoType::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline System::String^  segmentInfoType::beamID::get() {
    return this->beamIDField;
}
inline System::Void segmentInfoType::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline segmentInfoTypeDRAoffset segmentInfoType::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void segmentInfoType::DRAoffset::set(segmentInfoTypeDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean segmentInfoType::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void segmentInfoType::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline segmentInfoTypeDataSegment^  segmentInfoType::dataSegment::get() {
    return this->dataSegmentField;
}
inline System::Void segmentInfoType::dataSegment::set(segmentInfoTypeDataSegment^  value) {
    this->dataSegmentField = value;
}

inline System::Int32 segmentInfoType::segmentID::get() {
    return this->segmentIDField;
}
inline System::Void segmentInfoType::segmentID::set(System::Int32 value) {
    this->segmentIDField = value;
}


inline System::DateTime segmentInfoTypeDataSegment::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void segmentInfoTypeDataSegment::startTimeUTC::set(System::DateTime value) {
    this->startTimeUTCField = value;
}

inline System::DateTime segmentInfoTypeDataSegment::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void segmentInfoTypeDataSegment::stopTimeUTC::set(System::DateTime value) {
    this->stopTimeUTCField = value;
}

inline System::Int32 segmentInfoTypeDataSegment::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void segmentInfoTypeDataSegment::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}


inline System::Double dblPolynom::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void dblPolynom::validityRangeMin::set(System::Double value) {
    this->validityRangeMinField = value;
}

inline System::Double dblPolynom::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void dblPolynom::validityRangeMax::set(System::Double value) {
    this->validityRangeMaxField = value;
}

inline System::Double dblPolynom::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void dblPolynom::referencePoint::set(System::Double value) {
    this->referencePointField = value;
}

inline System::UInt32 dblPolynom::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void dblPolynom::polynomialDegree::set(System::UInt32 value) {
    this->polynomialDegreeField = value;
}

inline cli::array< dblPolynomCoefficient^  >^  dblPolynom::coefficient::get() {
    return this->coefficientField;
}
inline System::Void dblPolynom::coefficient::set(cli::array< dblPolynomCoefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::UInt32 dblPolynomCoefficient::exponent::get() {
    return this->exponentField;
}
inline System::Void dblPolynomCoefficient::exponent::set(System::UInt32 value) {
    this->exponentField = value;
}

inline System::Boolean dblPolynomCoefficient::exponentSpecified::get() {
    return this->exponentFieldSpecified;
}
inline System::Void dblPolynomCoefficient::exponentSpecified::set(System::Boolean value) {
    this->exponentFieldSpecified = value;
}

inline System::Double dblPolynomCoefficient::Value::get() {
    return this->valueField;
}
inline System::Void dblPolynomCoefficient::Value::set(System::Double value) {
    this->valueField = value;
}


inline fileLocation^  file::location::get() {
    return this->locationField;
}
inline System::Void file::location::set(fileLocation^  value) {
    this->locationField = value;
}

inline System::Int64 file::size::get() {
    return this->sizeField;
}
inline System::Void file::size::set(System::Int64 value) {
    this->sizeField = value;
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


inline generalHeader^  level1Product::GeneralHeader::get() {
    return this->generalHeaderField;
}
inline System::Void level1Product::GeneralHeader::set(generalHeader^  value) {
    this->generalHeaderField = value;
}

inline level1ProductProductComponents^  level1Product::productComponents::get() {
    return this->productComponentsField;
}
inline System::Void level1Product::productComponents::set(level1ProductProductComponents^  value) {
    this->productComponentsField = value;
}

inline level1ProductProductInfo^  level1Product::productInfo::get() {
    return this->productInfoField;
}
inline System::Void level1Product::productInfo::set(level1ProductProductInfo^  value) {
    this->productInfoField = value;
}

inline level1ProductProductSpecific^  level1Product::productSpecific::get() {
    return this->productSpecificField;
}
inline System::Void level1Product::productSpecific::set(level1ProductProductSpecific^  value) {
    this->productSpecificField = value;
}

inline level1ProductSetup^  level1Product::setup::get() {
    return this->setupField;
}
inline System::Void level1Product::setup::set(level1ProductSetup^  value) {
    this->setupField = value;
}

inline level1ProductProcessing^  level1Product::processing::get() {
    return this->processingField;
}
inline System::Void level1Product::processing::set(level1ProductProcessing^  value) {
    this->processingField = value;
}

inline level1ProductInstrument^  level1Product::instrument::get() {
    return this->instrumentField;
}
inline System::Void level1Product::instrument::set(level1ProductInstrument^  value) {
    this->instrumentField = value;
}

inline level1ProductCalibration^  level1Product::calibration::get() {
    return this->calibrationField;
}
inline System::Void level1Product::calibration::set(level1ProductCalibration^  value) {
    this->calibrationField = value;
}

inline cli::array< level1ProductNoise^  >^  level1Product::noise::get() {
    return this->noiseField;
}
inline System::Void level1Product::noise::set(cli::array< level1ProductNoise^  >^  value) {
    this->noiseField = value;
}

inline level1ProductPlatform^  level1Product::platform::get() {
    return this->platformField;
}
inline System::Void level1Product::platform::set(level1ProductPlatform^  value) {
    this->platformField = value;
}

inline level1ProductProductQuality^  level1Product::productQuality::get() {
    return this->productQualityField;
}
inline System::Void level1Product::productQuality::set(level1ProductProductQuality^  value) {
    this->productQualityField = value;
}


inline cli::array< level1ProductProductComponentsAnnotation^  >^  level1ProductProductComponents::annotation::get() {
    return this->annotationField;
}
inline System::Void level1ProductProductComponents::annotation::set(cli::array< level1ProductProductComponentsAnnotation^  >^  value) {
    this->annotationField = value;
}

inline cli::array< level1ProductProductComponentsImageData^  >^  level1ProductProductComponents::imageData::get() {
    return this->imageDataField;
}
inline System::Void level1ProductProductComponents::imageData::set(cli::array< level1ProductProductComponentsImageData^  >^  value) {
    this->imageDataField = value;
}

inline cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  level1ProductProductComponents::auxRasterFiles::get() {
    return this->auxRasterFilesField;
}
inline System::Void level1ProductProductComponents::auxRasterFiles::set(cli::array< level1ProductProductComponentsAuxRasterFiles^  >^  value) {
    this->auxRasterFilesField = value;
}

inline cli::array< level1ProductProductComponentsQuicklooks^  >^  level1ProductProductComponents::quicklooks::get() {
    return this->quicklooksField;
}
inline System::Void level1ProductProductComponents::quicklooks::set(cli::array< level1ProductProductComponentsQuicklooks^  >^  value) {
    this->quicklooksField = value;
}

inline level1ProductProductComponentsCompositeQuicklook^  level1ProductProductComponents::compositeQuicklook::get() {
    return this->compositeQuicklookField;
}
inline System::Void level1ProductProductComponents::compositeQuicklook::set(level1ProductProductComponentsCompositeQuicklook^  value) {
    this->compositeQuicklookField = value;
}

inline level1ProductProductComponentsBrowseImage^  level1ProductProductComponents::browseImage::get() {
    return this->browseImageField;
}
inline System::Void level1ProductProductComponents::browseImage::set(level1ProductProductComponentsBrowseImage^  value) {
    this->browseImageField = value;
}

inline level1ProductProductComponentsMapPlot^  level1ProductProductComponents::mapPlot::get() {
    return this->mapPlotField;
}
inline System::Void level1ProductProductComponents::mapPlot::set(level1ProductProductComponentsMapPlot^  value) {
    this->mapPlotField = value;
}


inline level1ProductProductComponentsAnnotationType level1ProductProductComponentsAnnotation::type::get() {
    return this->typeField;
}
inline System::Void level1ProductProductComponentsAnnotation::type::set(level1ProductProductComponentsAnnotationType value) {
    this->typeField = value;
}

inline file^  level1ProductProductComponentsAnnotation::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsAnnotation::File::set(file^  value) {
    this->fileField = value;
}


inline polLayer level1ProductProductComponentsImageData::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductComponentsImageData::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductProductComponentsImageData::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductComponentsImageData::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductProductComponentsImageDataDRAoffset level1ProductProductComponentsImageData::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProductComponentsImageData::DRAoffset::set(level1ProductProductComponentsImageDataDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductProductComponentsImageData::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductProductComponentsImageData::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline file^  level1ProductProductComponentsImageData::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsImageData::File::set(file^  value) {
    this->fileField = value;
}

inline System::UInt32 level1ProductProductComponentsImageData::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductProductComponentsImageData::layerIndex::set(System::UInt32 value) {
    this->layerIndexField = value;
}


inline System::String^  level1ProductProductComponentsAuxRasterFiles::type::get() {
    return this->typeField;
}
inline System::Void level1ProductProductComponentsAuxRasterFiles::type::set(System::String^  value) {
    this->typeField = value;
}

inline file^  level1ProductProductComponentsAuxRasterFiles::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsAuxRasterFiles::File::set(file^  value) {
    this->fileField = value;
}


inline polLayer level1ProductProductComponentsQuicklooks::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductComponentsQuicklooks::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductProductComponentsQuicklooks::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductComponentsQuicklooks::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductProductComponentsQuicklooksDRAoffset level1ProductProductComponentsQuicklooks::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProductComponentsQuicklooks::DRAoffset::set(level1ProductProductComponentsQuicklooksDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductProductComponentsQuicklooks::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductProductComponentsQuicklooks::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline file^  level1ProductProductComponentsQuicklooks::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsQuicklooks::File::set(file^  value) {
    this->fileField = value;
}

inline System::UInt32 level1ProductProductComponentsQuicklooks::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductProductComponentsQuicklooks::layerIndex::set(System::UInt32 value) {
    this->layerIndexField = value;
}


inline file^  level1ProductProductComponentsCompositeQuicklook::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsCompositeQuicklook::File::set(file^  value) {
    this->fileField = value;
}


inline file^  level1ProductProductComponentsBrowseImage::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsBrowseImage::File::set(file^  value) {
    this->fileField = value;
}


inline file^  level1ProductProductComponentsMapPlot::File::get() {
    return this->fileField;
}
inline System::Void level1ProductProductComponentsMapPlot::File::set(file^  value) {
    this->fileField = value;
}


inline level1ProductProductInfoGenerationInfo^  level1ProductProductInfo::generationInfo::get() {
    return this->generationInfoField;
}
inline System::Void level1ProductProductInfo::generationInfo::set(level1ProductProductInfoGenerationInfo^  value) {
    this->generationInfoField = value;
}

inline level1ProductProductInfoMissionInfo^  level1ProductProductInfo::missionInfo::get() {
    return this->missionInfoField;
}
inline System::Void level1ProductProductInfo::missionInfo::set(level1ProductProductInfoMissionInfo^  value) {
    this->missionInfoField = value;
}

inline level1ProductProductInfoAcquisitionInfo^  level1ProductProductInfo::acquisitionInfo::get() {
    return this->acquisitionInfoField;
}
inline System::Void level1ProductProductInfo::acquisitionInfo::set(level1ProductProductInfoAcquisitionInfo^  value) {
    this->acquisitionInfoField = value;
}

inline level1ProductProductInfoProductVariantInfo^  level1ProductProductInfo::productVariantInfo::get() {
    return this->productVariantInfoField;
}
inline System::Void level1ProductProductInfo::productVariantInfo::set(level1ProductProductInfoProductVariantInfo^  value) {
    this->productVariantInfoField = value;
}

inline level1ProductProductInfoImageDataInfo^  level1ProductProductInfo::imageDataInfo::get() {
    return this->imageDataInfoField;
}
inline System::Void level1ProductProductInfo::imageDataInfo::set(level1ProductProductInfoImageDataInfo^  value) {
    this->imageDataInfoField = value;
}

inline level1ProductProductInfoSceneInfo^  level1ProductProductInfo::sceneInfo::get() {
    return this->sceneInfoField;
}
inline System::Void level1ProductProductInfo::sceneInfo::set(level1ProductProductInfoSceneInfo^  value) {
    this->sceneInfoField = value;
}

inline level1ProductProductInfoPreviewInfo^  level1ProductProductInfo::previewInfo::get() {
    return this->previewInfoField;
}
inline System::Void level1ProductProductInfo::previewInfo::set(level1ProductProductInfoPreviewInfo^  value) {
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

inline level1ProductProductInfoGenerationInfoGroundOperationsType level1ProductProductInfoGenerationInfo::groundOperationsType::get() {
    return this->groundOperationsTypeField;
}
inline System::Void level1ProductProductInfoGenerationInfo::groundOperationsType::set(level1ProductProductInfoGenerationInfoGroundOperationsType value) {
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

inline level1ProductProductInfoGenerationInfoQualityInfo^  level1ProductProductInfoGenerationInfo::qualityInfo::get() {
    return this->qualityInfoField;
}
inline System::Void level1ProductProductInfoGenerationInfo::qualityInfo::set(level1ProductProductInfoGenerationInfoQualityInfo^  value) {
    this->qualityInfoField = value;
}


inline level1ProductProductInfoGenerationInfoQualityInfoQualityInspection level1ProductProductInfoGenerationInfoQualityInfo::qualityInspection::get() {
    return this->qualityInspectionField;
}
inline System::Void level1ProductProductInfoGenerationInfoQualityInfo::qualityInspection::set(level1ProductProductInfoGenerationInfoQualityInfoQualityInspection value) {
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

inline System::Int32 level1ProductProductInfoMissionInfo::orbitPhase::get() {
    return this->orbitPhaseField;
}
inline System::Void level1ProductProductInfoMissionInfo::orbitPhase::set(System::Int32 value) {
    this->orbitPhaseField = value;
}

inline System::Int32 level1ProductProductInfoMissionInfo::orbitCycle::get() {
    return this->orbitCycleField;
}
inline System::Void level1ProductProductInfoMissionInfo::orbitCycle::set(System::Int32 value) {
    this->orbitCycleField = value;
}

inline System::Int32 level1ProductProductInfoMissionInfo::absOrbit::get() {
    return this->absOrbitField;
}
inline System::Void level1ProductProductInfoMissionInfo::absOrbit::set(System::Int32 value) {
    this->absOrbitField = value;
}

inline System::Int32 level1ProductProductInfoMissionInfo::relOrbit::get() {
    return this->relOrbitField;
}
inline System::Void level1ProductProductInfoMissionInfo::relOrbit::set(System::Int32 value) {
    this->relOrbitField = value;
}

inline System::Int32 level1ProductProductInfoMissionInfo::numOrbitsInCycle::get() {
    return this->numOrbitsInCycleField;
}
inline System::Void level1ProductProductInfoMissionInfo::numOrbitsInCycle::set(System::Int32 value) {
    this->numOrbitsInCycleField = value;
}

inline level1ProductProductInfoMissionInfoOrbitDirection level1ProductProductInfoMissionInfo::orbitDirection::get() {
    return this->orbitDirectionField;
}
inline System::Void level1ProductProductInfoMissionInfo::orbitDirection::set(level1ProductProductInfoMissionInfoOrbitDirection value) {
    this->orbitDirectionField = value;
}


inline System::String^  level1ProductProductInfoAcquisitionInfo::sensor::get() {
    return this->sensorField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::sensor::set(System::String^  value) {
    this->sensorField = value;
}

inline imagingMode level1ProductProductInfoAcquisitionInfo::ImagingMode::get() {
    return this->imagingModeField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::ImagingMode::set(imagingMode value) {
    this->imagingModeField = value;
}

inline lookDirection level1ProductProductInfoAcquisitionInfo::LookDirection::get() {
    return this->lookDirectionField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::LookDirection::set(lookDirection value) {
    this->lookDirectionField = value;
}

inline antennaReceiveConfiguration level1ProductProductInfoAcquisitionInfo::AntennaReceiveConfiguration::get() {
    return this->antennaReceiveConfigurationField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::AntennaReceiveConfiguration::set(antennaReceiveConfiguration value) {
    this->antennaReceiveConfigurationField = value;
}

inline polarisationMode level1ProductProductInfoAcquisitionInfo::PolarisationMode::get() {
    return this->polarisationModeField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::PolarisationMode::set(polarisationMode value) {
    this->polarisationModeField = value;
}

inline cli::array< polLayer >^  level1ProductProductInfoAcquisitionInfo::polarisationList::get() {
    return this->polarisationListField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::polarisationList::set(cli::array< polLayer >^  value) {
    this->polarisationListField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfo::elevationBeamConfiguration::get() {
    return this->elevationBeamConfigurationField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::elevationBeamConfiguration::set(System::String^  value) {
    this->elevationBeamConfigurationField = value;
}

inline level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo^  level1ProductProductInfoAcquisitionInfo::imagingModeSpecificInfo::get() {
    return this->imagingModeSpecificInfoField;
}
inline System::Void level1ProductProductInfoAcquisitionInfo::imagingModeSpecificInfo::set(level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo^  value) {
    this->imagingModeSpecificInfoField = value;
}


inline System::Object^  level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo::Item::get() {
    return this->itemField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfo::Item::set(System::Object^  value) {
    this->itemField = value;
}


inline System::Int32 level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::numberOfBeams::get() {
    return this->numberOfBeamsField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::numberOfBeams::set(System::Int32 value) {
    this->numberOfBeamsField = value;
}

inline cli::array< System::String^  >^  level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::beamList::get() {
    return this->beamListField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::beamList::set(cli::array< System::String^  >^  value) {
    this->beamListField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::azimuthBeamID::get() {
    return this->azimuthBeamIDField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::azimuthBeamID::set(System::String^  value) {
    this->azimuthBeamIDField = value;
}

inline System::Int32 level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::numberOfBursts::get() {
    return this->numberOfBurstsField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::numberOfBursts::set(System::Int32 value) {
    this->numberOfBurstsField = value;
}

inline System::Int32 level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexLast::get() {
    return this->burstIndexLastField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexLast::set(System::Int32 value) {
    this->burstIndexLastField = value;
}

inline System::Boolean level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexLastSpecified::get() {
    return this->burstIndexLastFieldSpecified;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexLastSpecified::set(System::Boolean value) {
    this->burstIndexLastFieldSpecified = value;
}

inline System::Int32 level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexFirst::get() {
    return this->burstIndexFirstField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexFirst::set(System::Int32 value) {
    this->burstIndexFirstField = value;
}

inline System::Boolean level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexFirstSpecified::get() {
    return this->burstIndexFirstFieldSpecified;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoScanSAR::burstIndexFirstSpecified::set(System::Boolean value) {
    this->burstIndexFirstFieldSpecified = value;
}


inline System::Int32 level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::numberOfAzimuthBeams::get() {
    return this->numberOfAzimuthBeamsField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::numberOfAzimuthBeams::set(System::Int32 value) {
    this->numberOfAzimuthBeamsField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthBeamIDFirst::get() {
    return this->azimuthBeamIDFirstField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthBeamIDFirst::set(System::String^  value) {
    this->azimuthBeamIDFirstField = value;
}

inline System::String^  level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthBeamIDLast::get() {
    return this->azimuthBeamIDLastField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthBeamIDLast::set(System::String^  value) {
    this->azimuthBeamIDLastField = value;
}

inline System::Single level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthSteeringAngleFirst::get() {
    return this->azimuthSteeringAngleFirstField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthSteeringAngleFirst::set(System::Single value) {
    this->azimuthSteeringAngleFirstField = value;
}

inline System::Single level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthSteeringAngleLast::get() {
    return this->azimuthSteeringAngleLastField;
}
inline System::Void level1ProductProductInfoAcquisitionInfoImagingModeSpecificInfoSpotLight::azimuthSteeringAngleLast::set(System::Single value) {
    this->azimuthSteeringAngleLastField = value;
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

inline level1ProductProductInfoProductVariantInfoProductVariant level1ProductProductInfoProductVariantInfo::productVariant::get() {
    return this->productVariantField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::productVariant::set(level1ProductProductInfoProductVariantInfoProductVariant value) {
    this->productVariantField = value;
}

inline level1ProductProductInfoProductVariantInfoProjection level1ProductProductInfoProductVariantInfo::projection::get() {
    return this->projectionField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::projection::set(level1ProductProductInfoProductVariantInfoProjection value) {
    this->projectionField = value;
}

inline level1ProductProductInfoProductVariantInfoMapProjection level1ProductProductInfoProductVariantInfo::mapProjection::get() {
    return this->mapProjectionField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::mapProjection::set(level1ProductProductInfoProductVariantInfoMapProjection value) {
    this->mapProjectionField = value;
}

inline System::Boolean level1ProductProductInfoProductVariantInfo::mapProjectionSpecified::get() {
    return this->mapProjectionFieldSpecified;
}
inline System::Void level1ProductProductInfoProductVariantInfo::mapProjectionSpecified::set(System::Boolean value) {
    this->mapProjectionFieldSpecified = value;
}

inline level1ProductProductInfoProductVariantInfoResolutionVariant level1ProductProductInfoProductVariantInfo::resolutionVariant::get() {
    return this->resolutionVariantField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::resolutionVariant::set(level1ProductProductInfoProductVariantInfoResolutionVariant value) {
    this->resolutionVariantField = value;
}

inline level1ProductProductInfoProductVariantInfoRadiometricCorrection level1ProductProductInfoProductVariantInfo::radiometricCorrection::get() {
    return this->radiometricCorrectionField;
}
inline System::Void level1ProductProductInfoProductVariantInfo::radiometricCorrection::set(level1ProductProductInfoProductVariantInfoRadiometricCorrection value) {
    this->radiometricCorrectionField = value;
}


inline System::String^  level1ProductProductInfoImageDataInfo::pixelValueID::get() {
    return this->pixelValueIDField;
}
inline System::Void level1ProductProductInfoImageDataInfo::pixelValueID::set(System::String^  value) {
    this->pixelValueIDField = value;
}

inline level1ProductProductInfoImageDataInfoImageDataType level1ProductProductInfoImageDataInfo::imageDataType::get() {
    return this->imageDataTypeField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageDataType::set(level1ProductProductInfoImageDataInfoImageDataType value) {
    this->imageDataTypeField = value;
}

inline level1ProductProductInfoImageDataInfoImageDataFormat level1ProductProductInfoImageDataInfo::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageDataFormat::set(level1ProductProductInfoImageDataInfoImageDataFormat value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductInfoImageDataInfo::numberOfLayers::get() {
    return this->numberOfLayersField;
}
inline System::Void level1ProductProductInfoImageDataInfo::numberOfLayers::set(System::Int32 value) {
    this->numberOfLayersField = value;
}

inline System::Int32 level1ProductProductInfoImageDataInfo::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}

inline level1ProductProductInfoImageDataInfoImageStorageOrder level1ProductProductInfoImageDataInfo::imageStorageOrder::get() {
    return this->imageStorageOrderField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageStorageOrder::set(level1ProductProductInfoImageDataInfoImageStorageOrder value) {
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

inline cli::array< level1ProductProductInfoImageDataInfoImageRaster^  >^  level1ProductProductInfoImageDataInfo::imageRaster::get() {
    return this->imageRasterField;
}
inline System::Void level1ProductProductInfoImageDataInfo::imageRaster::set(cli::array< level1ProductProductInfoImageDataInfoImageRaster^  >^  value) {
    this->imageRasterField = value;
}


inline System::Int32 level1ProductProductInfoImageDataInfoImageRaster::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}

inline System::Int32 level1ProductProductInfoImageDataInfoImageRaster::numberOfColumns::get() {
    return this->numberOfColumnsField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::numberOfColumns::set(System::Int32 value) {
    this->numberOfColumnsField = value;
}

inline level1ProductProductInfoImageDataInfoImageRasterRowSpacing^  level1ProductProductInfoImageDataInfoImageRaster::rowSpacing::get() {
    return this->rowSpacingField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::rowSpacing::set(level1ProductProductInfoImageDataInfoImageRasterRowSpacing^  value) {
    this->rowSpacingField = value;
}

inline level1ProductProductInfoImageDataInfoImageRasterColumnSpacing^  level1ProductProductInfoImageDataInfoImageRaster::columnSpacing::get() {
    return this->columnSpacingField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::columnSpacing::set(level1ProductProductInfoImageDataInfoImageRasterColumnSpacing^  value) {
    this->columnSpacingField = value;
}

inline System::Double level1ProductProductInfoImageDataInfoImageRaster::groundRangeResolution::get() {
    return this->groundRangeResolutionField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::groundRangeResolution::set(System::Double value) {
    this->groundRangeResolutionField = value;
}

inline System::Double level1ProductProductInfoImageDataInfoImageRaster::azimuthResolution::get() {
    return this->azimuthResolutionField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::azimuthResolution::set(System::Double value) {
    this->azimuthResolutionField = value;
}

inline System::Single level1ProductProductInfoImageDataInfoImageRaster::azimuthLooks::get() {
    return this->azimuthLooksField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::azimuthLooks::set(System::Single value) {
    this->azimuthLooksField = value;
}

inline System::Single level1ProductProductInfoImageDataInfoImageRaster::rangeLooks::get() {
    return this->rangeLooksField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::rangeLooks::set(System::Single value) {
    this->rangeLooksField = value;
}

inline System::String^  level1ProductProductInfoImageDataInfoImageRaster::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRaster::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline level1ProductProductInfoImageDataInfoImageRasterRowSpacingUnits level1ProductProductInfoImageDataInfoImageRasterRowSpacing::units::get() {
    return this->unitsField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRasterRowSpacing::units::set(level1ProductProductInfoImageDataInfoImageRasterRowSpacingUnits value) {
    this->unitsField = value;
}

inline System::Boolean level1ProductProductInfoImageDataInfoImageRasterRowSpacing::unitsSpecified::get() {
    return this->unitsFieldSpecified;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRasterRowSpacing::unitsSpecified::set(System::Boolean value) {
    this->unitsFieldSpecified = value;
}

inline System::Single level1ProductProductInfoImageDataInfoImageRasterRowSpacing::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRasterRowSpacing::Value::set(System::Single value) {
    this->valueField = value;
}


inline level1ProductProductInfoImageDataInfoImageRasterColumnSpacingUnits level1ProductProductInfoImageDataInfoImageRasterColumnSpacing::units::get() {
    return this->unitsField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRasterColumnSpacing::units::set(level1ProductProductInfoImageDataInfoImageRasterColumnSpacingUnits value) {
    this->unitsField = value;
}

inline System::Boolean level1ProductProductInfoImageDataInfoImageRasterColumnSpacing::unitsSpecified::get() {
    return this->unitsFieldSpecified;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRasterColumnSpacing::unitsSpecified::set(System::Boolean value) {
    this->unitsFieldSpecified = value;
}

inline System::Single level1ProductProductInfoImageDataInfoImageRasterColumnSpacing::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProductInfoImageDataInfoImageRasterColumnSpacing::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::String^  level1ProductProductInfoSceneInfo::sceneID::get() {
    return this->sceneIDField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneID::set(System::String^  value) {
    this->sceneIDField = value;
}

inline level1ProductProductInfoSceneInfoStart^  level1ProductProductInfoSceneInfo::start::get() {
    return this->startField;
}
inline System::Void level1ProductProductInfoSceneInfo::start::set(level1ProductProductInfoSceneInfoStart^  value) {
    this->startField = value;
}

inline level1ProductProductInfoSceneInfoStop^  level1ProductProductInfoSceneInfo::stop::get() {
    return this->stopField;
}
inline System::Void level1ProductProductInfoSceneInfo::stop::set(level1ProductProductInfoSceneInfoStop^  value) {
    this->stopField = value;
}

inline level1ProductProductInfoSceneInfoRangeTime^  level1ProductProductInfoSceneInfo::rangeTime::get() {
    return this->rangeTimeField;
}
inline System::Void level1ProductProductInfoSceneInfo::rangeTime::set(level1ProductProductInfoSceneInfoRangeTime^  value) {
    this->rangeTimeField = value;
}

inline System::Double level1ProductProductInfoSceneInfo::sceneAzimuthExtent::get() {
    return this->sceneAzimuthExtentField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneAzimuthExtent::set(System::Double value) {
    this->sceneAzimuthExtentField = value;
}

inline System::Double level1ProductProductInfoSceneInfo::sceneRangeExtent::get() {
    return this->sceneRangeExtentField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneRangeExtent::set(System::Double value) {
    this->sceneRangeExtentField = value;
}

inline System::Boolean level1ProductProductInfoSceneInfo::sceneRangeExtentSpecified::get() {
    return this->sceneRangeExtentFieldSpecified;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneRangeExtentSpecified::set(System::Boolean value) {
    this->sceneRangeExtentFieldSpecified = value;
}

inline level1ProductProductInfoSceneInfoSceneCenterCoord^  level1ProductProductInfoSceneInfo::sceneCenterCoord::get() {
    return this->sceneCenterCoordField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneCenterCoord::set(level1ProductProductInfoSceneInfoSceneCenterCoord^  value) {
    this->sceneCenterCoordField = value;
}

inline System::Double level1ProductProductInfoSceneInfo::sceneAverageHeight::get() {
    return this->sceneAverageHeightField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneAverageHeight::set(System::Double value) {
    this->sceneAverageHeightField = value;
}

inline cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  level1ProductProductInfoSceneInfo::sceneCornerCoord::get() {
    return this->sceneCornerCoordField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneCornerCoord::set(cli::array< level1ProductProductInfoSceneInfoSceneCornerCoord^  >^  value) {
    this->sceneCornerCoordField = value;
}

inline level1ProductProductInfoSceneInfoSceneLocalisationAccuracy^  level1ProductProductInfoSceneInfo::sceneLocalisationAccuracy::get() {
    return this->sceneLocalisationAccuracyField;
}
inline System::Void level1ProductProductInfoSceneInfo::sceneLocalisationAccuracy::set(level1ProductProductInfoSceneInfoSceneLocalisationAccuracy^  value) {
    this->sceneLocalisationAccuracyField = value;
}

inline System::Single level1ProductProductInfoSceneInfo::headingAngle::get() {
    return this->headingAngleField;
}
inline System::Void level1ProductProductInfoSceneInfo::headingAngle::set(System::Single value) {
    this->headingAngleField = value;
}


inline System::DateTime level1ProductProductInfoSceneInfoStart::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoStart::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline System::Int64 level1ProductProductInfoSceneInfoStart::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductProductInfoSceneInfoStart::timeGPS::set(System::Int64 value) {
    this->timeGPSField = value;
}

inline System::Single level1ProductProductInfoSceneInfoStart::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductProductInfoSceneInfoStart::timeGPSFraction::set(System::Single value) {
    this->timeGPSFractionField = value;
}


inline System::DateTime level1ProductProductInfoSceneInfoStop::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoStop::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline System::Int64 level1ProductProductInfoSceneInfoStop::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductProductInfoSceneInfoStop::timeGPS::set(System::Int64 value) {
    this->timeGPSField = value;
}

inline System::Single level1ProductProductInfoSceneInfoStop::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductProductInfoSceneInfoStop::timeGPSFraction::set(System::Single value) {
    this->timeGPSFractionField = value;
}


inline System::Double level1ProductProductInfoSceneInfoRangeTime::firstPixel::get() {
    return this->firstPixelField;
}
inline System::Void level1ProductProductInfoSceneInfoRangeTime::firstPixel::set(System::Double value) {
    this->firstPixelField = value;
}

inline System::Double level1ProductProductInfoSceneInfoRangeTime::lastPixel::get() {
    return this->lastPixelField;
}
inline System::Void level1ProductProductInfoSceneInfoRangeTime::lastPixel::set(System::Double value) {
    this->lastPixelField = value;
}


inline System::Int32 level1ProductProductInfoSceneInfoSceneCenterCoord::refRow::get() {
    return this->refRowField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::refRow::set(System::Int32 value) {
    this->refRowField = value;
}

inline System::Boolean level1ProductProductInfoSceneInfoSceneCenterCoord::refRowSpecified::get() {
    return this->refRowFieldSpecified;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::refRowSpecified::set(System::Boolean value) {
    this->refRowFieldSpecified = value;
}

inline System::Int32 level1ProductProductInfoSceneInfoSceneCenterCoord::refColumn::get() {
    return this->refColumnField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::refColumn::set(System::Int32 value) {
    this->refColumnField = value;
}

inline System::Boolean level1ProductProductInfoSceneInfoSceneCenterCoord::refColumnSpecified::get() {
    return this->refColumnFieldSpecified;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::refColumnSpecified::set(System::Boolean value) {
    this->refColumnFieldSpecified = value;
}

inline System::Single level1ProductProductInfoSceneInfoSceneCenterCoord::lat::get() {
    return this->latField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::lat::set(System::Single value) {
    this->latField = value;
}

inline System::Single level1ProductProductInfoSceneInfoSceneCenterCoord::lon::get() {
    return this->lonField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::lon::set(System::Single value) {
    this->lonField = value;
}

inline System::DateTime level1ProductProductInfoSceneInfoSceneCenterCoord::azimuthTimeUTC::get() {
    return this->azimuthTimeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::azimuthTimeUTC::set(System::DateTime value) {
    this->azimuthTimeUTCField = value;
}

inline System::Double level1ProductProductInfoSceneInfoSceneCenterCoord::rangeTime::get() {
    return this->rangeTimeField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::rangeTime::set(System::Double value) {
    this->rangeTimeField = value;
}

inline System::Double level1ProductProductInfoSceneInfoSceneCenterCoord::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCenterCoord::incidenceAngle::set(System::Double value) {
    this->incidenceAngleField = value;
}


inline System::Int32 level1ProductProductInfoSceneInfoSceneCornerCoord::refRow::get() {
    return this->refRowField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::refRow::set(System::Int32 value) {
    this->refRowField = value;
}

inline System::Boolean level1ProductProductInfoSceneInfoSceneCornerCoord::refRowSpecified::get() {
    return this->refRowFieldSpecified;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::refRowSpecified::set(System::Boolean value) {
    this->refRowFieldSpecified = value;
}

inline System::Int32 level1ProductProductInfoSceneInfoSceneCornerCoord::refColumn::get() {
    return this->refColumnField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::refColumn::set(System::Int32 value) {
    this->refColumnField = value;
}

inline System::Boolean level1ProductProductInfoSceneInfoSceneCornerCoord::refColumnSpecified::get() {
    return this->refColumnFieldSpecified;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::refColumnSpecified::set(System::Boolean value) {
    this->refColumnFieldSpecified = value;
}

inline System::Single level1ProductProductInfoSceneInfoSceneCornerCoord::lat::get() {
    return this->latField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::lat::set(System::Single value) {
    this->latField = value;
}

inline System::Single level1ProductProductInfoSceneInfoSceneCornerCoord::lon::get() {
    return this->lonField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::lon::set(System::Single value) {
    this->lonField = value;
}

inline System::DateTime level1ProductProductInfoSceneInfoSceneCornerCoord::azimuthTimeUTC::get() {
    return this->azimuthTimeUTCField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::azimuthTimeUTC::set(System::DateTime value) {
    this->azimuthTimeUTCField = value;
}

inline System::Double level1ProductProductInfoSceneInfoSceneCornerCoord::rangeTime::get() {
    return this->rangeTimeField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::rangeTime::set(System::Double value) {
    this->rangeTimeField = value;
}

inline System::Double level1ProductProductInfoSceneInfoSceneCornerCoord::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneCornerCoord::incidenceAngle::set(System::Double value) {
    this->incidenceAngleField = value;
}


inline System::String^  level1ProductProductInfoSceneInfoSceneLocalisationAccuracy::referenceProjection::get() {
    return this->referenceProjectionField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneLocalisationAccuracy::referenceProjection::set(System::String^  value) {
    this->referenceProjectionField = value;
}

inline System::Single level1ProductProductInfoSceneInfoSceneLocalisationAccuracy::latError::get() {
    return this->latErrorField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneLocalisationAccuracy::latError::set(System::Single value) {
    this->latErrorField = value;
}

inline System::Single level1ProductProductInfoSceneInfoSceneLocalisationAccuracy::lonError::get() {
    return this->lonErrorField;
}
inline System::Void level1ProductProductInfoSceneInfoSceneLocalisationAccuracy::lonError::set(System::Single value) {
    this->lonErrorField = value;
}


inline level1ProductProductInfoPreviewInfoQuicklooks^  level1ProductProductInfoPreviewInfo::quicklooks::get() {
    return this->quicklooksField;
}
inline System::Void level1ProductProductInfoPreviewInfo::quicklooks::set(level1ProductProductInfoPreviewInfoQuicklooks^  value) {
    this->quicklooksField = value;
}

inline level1ProductProductInfoPreviewInfoCompositeQuicklook^  level1ProductProductInfoPreviewInfo::compositeQuicklook::get() {
    return this->compositeQuicklookField;
}
inline System::Void level1ProductProductInfoPreviewInfo::compositeQuicklook::set(level1ProductProductInfoPreviewInfoCompositeQuicklook^  value) {
    this->compositeQuicklookField = value;
}

inline level1ProductProductInfoPreviewInfoBrowseImage^  level1ProductProductInfoPreviewInfo::browseImage::get() {
    return this->browseImageField;
}
inline System::Void level1ProductProductInfoPreviewInfo::browseImage::set(level1ProductProductInfoPreviewInfoBrowseImage^  value) {
    this->browseImageField = value;
}

inline System::String^  level1ProductProductInfoPreviewInfo::mapPlotFormat::get() {
    return this->mapPlotFormatField;
}
inline System::Void level1ProductProductInfoPreviewInfo::mapPlotFormat::set(System::String^  value) {
    this->mapPlotFormatField = value;
}


inline System::String^  level1ProductProductInfoPreviewInfoQuicklooks::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooks::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductInfoPreviewInfoQuicklooks::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooks::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}

inline cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling^  >^  level1ProductProductInfoPreviewInfoQuicklooks::imageDataScaling::get() {
    return this->imageDataScalingField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooks::imageDataScaling::set(cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling^  >^  value) {
    this->imageDataScalingField = value;
}

inline cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageRaster^  >^  level1ProductProductInfoPreviewInfoQuicklooks::imageRaster::get() {
    return this->imageRasterField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooks::imageRaster::set(cli::array< level1ProductProductInfoPreviewInfoQuicklooksImageRaster^  >^  value) {
    this->imageRasterField = value;
}


inline polLayer level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline System::Boolean level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::polLayerSpecified::get() {
    return this->polLayerFieldSpecified;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::polLayerSpecified::set(System::Boolean value) {
    this->polLayerFieldSpecified = value;
}

inline System::String^  level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductProductInfoPreviewInfoQuicklooksImageDataScalingDRAoffset level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::DRAoffset::set(level1ProductProductInfoPreviewInfoQuicklooksImageDataScalingDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline System::Double level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::gamma::get() {
    return this->gammaField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::gamma::set(System::Double value) {
    this->gammaField = value;
}

inline System::Double level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::scalingFactor::get() {
    return this->scalingFactorField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::scalingFactor::set(System::Double value) {
    this->scalingFactorField = value;
}

inline System::Double level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::clipUpper::get() {
    return this->clipUpperField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::clipUpper::set(System::Double value) {
    this->clipUpperField = value;
}

inline System::Double level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::clipLower::get() {
    return this->clipLowerField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageDataScaling::clipLower::set(System::Double value) {
    this->clipLowerField = value;
}


inline System::Int32 level1ProductProductInfoPreviewInfoQuicklooksImageRaster::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}

inline System::Int32 level1ProductProductInfoPreviewInfoQuicklooksImageRaster::numberOfColumns::get() {
    return this->numberOfColumnsField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::numberOfColumns::set(System::Int32 value) {
    this->numberOfColumnsField = value;
}

inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRaster::columnBlockLength::get() {
    return this->columnBlockLengthField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::columnBlockLength::set(System::Single value) {
    this->columnBlockLengthField = value;
}

inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRaster::rowBlockLength::get() {
    return this->rowBlockLengthField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::rowBlockLength::set(System::Single value) {
    this->rowBlockLengthField = value;
}

inline level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing^  level1ProductProductInfoPreviewInfoQuicklooksImageRaster::rowSpacing::get() {
    return this->rowSpacingField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::rowSpacing::set(level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing^  value) {
    this->rowSpacingField = value;
}

inline level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing^  level1ProductProductInfoPreviewInfoQuicklooksImageRaster::columnSpacing::get() {
    return this->columnSpacingField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::columnSpacing::set(level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing^  value) {
    this->columnSpacingField = value;
}

inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRaster::projectedSpacingAzimuth::get() {
    return this->projectedSpacingAzimuthField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::projectedSpacingAzimuth::set(System::Single value) {
    this->projectedSpacingAzimuthField = value;
}

inline System::Boolean level1ProductProductInfoPreviewInfoQuicklooksImageRaster::projectedSpacingAzimuthSpecified::get() {
    return this->projectedSpacingAzimuthFieldSpecified;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::projectedSpacingAzimuthSpecified::set(System::Boolean value) {
    this->projectedSpacingAzimuthFieldSpecified = value;
}

inline level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange^  level1ProductProductInfoPreviewInfoQuicklooksImageRaster::projectedSpacingRange::get() {
    return this->projectedSpacingRangeField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::projectedSpacingRange::set(level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange^  value) {
    this->projectedSpacingRangeField = value;
}

inline System::String^  level1ProductProductInfoPreviewInfoQuicklooksImageRaster::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRaster::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline System::String^  level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing::units::get() {
    return this->unitsField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing::units::set(System::String^  value) {
    this->unitsField = value;
}

inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRasterRowSpacing::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::String^  level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing::units::get() {
    return this->unitsField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing::units::set(System::String^  value) {
    this->unitsField = value;
}

inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRasterColumnSpacing::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange::groundNear::get() {
    return this->groundNearField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange::groundNear::set(System::Single value) {
    this->groundNearField = value;
}

inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange::groundFar::get() {
    return this->groundFarField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange::groundFar::set(System::Single value) {
    this->groundFarField = value;
}

inline System::Single level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange::slantRange::get() {
    return this->slantRangeField;
}
inline System::Void level1ProductProductInfoPreviewInfoQuicklooksImageRasterProjectedSpacingRange::slantRange::set(System::Single value) {
    this->slantRangeField = value;
}


inline System::String^  level1ProductProductInfoPreviewInfoCompositeQuicklook::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductInfoPreviewInfoCompositeQuicklook::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductInfoPreviewInfoCompositeQuicklook::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductInfoPreviewInfoCompositeQuicklook::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}

inline cli::array< level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode^  >^  level1ProductProductInfoPreviewInfoCompositeQuicklook::polLayerCode::get() {
    return this->polLayerCodeField;
}
inline System::Void level1ProductProductInfoPreviewInfoCompositeQuicklook::polLayerCode::set(cli::array< level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode^  >^  value) {
    this->polLayerCodeField = value;
}


inline System::String^  level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode::polarisation::get() {
    return this->polarisationField;
}
inline System::Void level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode::polarisation::set(System::String^  value) {
    this->polarisationField = value;
}

inline System::String^  level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode::colour::get() {
    return this->colourField;
}
inline System::Void level1ProductProductInfoPreviewInfoCompositeQuicklookPolLayerCode::colour::set(System::String^  value) {
    this->colourField = value;
}


inline System::String^  level1ProductProductInfoPreviewInfoBrowseImage::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductInfoPreviewInfoBrowseImage::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductInfoPreviewInfoBrowseImage::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductInfoPreviewInfoBrowseImage::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}


inline cli::array< level1ProductProductSpecificComplexImageInfo^  >^  level1ProductProductSpecific::complexImageInfo::get() {
    return this->complexImageInfoField;
}
inline System::Void level1ProductProductSpecific::complexImageInfo::set(cli::array< level1ProductProductSpecificComplexImageInfo^  >^  value) {
    this->complexImageInfoField = value;
}

inline level1ProductProductSpecificProjectedImageInfo^  level1ProductProductSpecific::projectedImageInfo::get() {
    return this->projectedImageInfoField;
}
inline System::Void level1ProductProductSpecific::projectedImageInfo::set(level1ProductProductSpecificProjectedImageInfo^  value) {
    this->projectedImageInfoField = value;
}

inline level1ProductProductSpecificGeocodedImageInfo^  level1ProductProductSpecific::geocodedImageInfo::get() {
    return this->geocodedImageInfoField;
}
inline System::Void level1ProductProductSpecific::geocodedImageInfo::set(level1ProductProductSpecificGeocodedImageInfo^  value) {
    this->geocodedImageInfoField = value;
}


inline System::Double level1ProductProductSpecificComplexImageInfo::commonPRF::get() {
    return this->commonPRFField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::commonPRF::set(System::Double value) {
    this->commonPRFField = value;
}

inline System::Double level1ProductProductSpecificComplexImageInfo::commonRSF::get() {
    return this->commonRSFField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::commonRSF::set(System::Double value) {
    this->commonRSFField = value;
}

inline System::Double level1ProductProductSpecificComplexImageInfo::slantRangeResolution::get() {
    return this->slantRangeResolutionField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::slantRangeResolution::set(System::Double value) {
    this->slantRangeResolutionField = value;
}

inline System::Single level1ProductProductSpecificComplexImageInfo::projectedSpacingAzimuth::get() {
    return this->projectedSpacingAzimuthField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::projectedSpacingAzimuth::set(System::Single value) {
    this->projectedSpacingAzimuthField = value;
}

inline level1ProductProductSpecificComplexImageInfoProjectedSpacingRange^  level1ProductProductSpecificComplexImageInfo::projectedSpacingRange::get() {
    return this->projectedSpacingRangeField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::projectedSpacingRange::set(level1ProductProductSpecificComplexImageInfoProjectedSpacingRange^  value) {
    this->projectedSpacingRangeField = value;
}

inline level1ProductProductSpecificComplexImageInfoImageCoordinateType level1ProductProductSpecificComplexImageInfo::imageCoordinateType::get() {
    return this->imageCoordinateTypeField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::imageCoordinateType::set(level1ProductProductSpecificComplexImageInfoImageCoordinateType value) {
    this->imageCoordinateTypeField = value;
}

inline level1ProductProductSpecificComplexImageInfoImageDataStartWith level1ProductProductSpecificComplexImageInfo::imageDataStartWith::get() {
    return this->imageDataStartWithField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::imageDataStartWith::set(level1ProductProductSpecificComplexImageInfoImageDataStartWith value) {
    this->imageDataStartWithField = value;
}

inline level1ProductProductSpecificComplexImageInfoQuicklookDataStartWith level1ProductProductSpecificComplexImageInfo::quicklookDataStartWith::get() {
    return this->quicklookDataStartWithField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::quicklookDataStartWith::set(level1ProductProductSpecificComplexImageInfoQuicklookDataStartWith value) {
    this->quicklookDataStartWithField = value;
}

inline System::String^  level1ProductProductSpecificComplexImageInfo::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductSpecificComplexImageInfo::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline System::Single level1ProductProductSpecificComplexImageInfoProjectedSpacingRange::groundNear::get() {
    return this->groundNearField;
}
inline System::Void level1ProductProductSpecificComplexImageInfoProjectedSpacingRange::groundNear::set(System::Single value) {
    this->groundNearField = value;
}

inline System::Single level1ProductProductSpecificComplexImageInfoProjectedSpacingRange::groundFar::get() {
    return this->groundFarField;
}
inline System::Void level1ProductProductSpecificComplexImageInfoProjectedSpacingRange::groundFar::set(System::Single value) {
    this->groundFarField = value;
}

inline System::Single level1ProductProductSpecificComplexImageInfoProjectedSpacingRange::slantRange::get() {
    return this->slantRangeField;
}
inline System::Void level1ProductProductSpecificComplexImageInfoProjectedSpacingRange::slantRange::set(System::Single value) {
    this->slantRangeField = value;
}


inline dblPolynom^  level1ProductProductSpecificProjectedImageInfo::slantToGroundRangeProjection::get() {
    return this->slantToGroundRangeProjectionField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfo::slantToGroundRangeProjection::set(dblPolynom^  value) {
    this->slantToGroundRangeProjectionField = value;
}

inline level1ProductProductSpecificProjectedImageInfoMappingGridInfo^  level1ProductProductSpecificProjectedImageInfo::mappingGridInfo::get() {
    return this->mappingGridInfoField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfo::mappingGridInfo::set(level1ProductProductSpecificProjectedImageInfoMappingGridInfo^  value) {
    this->mappingGridInfoField = value;
}


inline System::String^  level1ProductProductSpecificProjectedImageInfoMappingGridInfo::pixelValueID::get() {
    return this->pixelValueIDField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfo::pixelValueID::set(System::String^  value) {
    this->pixelValueIDField = value;
}

inline System::String^  level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}

inline level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageStorageOrder level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageStorageOrder::get() {
    return this->imageStorageOrderField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageStorageOrder::set(level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageStorageOrder value) {
    this->imageStorageOrderField = value;
}

inline level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime^  level1ProductProductSpecificProjectedImageInfoMappingGridInfo::gridReferenceTime::get() {
    return this->gridReferenceTimeField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfo::gridReferenceTime::set(level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime^  value) {
    this->gridReferenceTimeField = value;
}

inline level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster^  level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageRaster::get() {
    return this->imageRasterField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfo::imageRaster::set(level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster^  value) {
    this->imageRasterField = value;
}


inline System::DateTime level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::tReferenceTimeUTC::get() {
    return this->tReferenceTimeUTCField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::tReferenceTimeUTC::set(System::DateTime value) {
    this->tReferenceTimeUTCField = value;
}

inline System::Double level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::tauReferenceTime::get() {
    return this->tauReferenceTimeField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::tauReferenceTime::set(System::Double value) {
    this->tauReferenceTimeField = value;
}

inline System::Int64 level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::refRow::get() {
    return this->refRowField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::refRow::set(System::Int64 value) {
    this->refRowField = value;
}

inline System::Int64 level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::refCol::get() {
    return this->refColField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoGridReferenceTime::refCol::set(System::Int64 value) {
    this->refColField = value;
}


inline System::Int32 level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}

inline System::Int32 level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::numberOfColumns::get() {
    return this->numberOfColumnsField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::numberOfColumns::set(System::Int32 value) {
    this->numberOfColumnsField = value;
}

inline System::Single level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::rowSpacing::get() {
    return this->rowSpacingField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::rowSpacing::set(System::Single value) {
    this->rowSpacingField = value;
}

inline System::Single level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::columnSpacing::get() {
    return this->columnSpacingField;
}
inline System::Void level1ProductProductSpecificProjectedImageInfoMappingGridInfoImageRaster::columnSpacing::set(System::Single value) {
    this->columnSpacingField = value;
}


inline level1ProductProductSpecificGeocodedImageInfoGeocodingSetup^  level1ProductProductSpecificGeocodedImageInfo::geocodingSetup::get() {
    return this->geocodingSetupField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfo::geocodingSetup::set(level1ProductProductSpecificGeocodedImageInfoGeocodingSetup^  value) {
    this->geocodingSetupField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoMapProjection^  level1ProductProductSpecificGeocodedImageInfo::mapProjection::get() {
    return this->mapProjectionField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfo::mapProjection::set(level1ProductProductSpecificGeocodedImageInfoMapProjection^  value) {
    this->mapProjectionField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoGeoParameter^  level1ProductProductSpecificGeocodedImageInfo::geoParameter::get() {
    return this->geoParameterField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfo::geoParameter::set(level1ProductProductSpecificGeocodedImageInfoGeoParameter^  value) {
    this->geoParameterField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoElevationData^  level1ProductProductSpecificGeocodedImageInfo::elevationData::get() {
    return this->elevationDataField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfo::elevationData::set(level1ProductProductSpecificGeocodedImageInfoElevationData^  value) {
    this->elevationDataField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoMappingGridInfo^  level1ProductProductSpecificGeocodedImageInfo::mappingGridInfo::get() {
    return this->mappingGridInfoField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfo::mappingGridInfo::set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfo^  value) {
    this->mappingGridInfoField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription^  level1ProductProductSpecificGeocodedImageInfo::incidenceAngleMaskDescription::get() {
    return this->incidenceAngleMaskDescriptionField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfo::incidenceAngleMaskDescription::set(level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription^  value) {
    this->incidenceAngleMaskDescriptionField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription^  level1ProductProductSpecificGeocodedImageInfo::DEMCoverageMapDescription::get() {
    return this->dEMCoverageMapDescriptionField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfo::DEMCoverageMapDescription::set(level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription^  value) {
    this->dEMCoverageMapDescriptionField = value;
}


inline System::String^  level1ProductProductSpecificGeocodedImageInfoGeocodingSetup::geocodingFacility::get() {
    return this->geocodingFacilityField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeocodingSetup::geocodingFacility::set(System::String^  value) {
    this->geocodingFacilityField = value;
}

inline System::String^  level1ProductProductSpecificGeocodedImageInfoGeocodingSetup::softwareVersion::get() {
    return this->softwareVersionField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeocodingSetup::softwareVersion::set(System::String^  value) {
    this->softwareVersionField = value;
}

inline System::Boolean level1ProductProductSpecificGeocodedImageInfoGeocodingSetup::generationFlagGIM::get() {
    return this->generationFlagGIMField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeocodingSetup::generationFlagGIM::set(System::Boolean value) {
    this->generationFlagGIMField = value;
}


inline System::String^  level1ProductProductSpecificGeocodedImageInfoMapProjection::geodeticDatumID::get() {
    return this->geodeticDatumIDField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjection::geodeticDatumID::set(System::String^  value) {
    this->geodeticDatumIDField = value;
}

inline System::String^  level1ProductProductSpecificGeocodedImageInfoMapProjection::projectionID::get() {
    return this->projectionIDField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjection::projectionID::set(System::String^  value) {
    this->projectionIDField = value;
}

inline System::String^  level1ProductProductSpecificGeocodedImageInfoMapProjection::zoneID::get() {
    return this->zoneIDField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjection::zoneID::set(System::String^  value) {
    this->zoneIDField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter^  level1ProductProductSpecificGeocodedImageInfoMapProjection::projectionCenter::get() {
    return this->projectionCenterField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjection::projectionCenter::set(level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter^  value) {
    this->projectionCenterField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin^  level1ProductProductSpecificGeocodedImageInfoMapProjection::mapOrigin::get() {
    return this->mapOriginField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjection::mapOrigin::set(level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin^  value) {
    this->mapOriginField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoMapProjection::scaleFactor::get() {
    return this->scaleFactorField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjection::scaleFactor::set(System::Single value) {
    this->scaleFactorField = value;
}


inline System::Single level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter::longitude::get() {
    return this->longitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter::longitude::set(System::Single value) {
    this->longitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter::latitude::get() {
    return this->latitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjectionProjectionCenter::latitude::set(System::Single value) {
    this->latitudeField = value;
}


inline System::Single level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin::easting::get() {
    return this->eastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin::easting::set(System::Single value) {
    this->eastingField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin::northing::get() {
    return this->northingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMapProjectionMapOrigin::northing::set(System::Single value) {
    this->northingField = value;
}


inline level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::pixelSpacing::get() {
    return this->pixelSpacingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::pixelSpacing::set(level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing^  value) {
    this->pixelSpacingField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::frameCoordsGeographic::get() {
    return this->frameCoordsGeographicField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::frameCoordsGeographic::set(level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic^  value) {
    this->frameCoordsGeographicField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::frameCoordsCartographic::get() {
    return this->frameCoordsCartographicField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::frameCoordsCartographic::set(level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic^  value) {
    this->frameCoordsCartographicField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCoordsGeographic::get() {
    return this->sceneCoordsGeographicField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCoordsGeographic::set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic^  value) {
    this->sceneCoordsGeographicField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCoordsCartographic::get() {
    return this->sceneCoordsCartographicField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCoordsCartographic::set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic^  value) {
    this->sceneCoordsCartographicField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCenterCoordsGeographic::get() {
    return this->sceneCenterCoordsGeographicField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCenterCoordsGeographic::set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic^  value) {
    this->sceneCenterCoordsGeographicField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCenterCoordsCartographic::get() {
    return this->sceneCenterCoordsCartographicField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::sceneCenterCoordsCartographic::set(level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic^  value) {
    this->sceneCenterCoordsCartographicField = value;
}

inline System::String^  level1ProductProductSpecificGeocodedImageInfoGeoParameter::imageResamplingMethod::get() {
    return this->imageResamplingMethodField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameter::imageResamplingMethod::set(System::String^  value) {
    this->imageResamplingMethodField = value;
}


inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing::easting::get() {
    return this->eastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing::easting::set(System::Single value) {
    this->eastingField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing::northing::get() {
    return this->northingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterPixelSpacing::northing::set(System::Single value) {
    this->northingField = value;
}


inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperLeftLongitude::get() {
    return this->upperLeftLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperLeftLongitude::set(System::Single value) {
    this->upperLeftLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperLeftLatitude::get() {
    return this->upperLeftLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperLeftLatitude::set(System::Single value) {
    this->upperLeftLatitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperRightLongitude::get() {
    return this->upperRightLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperRightLongitude::set(System::Single value) {
    this->upperRightLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperRightLatitude::get() {
    return this->upperRightLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::upperRightLatitude::set(System::Single value) {
    this->upperRightLatitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerRightLongitude::get() {
    return this->lowerRightLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerRightLongitude::set(System::Single value) {
    this->lowerRightLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerRightLatitude::get() {
    return this->lowerRightLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerRightLatitude::set(System::Single value) {
    this->lowerRightLatitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerLeftLongitude::get() {
    return this->lowerLeftLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerLeftLongitude::set(System::Single value) {
    this->lowerLeftLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerLeftLatitude::get() {
    return this->lowerLeftLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsGeographic::lowerLeftLatitude::set(System::Single value) {
    this->lowerLeftLatitudeField = value;
}


inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperLeftEasting::get() {
    return this->upperLeftEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperLeftEasting::set(System::Double value) {
    this->upperLeftEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperLeftNorthing::get() {
    return this->upperLeftNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperLeftNorthing::set(System::Double value) {
    this->upperLeftNorthingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperRightEasting::get() {
    return this->upperRightEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperRightEasting::set(System::Double value) {
    this->upperRightEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperRightNorthing::get() {
    return this->upperRightNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::upperRightNorthing::set(System::Double value) {
    this->upperRightNorthingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerRightEasting::get() {
    return this->lowerRightEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerRightEasting::set(System::Double value) {
    this->lowerRightEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerRightNorthing::get() {
    return this->lowerRightNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerRightNorthing::set(System::Double value) {
    this->lowerRightNorthingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerLeftEasting::get() {
    return this->lowerLeftEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerLeftEasting::set(System::Double value) {
    this->lowerLeftEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerLeftNorthing::get() {
    return this->lowerLeftNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterFrameCoordsCartographic::lowerLeftNorthing::set(System::Double value) {
    this->lowerLeftNorthingField = value;
}


inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperLeftLongitude::get() {
    return this->upperLeftLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperLeftLongitude::set(System::Single value) {
    this->upperLeftLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperLeftLatitude::get() {
    return this->upperLeftLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperLeftLatitude::set(System::Single value) {
    this->upperLeftLatitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperRightLongitude::get() {
    return this->upperRightLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperRightLongitude::set(System::Single value) {
    this->upperRightLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperRightLatitude::get() {
    return this->upperRightLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::upperRightLatitude::set(System::Single value) {
    this->upperRightLatitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerRightLongitude::get() {
    return this->lowerRightLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerRightLongitude::set(System::Single value) {
    this->lowerRightLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerRightLatitude::get() {
    return this->lowerRightLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerRightLatitude::set(System::Single value) {
    this->lowerRightLatitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerLeftLongitude::get() {
    return this->lowerLeftLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerLeftLongitude::set(System::Single value) {
    this->lowerLeftLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerLeftLatitude::get() {
    return this->lowerLeftLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsGeographic::lowerLeftLatitude::set(System::Single value) {
    this->lowerLeftLatitudeField = value;
}


inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperLeftEasting::get() {
    return this->upperLeftEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperLeftEasting::set(System::Double value) {
    this->upperLeftEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperLeftNorthing::get() {
    return this->upperLeftNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperLeftNorthing::set(System::Double value) {
    this->upperLeftNorthingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperRightEasting::get() {
    return this->upperRightEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperRightEasting::set(System::Double value) {
    this->upperRightEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperRightNorthing::get() {
    return this->upperRightNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::upperRightNorthing::set(System::Double value) {
    this->upperRightNorthingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerRightEasting::get() {
    return this->lowerRightEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerRightEasting::set(System::Double value) {
    this->lowerRightEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerRightNorthing::get() {
    return this->lowerRightNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerRightNorthing::set(System::Double value) {
    this->lowerRightNorthingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerLeftEasting::get() {
    return this->lowerLeftEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerLeftEasting::set(System::Double value) {
    this->lowerLeftEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerLeftNorthing::get() {
    return this->lowerLeftNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCoordsCartographic::lowerLeftNorthing::set(System::Double value) {
    this->lowerLeftNorthingField = value;
}


inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic::centerCoordLongitude::get() {
    return this->centerCoordLongitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic::centerCoordLongitude::set(System::Single value) {
    this->centerCoordLongitudeField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic::centerCoordLatitude::get() {
    return this->centerCoordLatitudeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsGeographic::centerCoordLatitude::set(System::Single value) {
    this->centerCoordLatitudeField = value;
}


inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic::centerCoordEasting::get() {
    return this->centerCoordEastingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic::centerCoordEasting::set(System::Double value) {
    this->centerCoordEastingField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic::centerCoordNorthing::get() {
    return this->centerCoordNorthingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoGeoParameterSceneCenterCoordsCartographic::centerCoordNorthing::set(System::Double value) {
    this->centerCoordNorthingField = value;
}


inline level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion^  level1ProductProductSpecificGeocodedImageInfoElevationData::DEMDBContentVersion::get() {
    return this->dEMDBContentVersionField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoElevationData::DEMDBContentVersion::set(level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion^  value) {
    this->dEMDBContentVersionField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoElevationData::minimumHeight::get() {
    return this->minimumHeightField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoElevationData::minimumHeight::set(System::Single value) {
    this->minimumHeightField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoElevationData::meanHeight::get() {
    return this->meanHeightField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoElevationData::meanHeight::set(System::Single value) {
    this->meanHeightField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoElevationData::maximumHeight::get() {
    return this->maximumHeightField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoElevationData::maximumHeight::set(System::Single value) {
    this->maximumHeightField = value;
}


inline System::String^  level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoElevationDataDEMDBContentVersion::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::pixelValueID::get() {
    return this->pixelValueIDField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::pixelValueID::set(System::String^  value) {
    this->pixelValueIDField = value;
}

inline System::String^  level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageStorageOrder level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageStorageOrder::get() {
    return this->imageStorageOrderField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageStorageOrder::set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageStorageOrder value) {
    this->imageStorageOrderField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime^  level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::gridReferenceTime::get() {
    return this->gridReferenceTimeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::gridReferenceTime::set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime^  value) {
    this->gridReferenceTimeField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster^  level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageRaster::get() {
    return this->imageRasterField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfo::imageRaster::set(level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster^  value) {
    this->imageRasterField = value;
}


inline System::DateTime level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::tReferenceTimeUTC::get() {
    return this->tReferenceTimeUTCField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::tReferenceTimeUTC::set(System::DateTime value) {
    this->tReferenceTimeUTCField = value;
}

inline System::Double level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::tauReferenceTime::get() {
    return this->tauReferenceTimeField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::tauReferenceTime::set(System::Double value) {
    this->tauReferenceTimeField = value;
}

inline System::Int64 level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::refRow::get() {
    return this->refRowField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::refRow::set(System::Int64 value) {
    this->refRowField = value;
}

inline System::Int64 level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::refCol::get() {
    return this->refColField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoGridReferenceTime::refCol::set(System::Int64 value) {
    this->refColField = value;
}


inline System::Int32 level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}

inline System::Int32 level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::numberOfColumns::get() {
    return this->numberOfColumnsField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::numberOfColumns::set(System::Int32 value) {
    this->numberOfColumnsField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::rowSpacing::get() {
    return this->rowSpacingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::rowSpacing::set(System::Single value) {
    this->rowSpacingField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::columnSpacing::get() {
    return this->columnSpacingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoMappingGridInfoImageRaster::columnSpacing::set(System::Single value) {
    this->columnSpacingField = value;
}


inline System::String^  level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::pixelValueID::get() {
    return this->pixelValueIDField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::pixelValueID::set(System::String^  value) {
    this->pixelValueIDField = value;
}

inline System::String^  level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster^  level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::imageRaster::get() {
    return this->imageRasterField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescription::imageRaster::set(level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster^  value) {
    this->imageRasterField = value;
}


inline System::Int32 level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}

inline System::Int32 level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::numberOfColumns::get() {
    return this->numberOfColumnsField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::numberOfColumns::set(System::Int32 value) {
    this->numberOfColumnsField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::rowSpacing::get() {
    return this->rowSpacingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::rowSpacing::set(System::Single value) {
    this->rowSpacingField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::columnSpacing::get() {
    return this->columnSpacingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoIncidenceAngleMaskDescriptionImageRaster::columnSpacing::set(System::Single value) {
    this->columnSpacingField = value;
}


inline System::String^  level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::pixelValueID::get() {
    return this->pixelValueIDField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::pixelValueID::set(System::String^  value) {
    this->pixelValueIDField = value;
}

inline System::String^  level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::imageDataFormat::get() {
    return this->imageDataFormatField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::imageDataFormat::set(System::String^  value) {
    this->imageDataFormatField = value;
}

inline System::Int32 level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::imageDataDepth::get() {
    return this->imageDataDepthField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::imageDataDepth::set(System::Int32 value) {
    this->imageDataDepthField = value;
}

inline level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster^  level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::imageRaster::get() {
    return this->imageRasterField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescription::imageRaster::set(level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster^  value) {
    this->imageRasterField = value;
}


inline System::Int32 level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}

inline System::Int32 level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::numberOfColumns::get() {
    return this->numberOfColumnsField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::numberOfColumns::set(System::Int32 value) {
    this->numberOfColumnsField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::rowSpacing::get() {
    return this->rowSpacingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::rowSpacing::set(System::Single value) {
    this->rowSpacingField = value;
}

inline System::Single level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::columnSpacing::get() {
    return this->columnSpacingField;
}
inline System::Void level1ProductProductSpecificGeocodedImageInfoDEMCoverageMapDescriptionImageRaster::columnSpacing::set(System::Single value) {
    this->columnSpacingField = value;
}


inline level1ProductSetupOrderInfo^  level1ProductSetup::orderInfo::get() {
    return this->orderInfoField;
}
inline System::Void level1ProductSetup::orderInfo::set(level1ProductSetupOrderInfo^  value) {
    this->orderInfoField = value;
}

inline level1ProductSetupInputData^  level1ProductSetup::inputData::get() {
    return this->inputDataField;
}
inline System::Void level1ProductSetup::inputData::set(level1ProductSetupInputData^  value) {
    this->inputDataField = value;
}

inline cli::array< level1ProductSetupSoftware^  >^  level1ProductSetup::processingSteps::get() {
    return this->processingStepsField;
}
inline System::Void level1ProductSetup::processingSteps::set(cli::array< level1ProductSetupSoftware^  >^  value) {
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

inline level1ProductSetupOrderInfoOrbitAccuracy level1ProductSetupOrderInfo::orbitAccuracy::get() {
    return this->orbitAccuracyField;
}
inline System::Void level1ProductSetupOrderInfo::orbitAccuracy::set(level1ProductSetupOrderInfoOrbitAccuracy value) {
    this->orbitAccuracyField = value;
}

inline level1ProductSetupOrderInfoSceneSpecification level1ProductSetupOrderInfo::sceneSpecification::get() {
    return this->sceneSpecificationField;
}
inline System::Void level1ProductSetupOrderInfo::sceneSpecification::set(level1ProductSetupOrderInfoSceneSpecification value) {
    this->sceneSpecificationField = value;
}

inline level1ProductSetupOrderInfoOrderedScene^  level1ProductSetupOrderInfo::orderedScene::get() {
    return this->orderedSceneField;
}
inline System::Void level1ProductSetupOrderInfo::orderedScene::set(level1ProductSetupOrderInfoOrderedScene^  value) {
    this->orderedSceneField = value;
}

inline imagingMode level1ProductSetupOrderInfo::ImagingMode::get() {
    return this->imagingModeField;
}
inline System::Void level1ProductSetupOrderInfo::ImagingMode::set(imagingMode value) {
    this->imagingModeField = value;
}

inline lookDirection level1ProductSetupOrderInfo::LookDirection::get() {
    return this->lookDirectionField;
}
inline System::Void level1ProductSetupOrderInfo::LookDirection::set(lookDirection value) {
    this->lookDirectionField = value;
}

inline antennaReceiveConfiguration level1ProductSetupOrderInfo::AntennaReceiveConfiguration::get() {
    return this->antennaReceiveConfigurationField;
}
inline System::Void level1ProductSetupOrderInfo::AntennaReceiveConfiguration::set(antennaReceiveConfiguration value) {
    this->antennaReceiveConfigurationField = value;
}

inline polarisationMode level1ProductSetupOrderInfo::PolarisationMode::get() {
    return this->polarisationModeField;
}
inline System::Void level1ProductSetupOrderInfo::PolarisationMode::set(polarisationMode value) {
    this->polarisationModeField = value;
}

inline cli::array< polLayer >^  level1ProductSetupOrderInfo::polList::get() {
    return this->polListField;
}
inline System::Void level1ProductSetupOrderInfo::polList::set(cli::array< polLayer >^  value) {
    this->polListField = value;
}

inline System::String^  level1ProductSetupOrderInfo::elevationBeamConfiguration::get() {
    return this->elevationBeamConfigurationField;
}
inline System::Void level1ProductSetupOrderInfo::elevationBeamConfiguration::set(System::String^  value) {
    this->elevationBeamConfigurationField = value;
}

inline level1ProductSetupOrderInfoProductVariant level1ProductSetupOrderInfo::productVariant::get() {
    return this->productVariantField;
}
inline System::Void level1ProductSetupOrderInfo::productVariant::set(level1ProductSetupOrderInfoProductVariant value) {
    this->productVariantField = value;
}

inline level1ProductSetupOrderInfoResolutionVariant level1ProductSetupOrderInfo::resolutionVariant::get() {
    return this->resolutionVariantField;
}
inline System::Void level1ProductSetupOrderInfo::resolutionVariant::set(level1ProductSetupOrderInfoResolutionVariant value) {
    this->resolutionVariantField = value;
}

inline level1ProductSetupOrderInfoProjection level1ProductSetupOrderInfo::projection::get() {
    return this->projectionField;
}
inline System::Void level1ProductSetupOrderInfo::projection::set(level1ProductSetupOrderInfoProjection value) {
    this->projectionField = value;
}

inline level1ProductSetupOrderInfoGeocodingOrder^  level1ProductSetupOrderInfo::geocodingOrder::get() {
    return this->geocodingOrderField;
}
inline System::Void level1ProductSetupOrderInfo::geocodingOrder::set(level1ProductSetupOrderInfoGeocodingOrder^  value) {
    this->geocodingOrderField = value;
}

inline level1ProductSetupOrderInfoUserData^  level1ProductSetupOrderInfo::userData::get() {
    return this->userDataField;
}
inline System::Void level1ProductSetupOrderInfo::userData::set(level1ProductSetupOrderInfoUserData^  value) {
    this->userDataField = value;
}

inline System::Double level1ProductSetupOrderInfo::procGainAttenuation::get() {
    return this->procGainAttenuationField;
}
inline System::Void level1ProductSetupOrderInfo::procGainAttenuation::set(System::Double value) {
    this->procGainAttenuationField = value;
}

inline System::Boolean level1ProductSetupOrderInfo::procGainAttenuationSpecified::get() {
    return this->procGainAttenuationFieldSpecified;
}
inline System::Void level1ProductSetupOrderInfo::procGainAttenuationSpecified::set(System::Boolean value) {
    this->procGainAttenuationFieldSpecified = value;
}


inline System::Object^  level1ProductSetupOrderInfoOrderedScene::Item::get() {
    return this->itemField;
}
inline System::Void level1ProductSetupOrderInfoOrderedScene::Item::set(System::Object^  value) {
    this->itemField = value;
}


inline System::Single level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::lat::get() {
    return this->latField;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::lat::set(System::Single value) {
    this->latField = value;
}

inline System::Single level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::lon::get() {
    return this->lonField;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::lon::set(System::Single value) {
    this->lonField = value;
}

inline System::Double level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::centerCoordHeight::get() {
    return this->centerCoordHeightField;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::centerCoordHeight::set(System::Double value) {
    this->centerCoordHeightField = value;
}

inline System::Boolean level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::centerCoordHeightSpecified::get() {
    return this->centerCoordHeightFieldSpecified;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneCenterCoord::centerCoordHeightSpecified::set(System::Boolean value) {
    this->centerCoordHeightFieldSpecified = value;
}


inline System::DateTime level1ProductSetupOrderInfoOrderedSceneSceneExtent::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneExtent::startTimeUTC::set(System::DateTime value) {
    this->startTimeUTCField = value;
}

inline System::DateTime level1ProductSetupOrderInfoOrderedSceneSceneExtent::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void level1ProductSetupOrderInfoOrderedSceneSceneExtent::stopTimeUTC::set(System::DateTime value) {
    this->stopTimeUTCField = value;
}


inline level1ProductSetupOrderInfoGeocodingOrderMapProjection level1ProductSetupOrderInfoGeocodingOrder::mapProjection::get() {
    return this->mapProjectionField;
}
inline System::Void level1ProductSetupOrderInfoGeocodingOrder::mapProjection::set(level1ProductSetupOrderInfoGeocodingOrderMapProjection value) {
    this->mapProjectionField = value;
}

inline System::String^  level1ProductSetupOrderInfoGeocodingOrder::countryID::get() {
    return this->countryIDField;
}
inline System::Void level1ProductSetupOrderInfoGeocodingOrder::countryID::set(System::String^  value) {
    this->countryIDField = value;
}

inline System::String^  level1ProductSetupOrderInfoGeocodingOrder::datumID::get() {
    return this->datumIDField;
}
inline System::Void level1ProductSetupOrderInfoGeocodingOrder::datumID::set(System::String^  value) {
    this->datumIDField = value;
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

inline System::DateTime level1ProductSetupInputData::L0BaseGenerationTimeUTC::get() {
    return this->l0BaseGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::L0BaseGenerationTimeUTC::set(System::DateTime value) {
    this->l0BaseGenerationTimeUTCField = value;
}

inline System::DateTime level1ProductSetupInputData::L0SARGenerationTimeUTC::get() {
    return this->l0SARGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::L0SARGenerationTimeUTC::set(System::DateTime value) {
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

inline System::DateTime level1ProductSetupInputData::IOCSAuxProductGenerationTimeUTC::get() {
    return this->iOCSAuxProductGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::IOCSAuxProductGenerationTimeUTC::set(System::DateTime value) {
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

inline level1ProductSetupInputDataOrbitAccuracy level1ProductSetupInputData::orbitAccuracy::get() {
    return this->orbitAccuracyField;
}
inline System::Void level1ProductSetupInputData::orbitAccuracy::set(level1ProductSetupInputDataOrbitAccuracy value) {
    this->orbitAccuracyField = value;
}

inline System::DateTime level1ProductSetupInputData::orbitProductGenerationTimeUTC::get() {
    return this->orbitProductGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::orbitProductGenerationTimeUTC::set(System::DateTime value) {
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

inline System::DateTime level1ProductSetupInputData::attitudeProductGenerationTimeUTC::get() {
    return this->attitudeProductGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::attitudeProductGenerationTimeUTC::set(System::DateTime value) {
    this->attitudeProductGenerationTimeUTCField = value;
}

inline System::Boolean level1ProductSetupInputData::attitudeProductGenerationTimeUTCSpecified::get() {
    return this->attitudeProductGenerationTimeUTCFieldSpecified;
}
inline System::Void level1ProductSetupInputData::attitudeProductGenerationTimeUTCSpecified::set(System::Boolean value) {
    this->attitudeProductGenerationTimeUTCFieldSpecified = value;
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

inline System::DateTime level1ProductSetupInputData::configurationGenerationTimeUTC::get() {
    return this->configurationGenerationTimeUTCField;
}
inline System::Void level1ProductSetupInputData::configurationGenerationTimeUTC::set(System::DateTime value) {
    this->configurationGenerationTimeUTCField = value;
}


inline System::String^  level1ProductSetupSoftware::softwareID::get() {
    return this->softwareIDField;
}
inline System::Void level1ProductSetupSoftware::softwareID::set(System::String^  value) {
    this->softwareIDField = value;
}

inline System::String^  level1ProductSetupSoftware::softwareVersion::get() {
    return this->softwareVersionField;
}
inline System::Void level1ProductSetupSoftware::softwareVersion::set(System::String^  value) {
    this->softwareVersionField = value;
}

inline System::String^  level1ProductSetupSoftware::algorithm::get() {
    return this->algorithmField;
}
inline System::Void level1ProductSetupSoftware::algorithm::set(System::String^  value) {
    this->algorithmField = value;
}


inline level1ProductProcessingSignalDataAnalysis^  level1ProductProcessing::signalDataAnalysis::get() {
    return this->signalDataAnalysisField;
}
inline System::Void level1ProductProcessing::signalDataAnalysis::set(level1ProductProcessingSignalDataAnalysis^  value) {
    this->signalDataAnalysisField = value;
}

inline level1ProductProcessingGeometry^  level1ProductProcessing::geometry::get() {
    return this->geometryField;
}
inline System::Void level1ProductProcessing::geometry::set(level1ProductProcessingGeometry^  value) {
    this->geometryField = value;
}

inline level1ProductProcessingDoppler^  level1ProductProcessing::doppler::get() {
    return this->dopplerField;
}
inline System::Void level1ProductProcessing::doppler::set(level1ProductProcessingDoppler^  value) {
    this->dopplerField = value;
}

inline cli::array< level1ProductProcessingProcessingParameter^  >^  level1ProductProcessing::processingParameter::get() {
    return this->processingParameterField;
}
inline System::Void level1ProductProcessing::processingParameter::set(cli::array< level1ProductProcessingProcessingParameter^  >^  value) {
    this->processingParameterField = value;
}

inline level1ProductProcessingProcessingFlags^  level1ProductProcessing::processingFlags::get() {
    return this->processingFlagsField;
}
inline System::Void level1ProductProcessing::processingFlags::set(level1ProductProcessingProcessingFlags^  value) {
    this->processingFlagsField = value;
}


inline level1ProductProcessingSignalDataAnalysisSignalDataCoordinateType level1ProductProcessingSignalDataAnalysis::signalDataCoordinateType::get() {
    return this->signalDataCoordinateTypeField;
}
inline System::Void level1ProductProcessingSignalDataAnalysis::signalDataCoordinateType::set(level1ProductProcessingSignalDataAnalysisSignalDataCoordinateType value) {
    this->signalDataCoordinateTypeField = value;
}

inline level1ProductProcessingSignalDataAnalysisDataGapInfo^  level1ProductProcessingSignalDataAnalysis::dataGapInfo::get() {
    return this->dataGapInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysis::dataGapInfo::set(level1ProductProcessingSignalDataAnalysisDataGapInfo^  value) {
    this->dataGapInfoField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfo^  level1ProductProcessingSignalDataAnalysis::rawDataInfo::get() {
    return this->rawDataInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysis::rawDataInfo::set(level1ProductProcessingSignalDataAnalysisRawDataInfo^  value) {
    this->rawDataInfoField = value;
}

inline level1ProductProcessingSignalDataAnalysisCalPulseAnalysis^  level1ProductProcessingSignalDataAnalysis::calPulseAnalysis::get() {
    return this->calPulseAnalysisField;
}
inline System::Void level1ProductProcessingSignalDataAnalysis::calPulseAnalysis::set(level1ProductProcessingSignalDataAnalysisCalPulseAnalysis^  value) {
    this->calPulseAnalysisField = value;
}

inline level1ProductProcessingSignalDataAnalysisNoiseAnalysis^  level1ProductProcessingSignalDataAnalysis::noiseAnalysis::get() {
    return this->noiseAnalysisField;
}
inline System::Void level1ProductProcessingSignalDataAnalysis::noiseAnalysis::set(level1ProductProcessingSignalDataAnalysisNoiseAnalysis^  value) {
    this->noiseAnalysisField = value;
}

inline level1ProductProcessingSignalDataAnalysisBurstInfo^  level1ProductProcessingSignalDataAnalysis::burstInfo::get() {
    return this->burstInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysis::burstInfo::set(level1ProductProcessingSignalDataAnalysisBurstInfo^  value) {
    this->burstInfoField = value;
}


inline System::Int32 level1ProductProcessingSignalDataAnalysisDataGapInfo::numberOfGaps::get() {
    return this->numberOfGapsField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisDataGapInfo::numberOfGaps::set(System::Int32 value) {
    this->numberOfGapsField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap^  >^  level1ProductProcessingSignalDataAnalysisDataGapInfo::dataGap::get() {
    return this->dataGapField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisDataGapInfo::dataGap::set(cli::array< level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap^  >^  value) {
    this->dataGapField = value;
}


inline segmentInfoType^  level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap::segmentInfo::get() {
    return this->segmentInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap::segmentInfo::set(segmentInfoType^  value) {
    this->segmentInfoField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap::numberOfMissingISPs::get() {
    return this->numberOfMissingISPsField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap::numberOfMissingISPs::set(System::Int32 value) {
    this->numberOfMissingISPsField = value;
}

inline System::String^  level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap::ISPdesignator::get() {
    return this->iSPdesignatorField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisDataGapInfoDataGap::ISPdesignator::set(System::String^  value) {
    this->iSPdesignatorField = value;
}


inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfo::numberOfRawDataBlocks::get() {
    return this->numberOfRawDataBlocksField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfo::numberOfRawDataBlocks::set(System::Int32 value) {
    this->numberOfRawDataBlocksField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection^  >^  level1ProductProcessingSignalDataAnalysisRawDataInfo::rawDataStatisticsAndCorrection::get() {
    return this->rawDataStatisticsAndCorrectionField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfo::rawDataStatisticsAndCorrection::set(cli::array< level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection^  >^  value) {
    this->rawDataStatisticsAndCorrectionField = value;
}


inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::blockInfo::get() {
    return this->blockInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::blockInfo::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo^  value) {
    this->blockInfoField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQbias::get() {
    return this->iQbiasField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQbias::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias^  value) {
    this->iQbiasField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQstdDeviation::get() {
    return this->iQstdDeviationField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQstdDeviation::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation^  value) {
    this->iQstdDeviationField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQGainImbalance::get() {
    return this->iQGainImbalanceField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQGainImbalance::set(System::Single value) {
    this->iQGainImbalanceField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQNonOrthogonality::get() {
    return this->iQNonOrthogonalityField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::IQNonOrthogonality::set(System::Single value) {
    this->iQNonOrthogonalityField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::totalNumberOfValidSamples::get() {
    return this->totalNumberOfValidSamplesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::totalNumberOfValidSamples::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples^  value) {
    this->totalNumberOfValidSamplesField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::ADCMaxSaturation::get() {
    return this->aDCMaxSaturationField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::ADCMaxSaturation::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation^  value) {
    this->aDCMaxSaturationField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::ADCMinSaturation::get() {
    return this->aDCMinSaturationField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::ADCMinSaturation::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation^  value) {
    this->aDCMinSaturationField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::bitErrorRate::get() {
    return this->bitErrorRateField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::bitErrorRate::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate^  value) {
    this->bitErrorRateField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::totalBitErrorCounter::get() {
    return this->totalBitErrorCounterField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::totalBitErrorCounter::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter^  value) {
    this->totalBitErrorCounterField = value;
}

inline System::Object^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::quantisationStatistics::get() {
    return this->quantisationStatisticsField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::quantisationStatistics::set(System::Object^  value) {
    this->quantisationStatisticsField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionAppliedCorrectionID level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::appliedCorrectionID::get() {
    return this->appliedCorrectionIDField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrection::appliedCorrectionID::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionAppliedCorrectionID value) {
    this->appliedCorrectionIDField = value;
}


inline System::String^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::instrumentChannel::get() {
    return this->instrumentChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::instrumentChannel::set(System::String^  value) {
    this->instrumentChannelField = value;
}

inline System::String^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock^  level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::dataBlock::get() {
    return this->dataBlockField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::dataBlock::set(level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock^  value) {
    this->dataBlockField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::blockID::get() {
    return this->blockIDField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfo::blockID::set(System::Int32 value) {
    this->blockIDField = value;
}


inline System::DateTime level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::startTimeUTC::set(System::DateTime value) {
    this->startTimeUTCField = value;
}

inline System::DateTime level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::stopTimeUTC::set(System::DateTime value) {
    this->stopTimeUTCField = value;
}

inline System::Double level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::rangeTimeFirst::get() {
    return this->rangeTimeFirstField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::rangeTimeFirst::set(System::Double value) {
    this->rangeTimeFirstField = value;
}

inline System::Double level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::rangeTimeLast::get() {
    return this->rangeTimeLastField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::rangeTimeLast::set(System::Double value) {
    this->rangeTimeLastField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::numberOfLines::get() {
    return this->numberOfLinesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::numberOfLines::set(System::Int32 value) {
    this->numberOfLinesField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::numberOfSamples::get() {
    return this->numberOfSamplesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBlockInfoDataBlock::numberOfSamples::set(System::Int32 value) {
    this->numberOfSamplesField = value;
}


inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias::IChannel::set(System::Single value) {
    this->iChannelField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQbias::QChannel::set(System::Single value) {
    this->qChannelField = value;
}


inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation::IChannel::set(System::Single value) {
    this->iChannelField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionIQstdDeviation::QChannel::set(System::Single value) {
    this->qChannelField = value;
}


inline System::Int64 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples::IChannel::set(System::Int64 value) {
    this->iChannelField = value;
}

inline System::Int64 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalNumberOfValidSamples::QChannel::set(System::Int64 value) {
    this->qChannelField = value;
}


inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation::IChannel::set(System::Single value) {
    this->iChannelField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMaxSaturation::QChannel::set(System::Single value) {
    this->qChannelField = value;
}


inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation::IChannel::set(System::Single value) {
    this->iChannelField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionADCMinSaturation::QChannel::set(System::Single value) {
    this->qChannelField = value;
}


inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate::IChannel::set(System::Int32 value) {
    this->iChannelField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionBitErrorRate::QChannel::set(System::Int32 value) {
    this->qChannelField = value;
}


inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter::IChannel::set(System::Int32 value) {
    this->iChannelField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisRawDataInfoRawDataStatisticsAndCorrectionTotalBitErrorCounter::QChannel::set(System::Int32 value) {
    this->qChannelField = value;
}


inline System::Int32 level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::totalNumberOfCalPulses::get() {
    return this->totalNumberOfCalPulsesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::totalNumberOfCalPulses::set(System::Int32 value) {
    this->totalNumberOfCalPulsesField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::numberOfCalSequences::get() {
    return this->numberOfCalSequencesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::numberOfCalSequences::set(System::Int32 value) {
    this->numberOfCalSequencesField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence^  >^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::calSequence::get() {
    return this->calSequenceField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::calSequence::set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence^  >^  value) {
    this->calSequenceField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis^  >^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::chirpAnalysis::get() {
    return this->chirpAnalysisField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::chirpAnalysis::set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis^  >^  value) {
    this->chirpAnalysisField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection^  >^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::pulseCorrection::get() {
    return this->pulseCorrectionField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysis::pulseCorrection::set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection^  >^  value) {
    this->pulseCorrectionField = value;
}


inline segmentInfoType^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence::segmentInfo::get() {
    return this->segmentInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence::segmentInfo::set(segmentInfoType^  value) {
    this->segmentInfoField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence::numberOfCalPulses::get() {
    return this->numberOfCalPulsesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence::numberOfCalPulses::set(System::Int32 value) {
    this->numberOfCalPulsesField = value;
}

inline System::String^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence::calSequenceType::get() {
    return this->calSequenceTypeField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisCalSequence::calSequenceType::set(System::String^  value) {
    this->calSequenceTypeField = value;
}


inline segmentInfoType^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::segmentInfo::get() {
    return this->segmentInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::segmentInfo::set(segmentInfoType^  value) {
    this->segmentInfoField = value;
}

inline System::String^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::pulseCode::get() {
    return this->pulseCodeField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::pulseCode::set(System::String^  value) {
    this->pulseCodeField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::totalPower::get() {
    return this->totalPowerField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::totalPower::set(System::Single value) {
    this->totalPowerField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::meanAmplitude::get() {
    return this->meanAmplitudeField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::meanAmplitude::set(System::Single value) {
    this->meanAmplitudeField = value;
}

inline System::Double level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::peakLocation::get() {
    return this->peakLocationField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::peakLocation::set(System::Double value) {
    this->peakLocationField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::pulseLength::get() {
    return this->pulseLengthField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::pulseLength::set(System::Single value) {
    this->pulseLengthField = value;
}

inline System::Double level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::resolution::get() {
    return this->resolutionField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::resolution::set(System::Double value) {
    this->resolutionField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::PSLR::get() {
    return this->pSLRField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::PSLR::set(System::Single value) {
    this->pSLRField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::ISLR::get() {
    return this->iSLRField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisChirpAnalysis::ISLR::set(System::Single value) {
    this->iSLRField = value;
}


inline segmentInfoType^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection::segmentInfo::get() {
    return this->segmentInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection::segmentInfo::set(segmentInfoType^  value) {
    this->segmentInfoField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection^  >^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection::amplCorrection::get() {
    return this->amplCorrectionField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection::amplCorrection::set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection^  >^  value) {
    this->amplCorrectionField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection^  >^  level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection::phaseCorrection::get() {
    return this->phaseCorrectionField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrection::phaseCorrection::set(cli::array< level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection^  >^  value) {
    this->phaseCorrectionField = value;
}


inline level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrectionTimeEffect level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection::timeEffect::get() {
    return this->timeEffectField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrection::timeEffect::set(level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionAmplCorrectionTimeEffect value) {
    this->timeEffectField = value;
}


inline level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrectionTimeEffect level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection::timeEffect::get() {
    return this->timeEffectField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrection::timeEffect::set(level1ProductProcessingSignalDataAnalysisCalPulseAnalysisPulseCorrectionPhaseCorrectionTimeEffect value) {
    this->timeEffectField = value;
}


inline System::Int32 level1ProductProcessingSignalDataAnalysisNoiseAnalysis::numberOfNoiseSequences::get() {
    return this->numberOfNoiseSequencesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisNoiseAnalysis::numberOfNoiseSequences::set(System::Int32 value) {
    this->numberOfNoiseSequencesField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisNoiseAnalysis::totalNumberOfNoisePulses::get() {
    return this->totalNumberOfNoisePulsesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisNoiseAnalysis::totalNumberOfNoisePulses::set(System::Int32 value) {
    this->totalNumberOfNoisePulsesField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence^  >^  level1ProductProcessingSignalDataAnalysisNoiseAnalysis::noiseSequence::get() {
    return this->noiseSequenceField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisNoiseAnalysis::noiseSequence::set(cli::array< level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence^  >^  value) {
    this->noiseSequenceField = value;
}


inline segmentInfoType^  level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence::segmentInfo::get() {
    return this->segmentInfoField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence::segmentInfo::set(segmentInfoType^  value) {
    this->segmentInfoField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence::numberOfNoisePulses::get() {
    return this->numberOfNoisePulsesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence::numberOfNoisePulses::set(System::Int32 value) {
    this->numberOfNoisePulsesField = value;
}

inline System::Single level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence::averageNoisePower::get() {
    return this->averageNoisePowerField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisNoiseAnalysisNoiseSequence::averageNoisePower::set(System::Single value) {
    this->averageNoisePowerField = value;
}


inline System::Int32 level1ProductProcessingSignalDataAnalysisBurstInfo::numberOfBursts::get() {
    return this->numberOfBurstsField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfo::numberOfBursts::set(System::Int32 value) {
    this->numberOfBurstsField = value;
}

inline cli::array< level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence^  >^  level1ProductProcessingSignalDataAnalysisBurstInfo::burstSequence::get() {
    return this->burstSequenceField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfo::burstSequence::set(cli::array< level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence^  >^  value) {
    this->burstSequenceField = value;
}


inline System::String^  level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::polChannel::get() {
    return this->polChannelField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::polChannel::set(System::String^  value) {
    this->polChannelField = value;
}

inline System::DateTime level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::startTimeUTC::set(System::DateTime value) {
    this->startTimeUTCField = value;
}

inline System::DateTime level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::stopTimeUTC::set(System::DateTime value) {
    this->stopTimeUTCField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::numberOfPulses::get() {
    return this->numberOfPulsesField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::numberOfPulses::set(System::Int32 value) {
    this->numberOfPulsesField = value;
}

inline System::Int32 level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::burstIndex::get() {
    return this->burstIndexField;
}
inline System::Void level1ProductProcessingSignalDataAnalysisBurstInfoBurstSequence::burstIndex::set(System::Int32 value) {
    this->burstIndexField = value;
}


inline System::String^  level1ProductProcessingGeometry::geometryCoordinateType::get() {
    return this->geometryCoordinateTypeField;
}
inline System::Void level1ProductProcessingGeometry::geometryCoordinateType::set(System::String^  value) {
    this->geometryCoordinateTypeField = value;
}

inline cli::array< level1ProductProcessingGeometryVelocityParameter^  >^  level1ProductProcessingGeometry::velocityParameter::get() {
    return this->velocityParameterField;
}
inline System::Void level1ProductProcessingGeometry::velocityParameter::set(cli::array< level1ProductProcessingGeometryVelocityParameter^  >^  value) {
    this->velocityParameterField = value;
}

inline cli::array< level1ProductProcessingGeometryZeroDopplerVelocity^  >^  level1ProductProcessingGeometry::zeroDopplerVelocity::get() {
    return this->zeroDopplerVelocityField;
}
inline System::Void level1ProductProcessingGeometry::zeroDopplerVelocity::set(cli::array< level1ProductProcessingGeometryZeroDopplerVelocity^  >^  value) {
    this->zeroDopplerVelocityField = value;
}

inline cli::array< level1ProductProcessingGeometryDopplerRate^  >^  level1ProductProcessingGeometry::dopplerRate::get() {
    return this->dopplerRateField;
}
inline System::Void level1ProductProcessingGeometry::dopplerRate::set(cli::array< level1ProductProcessingGeometryDopplerRate^  >^  value) {
    this->dopplerRateField = value;
}


inline System::DateTime level1ProductProcessingGeometryVelocityParameter::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProcessingGeometryVelocityParameter::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductProcessingGeometryVelocityParameter::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProcessingGeometryVelocityParameter::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline dblPolynom^  level1ProductProcessingGeometryVelocityParameter::velocityParameterPolynomial::get() {
    return this->velocityParameterPolynomialField;
}
inline System::Void level1ProductProcessingGeometryVelocityParameter::velocityParameterPolynomial::set(dblPolynom^  value) {
    this->velocityParameterPolynomialField = value;
}


inline System::String^  level1ProductProcessingGeometryZeroDopplerVelocity::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProcessingGeometryZeroDopplerVelocity::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::Double level1ProductProcessingGeometryZeroDopplerVelocity::velocity::get() {
    return this->velocityField;
}
inline System::Void level1ProductProcessingGeometryZeroDopplerVelocity::velocity::set(System::Double value) {
    this->velocityField = value;
}


inline System::DateTime level1ProductProcessingGeometryDopplerRate::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProcessingGeometryDopplerRate::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline System::String^  level1ProductProcessingGeometryDopplerRate::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProcessingGeometryDopplerRate::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline dblPolynom^  level1ProductProcessingGeometryDopplerRate::dopplerRatePolynomial::get() {
    return this->dopplerRatePolynomialField;
}
inline System::Void level1ProductProcessingGeometryDopplerRate::dopplerRatePolynomial::set(dblPolynom^  value) {
    this->dopplerRatePolynomialField = value;
}


inline System::String^  level1ProductProcessingDoppler::dopplerBasebandEstimationMethod::get() {
    return this->dopplerBasebandEstimationMethodField;
}
inline System::Void level1ProductProcessingDoppler::dopplerBasebandEstimationMethod::set(System::String^  value) {
    this->dopplerBasebandEstimationMethodField = value;
}

inline System::String^  level1ProductProcessingDoppler::dopplerGeometricEstimationMethod::get() {
    return this->dopplerGeometricEstimationMethodField;
}
inline System::Void level1ProductProcessingDoppler::dopplerGeometricEstimationMethod::set(System::String^  value) {
    this->dopplerGeometricEstimationMethodField = value;
}

inline level1ProductProcessingDopplerDopplerCentroidCoordinateType level1ProductProcessingDoppler::dopplerCentroidCoordinateType::get() {
    return this->dopplerCentroidCoordinateTypeField;
}
inline System::Void level1ProductProcessingDoppler::dopplerCentroidCoordinateType::set(level1ProductProcessingDopplerDopplerCentroidCoordinateType value) {
    this->dopplerCentroidCoordinateTypeField = value;
}

inline cli::array< level1ProductProcessingDopplerDopplerCentroid^  >^  level1ProductProcessingDoppler::dopplerCentroid::get() {
    return this->dopplerCentroidField;
}
inline System::Void level1ProductProcessingDoppler::dopplerCentroid::set(cli::array< level1ProductProcessingDopplerDopplerCentroid^  >^  value) {
    this->dopplerCentroidField = value;
}


inline polLayer level1ProductProcessingDopplerDopplerCentroid::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline level1ProductProcessingDopplerDopplerCentroidDRAoffset level1ProductProcessingDopplerDopplerCentroid::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::DRAoffset::set(level1ProductProcessingDopplerDopplerCentroidDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductProcessingDopplerDopplerCentroid::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline System::String^  level1ProductProcessingDopplerDopplerCentroid::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::Double level1ProductProcessingDopplerDopplerCentroid::scanSARDopplerOffset::get() {
    return this->scanSARDopplerOffsetField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::scanSARDopplerOffset::set(System::Double value) {
    this->scanSARDopplerOffsetField = value;
}

inline System::Boolean level1ProductProcessingDopplerDopplerCentroid::scanSARDopplerOffsetSpecified::get() {
    return this->scanSARDopplerOffsetFieldSpecified;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::scanSARDopplerOffsetSpecified::set(System::Boolean value) {
    this->scanSARDopplerOffsetFieldSpecified = value;
}

inline level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression^  level1ProductProcessingDopplerDopplerCentroid::spotlightDopplerProgression::get() {
    return this->spotlightDopplerProgressionField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::spotlightDopplerProgression::set(level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression^  value) {
    this->spotlightDopplerProgressionField = value;
}

inline System::Double level1ProductProcessingDopplerDopplerCentroid::polLayerDopplerOffset::get() {
    return this->polLayerDopplerOffsetField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::polLayerDopplerOffset::set(System::Double value) {
    this->polLayerDopplerOffsetField = value;
}

inline System::Boolean level1ProductProcessingDopplerDopplerCentroid::polLayerDopplerOffsetSpecified::get() {
    return this->polLayerDopplerOffsetFieldSpecified;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::polLayerDopplerOffsetSpecified::set(System::Boolean value) {
    this->polLayerDopplerOffsetFieldSpecified = value;
}

inline System::Int32 level1ProductProcessingDopplerDopplerCentroid::numberOfBlocks::get() {
    return this->numberOfBlocksField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::numberOfBlocks::set(System::Int32 value) {
    this->numberOfBlocksField = value;
}

inline System::Int32 level1ProductProcessingDopplerDopplerCentroid::numberOfRejectedBlocks::get() {
    return this->numberOfRejectedBlocksField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::numberOfRejectedBlocks::set(System::Int32 value) {
    this->numberOfRejectedBlocksField = value;
}

inline System::Int32 level1ProductProcessingDopplerDopplerCentroid::numberOfDopplerRecords::get() {
    return this->numberOfDopplerRecordsField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::numberOfDopplerRecords::set(System::Int32 value) {
    this->numberOfDopplerRecordsField = value;
}

inline System::Single level1ProductProcessingDopplerDopplerCentroid::dopplerRecordAzimuthSpacing::get() {
    return this->dopplerRecordAzimuthSpacingField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::dopplerRecordAzimuthSpacing::set(System::Single value) {
    this->dopplerRecordAzimuthSpacingField = value;
}

inline cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimate^  >^  level1ProductProcessingDopplerDopplerCentroid::dopplerEstimate::get() {
    return this->dopplerEstimateField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::dopplerEstimate::set(cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimate^  >^  value) {
    this->dopplerEstimateField = value;
}

inline System::Int32 level1ProductProcessingDopplerDopplerCentroid::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroid::layerIndex::set(System::Int32 value) {
    this->layerIndexField = value;
}


inline System::Double level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression::dopplerMidRangeFirst::get() {
    return this->dopplerMidRangeFirstField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression::dopplerMidRangeFirst::set(System::Double value) {
    this->dopplerMidRangeFirstField = value;
}

inline System::Double level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression::dopplerMidRangeLast::get() {
    return this->dopplerMidRangeLastField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidSpotlightDopplerProgression::dopplerMidRangeLast::set(System::Double value) {
    this->dopplerMidRangeLastField = value;
}


inline System::DateTime level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline System::Double level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAtMidRange::get() {
    return this->dopplerAtMidRangeField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAtMidRange::set(System::Double value) {
    this->dopplerAtMidRangeField = value;
}

inline dblPolynom^  level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::basebandDoppler::get() {
    return this->basebandDopplerField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::basebandDoppler::set(dblPolynom^  value) {
    this->basebandDopplerField = value;
}

inline System::Boolean level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::geometricDopplerFlag::get() {
    return this->geometricDopplerFlagField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::geometricDopplerFlag::set(System::Boolean value) {
    this->geometricDopplerFlagField = value;
}

inline dblPolynom^  level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::geometricDoppler::get() {
    return this->geometricDopplerField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::geometricDoppler::set(dblPolynom^  value) {
    this->geometricDopplerField = value;
}

inline System::Int32 level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAmbiguity::get() {
    return this->dopplerAmbiguityField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerAmbiguity::set(System::Int32 value) {
    this->dopplerAmbiguityField = value;
}

inline System::Boolean level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerConsistencyFlag::get() {
    return this->dopplerConsistencyFlagField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerConsistencyFlag::set(System::Boolean value) {
    this->dopplerConsistencyFlagField = value;
}

inline System::Single level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerEstimateConfidence::get() {
    return this->dopplerEstimateConfidenceField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::dopplerEstimateConfidence::set(System::Single value) {
    this->dopplerEstimateConfidenceField = value;
}

inline level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::combinedDoppler::get() {
    return this->combinedDopplerField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimate::combinedDoppler::set(level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler^  value) {
    this->combinedDopplerField = value;
}


inline System::Double level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMin::get() {
    return this->validityRangeMinField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMin::set(System::Double value) {
    this->validityRangeMinField = value;
}

inline System::Double level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMax::get() {
    return this->validityRangeMaxField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::validityRangeMax::set(System::Double value) {
    this->validityRangeMaxField = value;
}

inline System::Double level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::referencePoint::get() {
    return this->referencePointField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::referencePoint::set(System::Double value) {
    this->referencePointField = value;
}

inline System::UInt32 level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::polynomialDegree::get() {
    return this->polynomialDegreeField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::polynomialDegree::set(System::UInt32 value) {
    this->polynomialDegreeField = value;
}

inline cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient^  >^  level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::coefficient::get() {
    return this->coefficientField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDoppler::coefficient::set(cli::array< level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient^  >^  value) {
    this->coefficientField = value;
}


inline System::UInt32 level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient::exponent::get() {
    return this->exponentField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient::exponent::set(System::UInt32 value) {
    this->exponentField = value;
}

inline System::Boolean level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient::exponentSpecified::get() {
    return this->exponentFieldSpecified;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient::exponentSpecified::set(System::Boolean value) {
    this->exponentFieldSpecified = value;
}

inline System::Double level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProcessingDopplerDopplerCentroidDopplerEstimateCombinedDopplerCoefficient::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::String^  level1ProductProcessingProcessingParameter::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProcessingProcessingParameter::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductProcessingProcessingParameterProcessingInfoCoordinateType level1ProductProcessingProcessingParameter::processingInfoCoordinateType::get() {
    return this->processingInfoCoordinateTypeField;
}
inline System::Void level1ProductProcessingProcessingParameter::processingInfoCoordinateType::set(level1ProductProcessingProcessingParameterProcessingInfoCoordinateType value) {
    this->processingInfoCoordinateTypeField = value;
}

inline System::Single level1ProductProcessingProcessingParameter::rangeLooks::get() {
    return this->rangeLooksField;
}
inline System::Void level1ProductProcessingProcessingParameter::rangeLooks::set(System::Single value) {
    this->rangeLooksField = value;
}

inline System::Single level1ProductProcessingProcessingParameter::azimuthLooks::get() {
    return this->azimuthLooksField;
}
inline System::Void level1ProductProcessingProcessingParameter::azimuthLooks::set(System::Single value) {
    this->azimuthLooksField = value;
}

inline System::Double level1ProductProcessingProcessingParameter::rangeLookBandwidth::get() {
    return this->rangeLookBandwidthField;
}
inline System::Void level1ProductProcessingProcessingParameter::rangeLookBandwidth::set(System::Double value) {
    this->rangeLookBandwidthField = value;
}

inline System::Double level1ProductProcessingProcessingParameter::azimuthLookBandwidth::get() {
    return this->azimuthLookBandwidthField;
}
inline System::Void level1ProductProcessingProcessingParameter::azimuthLookBandwidth::set(System::Double value) {
    this->azimuthLookBandwidthField = value;
}

inline System::Double level1ProductProcessingProcessingParameter::totalProcessedRangeBandwidth::get() {
    return this->totalProcessedRangeBandwidthField;
}
inline System::Void level1ProductProcessingProcessingParameter::totalProcessedRangeBandwidth::set(System::Double value) {
    this->totalProcessedRangeBandwidthField = value;
}

inline System::Double level1ProductProcessingProcessingParameter::totalProcessedAzimuthBandwidth::get() {
    return this->totalProcessedAzimuthBandwidthField;
}
inline System::Void level1ProductProcessingProcessingParameter::totalProcessedAzimuthBandwidth::set(System::Double value) {
    this->totalProcessedAzimuthBandwidthField = value;
}

inline System::String^  level1ProductProcessingProcessingParameter::rangeWindowID::get() {
    return this->rangeWindowIDField;
}
inline System::Void level1ProductProcessingProcessingParameter::rangeWindowID::set(System::String^  value) {
    this->rangeWindowIDField = value;
}

inline System::Single level1ProductProcessingProcessingParameter::rangeWindowCoefficient::get() {
    return this->rangeWindowCoefficientField;
}
inline System::Void level1ProductProcessingProcessingParameter::rangeWindowCoefficient::set(System::Single value) {
    this->rangeWindowCoefficientField = value;
}

inline System::String^  level1ProductProcessingProcessingParameter::azimuthWindowID::get() {
    return this->azimuthWindowIDField;
}
inline System::Void level1ProductProcessingProcessingParameter::azimuthWindowID::set(System::String^  value) {
    this->azimuthWindowIDField = value;
}

inline System::Single level1ProductProcessingProcessingParameter::azimuthWindowCoefficient::get() {
    return this->azimuthWindowCoefficientField;
}
inline System::Void level1ProductProcessingProcessingParameter::azimuthWindowCoefficient::set(System::Single value) {
    this->azimuthWindowCoefficientField = value;
}

inline cli::array< level1ProductProcessingProcessingParameterRangeCompression^  >^  level1ProductProcessingProcessingParameter::rangeCompression::get() {
    return this->rangeCompressionField;
}
inline System::Void level1ProductProcessingProcessingParameter::rangeCompression::set(cli::array< level1ProductProcessingProcessingParameterRangeCompression^  >^  value) {
    this->rangeCompressionField = value;
}

inline cli::array< level1ProductProcessingProcessingParameterCorrectedInstrumentDelay^  >^  level1ProductProcessingProcessingParameter::correctedInstrumentDelay::get() {
    return this->correctedInstrumentDelayField;
}
inline System::Void level1ProductProcessingProcessingParameter::correctedInstrumentDelay::set(cli::array< level1ProductProcessingProcessingParameterCorrectedInstrumentDelay^  >^  value) {
    this->correctedInstrumentDelayField = value;
}

inline level1ProductProcessingProcessingParameterScanSARBeamOverlap^  level1ProductProcessingProcessingParameter::scanSARBeamOverlap::get() {
    return this->scanSARBeamOverlapField;
}
inline System::Void level1ProductProcessingProcessingParameter::scanSARBeamOverlap::set(level1ProductProcessingProcessingParameterScanSARBeamOverlap^  value) {
    this->scanSARBeamOverlapField = value;
}


inline segmentInfoType^  level1ProductProcessingProcessingParameterRangeCompression::segmentInfo::get() {
    return this->segmentInfoField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompression::segmentInfo::set(segmentInfoType^  value) {
    this->segmentInfoField = value;
}

inline cli::array< level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp^  >^  level1ProductProcessingProcessingParameterRangeCompression::chirps::get() {
    return this->chirpsField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompression::chirps::set(cli::array< level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp^  >^  value) {
    this->chirpsField = value;
}


inline System::String^  level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseType::get() {
    return this->pulseTypeField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseType::set(System::String^  value) {
    this->pulseTypeField = value;
}

inline level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpChirpDesignator level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::chirpDesignator::get() {
    return this->chirpDesignatorField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::chirpDesignator::set(level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpChirpDesignator value) {
    this->chirpDesignatorField = value;
}

inline chirpSlope level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::ChirpSlope::get() {
    return this->chirpSlopeField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::ChirpSlope::set(chirpSlope value) {
    this->chirpSlopeField = value;
}

inline System::Double level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseLength::get() {
    return this->pulseLengthField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseLength::set(System::Double value) {
    this->pulseLengthField = value;
}

inline System::Double level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseBandwidth::get() {
    return this->pulseBandwidthField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseBandwidth::set(System::Double value) {
    this->pulseBandwidthField = value;
}

inline System::Double level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::centerFrequency::get() {
    return this->centerFrequencyField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::centerFrequency::set(System::Double value) {
    this->centerFrequencyField = value;
}

inline dblPolynom^  level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::amplitude::get() {
    return this->amplitudeField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::amplitude::set(dblPolynom^  value) {
    this->amplitudeField = value;
}

inline dblPolynom^  level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::phase::get() {
    return this->phaseField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::phase::set(dblPolynom^  value) {
    this->phaseField = value;
}

inline level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica^  level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::replica::get() {
    return this->replicaField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::replica::set(level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica^  value) {
    this->replicaField = value;
}

inline System::Int32 level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseCode::get() {
    return this->pulseCodeField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirp::pulseCode::set(System::Int32 value) {
    this->pulseCodeField = value;
}


inline System::Boolean level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::replicaQualityTooLowFlag::get() {
    return this->replicaQualityTooLowFlagField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::replicaQualityTooLowFlag::set(System::Boolean value) {
    this->replicaQualityTooLowFlagField = value;
}

inline System::Single level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::totalPower::get() {
    return this->totalPowerField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::totalPower::set(System::Single value) {
    this->totalPowerField = value;
}

inline System::Single level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::meanAmplitude::get() {
    return this->meanAmplitudeField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::meanAmplitude::set(System::Single value) {
    this->meanAmplitudeField = value;
}

inline System::Double level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::peakLocation::get() {
    return this->peakLocationField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::peakLocation::set(System::Double value) {
    this->peakLocationField = value;
}

inline System::Single level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::pulseLength::get() {
    return this->pulseLengthField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::pulseLength::set(System::Single value) {
    this->pulseLengthField = value;
}

inline System::Single level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::resolution::get() {
    return this->resolutionField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::resolution::set(System::Single value) {
    this->resolutionField = value;
}

inline System::Single level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::PSLR::get() {
    return this->pSLRField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::PSLR::set(System::Single value) {
    this->pSLRField = value;
}

inline System::Boolean level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::PSLRSpecified::get() {
    return this->pSLRFieldSpecified;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::PSLRSpecified::set(System::Boolean value) {
    this->pSLRFieldSpecified = value;
}

inline System::Single level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::ISLR::get() {
    return this->iSLRField;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::ISLR::set(System::Single value) {
    this->iSLRField = value;
}

inline System::Boolean level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::ISLRSpecified::get() {
    return this->iSLRFieldSpecified;
}
inline System::Void level1ProductProcessingProcessingParameterRangeCompressionReferenceChirpReplica::ISLRSpecified::set(System::Boolean value) {
    this->iSLRFieldSpecified = value;
}


inline polLayer level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline level1ProductProcessingProcessingParameterCorrectedInstrumentDelayDRAoffset level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::DRAoffset::set(level1ProductProcessingProcessingParameterCorrectedInstrumentDelayDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline System::Double level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::totalTimeDelay::get() {
    return this->totalTimeDelayField;
}
inline System::Void level1ProductProcessingProcessingParameterCorrectedInstrumentDelay::totalTimeDelay::set(System::Double value) {
    this->totalTimeDelayField = value;
}


inline System::Double level1ProductProcessingProcessingParameterScanSARBeamOverlap::rangeTimeStart::get() {
    return this->rangeTimeStartField;
}
inline System::Void level1ProductProcessingProcessingParameterScanSARBeamOverlap::rangeTimeStart::set(System::Double value) {
    this->rangeTimeStartField = value;
}

inline System::Double level1ProductProcessingProcessingParameterScanSARBeamOverlap::rangeTimeStop::get() {
    return this->rangeTimeStopField;
}
inline System::Void level1ProductProcessingProcessingParameterScanSARBeamOverlap::rangeTimeStop::set(System::Double value) {
    this->rangeTimeStopField = value;
}

inline System::Double level1ProductProcessingProcessingParameterScanSARBeamOverlap::farRangeBeamBorderTime::get() {
    return this->farRangeBeamBorderTimeField;
}
inline System::Void level1ProductProcessingProcessingParameterScanSARBeamOverlap::farRangeBeamBorderTime::set(System::Double value) {
    this->farRangeBeamBorderTimeField = value;
}

inline System::String^  level1ProductProcessingProcessingParameterScanSARBeamOverlap::mergingMethod::get() {
    return this->mergingMethodField;
}
inline System::Void level1ProductProcessingProcessingParameterScanSARBeamOverlap::mergingMethod::set(System::String^  value) {
    this->mergingMethodField = value;
}

inline level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight^  level1ProductProcessingProcessingParameterScanSARBeamOverlap::lookWeight::get() {
    return this->lookWeightField;
}
inline System::Void level1ProductProcessingProcessingParameterScanSARBeamOverlap::lookWeight::set(level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight^  value) {
    this->lookWeightField = value;
}


inline System::Single level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProcessingProcessingParameterScanSARBeamOverlapLookWeight::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::Boolean level1ProductProcessingProcessingFlags::RXGainCorrectedFlag::get() {
    return this->rXGainCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::RXGainCorrectedFlag::set(System::Boolean value) {
    this->rXGainCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::DRAChannelSyncFlag::get() {
    return this->dRAChannelSyncFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::DRAChannelSyncFlag::set(System::Boolean value) {
    this->dRAChannelSyncFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::DRAChannelDemixingPerformedFlag::get() {
    return this->dRAChannelDemixingPerformedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::DRAChannelDemixingPerformedFlag::set(System::Boolean value) {
    this->dRAChannelDemixingPerformedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::hybridCouplerCorrectedFlag::get() {
    return this->hybridCouplerCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::hybridCouplerCorrectedFlag::set(System::Boolean value) {
    this->hybridCouplerCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::chirpDriftCorrectedFlag::get() {
    return this->chirpDriftCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::chirpDriftCorrectedFlag::set(System::Boolean value) {
    this->chirpDriftCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::chirpReplicaUsedFlag::get() {
    return this->chirpReplicaUsedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::chirpReplicaUsedFlag::set(System::Boolean value) {
    this->chirpReplicaUsedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::geometricDopplerUsedFlag::get() {
    return this->geometricDopplerUsedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::geometricDopplerUsedFlag::set(System::Boolean value) {
    this->geometricDopplerUsedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::noiseCorrectedFlag::get() {
    return this->noiseCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::noiseCorrectedFlag::set(System::Boolean value) {
    this->noiseCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::rangeSpreadingLossCorrectedFlag::get() {
    return this->rangeSpreadingLossCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::rangeSpreadingLossCorrectedFlag::set(System::Boolean value) {
    this->rangeSpreadingLossCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::scanSARBeamCorrectedFlag::get() {
    return this->scanSARBeamCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::scanSARBeamCorrectedFlag::set(System::Boolean value) {
    this->scanSARBeamCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::spotLightBeamCorrectedFlag::get() {
    return this->spotLightBeamCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::spotLightBeamCorrectedFlag::set(System::Boolean value) {
    this->spotLightBeamCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::azimuthPatternCorrectedFlag::get() {
    return this->azimuthPatternCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::azimuthPatternCorrectedFlag::set(System::Boolean value) {
    this->azimuthPatternCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::elevationPatternCorrectedFlag::get() {
    return this->elevationPatternCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::elevationPatternCorrectedFlag::set(System::Boolean value) {
    this->elevationPatternCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::polarisationCorrectedFlag::get() {
    return this->polarisationCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::polarisationCorrectedFlag::set(System::Boolean value) {
    this->polarisationCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::detectedFlag::get() {
    return this->detectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::detectedFlag::set(System::Boolean value) {
    this->detectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::multiLookedFlag::get() {
    return this->multiLookedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::multiLookedFlag::set(System::Boolean value) {
    this->multiLookedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::propagationEffectsCorrectedFlag::get() {
    return this->propagationEffectsCorrectedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::propagationEffectsCorrectedFlag::set(System::Boolean value) {
    this->propagationEffectsCorrectedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::geocodedFlag::get() {
    return this->geocodedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::geocodedFlag::set(System::Boolean value) {
    this->geocodedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::incidenceAngleMaskGeneratedFlag::get() {
    return this->incidenceAngleMaskGeneratedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::incidenceAngleMaskGeneratedFlag::set(System::Boolean value) {
    this->incidenceAngleMaskGeneratedFlagField = value;
}

inline System::Boolean level1ProductProcessingProcessingFlags::nominalProcessingPerformedFlag::get() {
    return this->nominalProcessingPerformedFlagField;
}
inline System::Void level1ProductProcessingProcessingFlags::nominalProcessingPerformedFlag::set(System::Boolean value) {
    this->nominalProcessingPerformedFlagField = value;
}


inline level1ProductInstrumentInstrumentInfoCoordinateType level1ProductInstrument::instrumentInfoCoordinateType::get() {
    return this->instrumentInfoCoordinateTypeField;
}
inline System::Void level1ProductInstrument::instrumentInfoCoordinateType::set(level1ProductInstrumentInstrumentInfoCoordinateType value) {
    this->instrumentInfoCoordinateTypeField = value;
}

inline level1ProductInstrumentRadarParameters^  level1ProductInstrument::radarParameters::get() {
    return this->radarParametersField;
}
inline System::Void level1ProductInstrument::radarParameters::set(level1ProductInstrumentRadarParameters^  value) {
    this->radarParametersField = value;
}

inline cli::array< level1ProductInstrumentSettings^  >^  level1ProductInstrument::settings::get() {
    return this->settingsField;
}
inline System::Void level1ProductInstrument::settings::set(cli::array< level1ProductInstrumentSettings^  >^  value) {
    this->settingsField = value;
}


inline System::Double level1ProductInstrumentRadarParameters::centerFrequency::get() {
    return this->centerFrequencyField;
}
inline System::Void level1ProductInstrumentRadarParameters::centerFrequency::set(System::Double value) {
    this->centerFrequencyField = value;
}


inline polLayer level1ProductInstrumentSettings::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductInstrumentSettings::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline level1ProductInstrumentSettingsDRAoffset level1ProductInstrumentSettings::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductInstrumentSettings::DRAoffset::set(level1ProductInstrumentSettingsDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductInstrumentSettings::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductInstrumentSettings::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline System::String^  level1ProductInstrumentSettings::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductInstrumentSettings::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::Int32 level1ProductInstrumentSettings::numberOfRxGainChanges::get() {
    return this->numberOfRxGainChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfRxGainChanges::set(System::Int32 value) {
    this->numberOfRxGainChangesField = value;
}

inline cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  level1ProductInstrumentSettings::rxGainSetting::get() {
    return this->rxGainSettingField;
}
inline System::Void level1ProductInstrumentSettings::rxGainSetting::set(cli::array< level1ProductInstrumentSettingsRxGainSetting^  >^  value) {
    this->rxGainSettingField = value;
}

inline System::String^  level1ProductInstrumentSettings::quantisationID::get() {
    return this->quantisationIDField;
}
inline System::Void level1ProductInstrumentSettings::quantisationID::set(System::String^  value) {
    this->quantisationIDField = value;
}

inline level1ProductInstrumentSettingsQuantisationControl^  level1ProductInstrumentSettings::quantisationControl::get() {
    return this->quantisationControlField;
}
inline System::Void level1ProductInstrumentSettings::quantisationControl::set(level1ProductInstrumentSettingsQuantisationControl^  value) {
    this->quantisationControlField = value;
}

inline level1ProductInstrumentSettingsRxBandwidth^  level1ProductInstrumentSettings::rxBandwidth::get() {
    return this->rxBandwidthField;
}
inline System::Void level1ProductInstrumentSettings::rxBandwidth::set(level1ProductInstrumentSettingsRxBandwidth^  value) {
    this->rxBandwidthField = value;
}

inline level1ProductInstrumentSettingsRSF^  level1ProductInstrumentSettings::RSF::get() {
    return this->rSFField;
}
inline System::Void level1ProductInstrumentSettings::RSF::set(level1ProductInstrumentSettingsRSF^  value) {
    this->rSFField = value;
}

inline System::Int32 level1ProductInstrumentSettings::numberOfPRFChanges::get() {
    return this->numberOfPRFChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfPRFChanges::set(System::Int32 value) {
    this->numberOfPRFChangesField = value;
}

inline System::Int32 level1ProductInstrumentSettings::numberOfEchoWindowPositionChanges::get() {
    return this->numberOfEchoWindowPositionChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfEchoWindowPositionChanges::set(System::Int32 value) {
    this->numberOfEchoWindowPositionChangesField = value;
}

inline System::Int32 level1ProductInstrumentSettings::numberOfEchoWindowLengthChanges::get() {
    return this->numberOfEchoWindowLengthChangesField;
}
inline System::Void level1ProductInstrumentSettings::numberOfEchoWindowLengthChanges::set(System::Int32 value) {
    this->numberOfEchoWindowLengthChangesField = value;
}

inline System::Int32 level1ProductInstrumentSettings::numberOfSettingRecords::get() {
    return this->numberOfSettingRecordsField;
}
inline System::Void level1ProductInstrumentSettings::numberOfSettingRecords::set(System::Int32 value) {
    this->numberOfSettingRecordsField = value;
}

inline cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  level1ProductInstrumentSettings::settingRecord::get() {
    return this->settingRecordField;
}
inline System::Void level1ProductInstrumentSettings::settingRecord::set(cli::array< level1ProductInstrumentSettingsSettingRecord^  >^  value) {
    this->settingRecordField = value;
}


inline System::DateTime level1ProductInstrumentSettingsRxGainSetting::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSetting::startTimeUTC::set(System::DateTime value) {
    this->startTimeUTCField = value;
}

inline System::DateTime level1ProductInstrumentSettingsRxGainSetting::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSetting::stopTimeUTC::set(System::DateTime value) {
    this->stopTimeUTCField = value;
}

inline level1ProductInstrumentSettingsRxGainSettingRxGain^  level1ProductInstrumentSettingsRxGainSetting::rxGain::get() {
    return this->rxGainField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSetting::rxGain::set(level1ProductInstrumentSettingsRxGainSettingRxGain^  value) {
    this->rxGainField = value;
}


inline System::String^  level1ProductInstrumentSettingsRxGainSettingRxGain::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSettingRxGain::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::Single level1ProductInstrumentSettingsRxGainSettingRxGain::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsRxGainSettingRxGain::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsQuantisationControl::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsQuantisationControl::Value::set(System::String^  value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsRxBandwidth::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsRxBandwidth::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::Double level1ProductInstrumentSettingsRxBandwidth::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsRxBandwidth::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsRSF::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsRSF::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::Double level1ProductInstrumentSettingsRSF::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsRSF::Value::set(System::Double value) {
    this->valueField = value;
}


inline level1ProductInstrumentSettingsSettingRecordDataSegment^  level1ProductInstrumentSettingsSettingRecord::dataSegment::get() {
    return this->dataSegmentField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::dataSegment::set(level1ProductInstrumentSettingsSettingRecordDataSegment^  value) {
    this->dataSegmentField = value;
}

inline level1ProductInstrumentSettingsSettingRecordPRF^  level1ProductInstrumentSettingsSettingRecord::PRF::get() {
    return this->pRFField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::PRF::set(level1ProductInstrumentSettingsSettingRecordPRF^  value) {
    this->pRFField = value;
}

inline level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  level1ProductInstrumentSettingsSettingRecord::echoWindowPosition::get() {
    return this->echoWindowPositionField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::echoWindowPosition::set(level1ProductInstrumentSettingsSettingRecordEchoWindowPosition^  value) {
    this->echoWindowPositionField = value;
}

inline level1ProductInstrumentSettingsSettingRecordEchowindowLength^  level1ProductInstrumentSettingsSettingRecord::echowindowLength::get() {
    return this->echowindowLengthField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::echowindowLength::set(level1ProductInstrumentSettingsSettingRecordEchowindowLength^  value) {
    this->echowindowLengthField = value;
}

inline System::String^  level1ProductInstrumentSettingsSettingRecord::pulseType::get() {
    return this->pulseTypeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::pulseType::set(System::String^  value) {
    this->pulseTypeField = value;
}

inline System::Int32 level1ProductInstrumentSettingsSettingRecord::echoIndex::get() {
    return this->echoIndexField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecord::echoIndex::set(System::Int32 value) {
    this->echoIndexField = value;
}


inline System::DateTime level1ProductInstrumentSettingsSettingRecordDataSegment::startTimeUTC::get() {
    return this->startTimeUTCField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordDataSegment::startTimeUTC::set(System::DateTime value) {
    this->startTimeUTCField = value;
}

inline System::DateTime level1ProductInstrumentSettingsSettingRecordDataSegment::stopTimeUTC::get() {
    return this->stopTimeUTCField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordDataSegment::stopTimeUTC::set(System::DateTime value) {
    this->stopTimeUTCField = value;
}

inline System::Int32 level1ProductInstrumentSettingsSettingRecordDataSegment::numberOfRows::get() {
    return this->numberOfRowsField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordDataSegment::numberOfRows::set(System::Int32 value) {
    this->numberOfRowsField = value;
}

inline System::Int32 level1ProductInstrumentSettingsSettingRecordDataSegment::segmentID::get() {
    return this->segmentIDField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordDataSegment::segmentID::set(System::Int32 value) {
    this->segmentIDField = value;
}


inline System::String^  level1ProductInstrumentSettingsSettingRecordPRF::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordPRF::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::Double level1ProductInstrumentSettingsSettingRecordPRF::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordPRF::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::Double level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchoWindowPosition::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::String^  level1ProductInstrumentSettingsSettingRecordEchowindowLength::code::get() {
    return this->codeField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchowindowLength::code::set(System::String^  value) {
    this->codeField = value;
}

inline System::Double level1ProductInstrumentSettingsSettingRecordEchowindowLength::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductInstrumentSettingsSettingRecordEchowindowLength::Value::set(System::Double value) {
    this->valueField = value;
}


inline level1ProductCalibrationCalibrationData^  level1ProductCalibration::calibrationData::get() {
    return this->calibrationDataField;
}
inline System::Void level1ProductCalibration::calibrationData::set(level1ProductCalibrationCalibrationData^  value) {
    this->calibrationDataField = value;
}

inline level1ProductCalibrationNominalGeometricPerformance^  level1ProductCalibration::nominalGeometricPerformance::get() {
    return this->nominalGeometricPerformanceField;
}
inline System::Void level1ProductCalibration::nominalGeometricPerformance::set(level1ProductCalibrationNominalGeometricPerformance^  value) {
    this->nominalGeometricPerformanceField = value;
}

inline cli::array< level1ProductCalibrationCalibrationConstant^  >^  level1ProductCalibration::calibrationConstant::get() {
    return this->calibrationConstantField;
}
inline System::Void level1ProductCalibration::calibrationConstant::set(cli::array< level1ProductCalibrationCalibrationConstant^  >^  value) {
    this->calibrationConstantField = value;
}


inline level1ProductCalibrationCalibrationDataRadiometricDEMID^  level1ProductCalibrationCalibrationData::radiometricDEMID::get() {
    return this->radiometricDEMIDField;
}
inline System::Void level1ProductCalibrationCalibrationData::radiometricDEMID::set(level1ProductCalibrationCalibrationDataRadiometricDEMID^  value) {
    this->radiometricDEMIDField = value;
}

inline System::Int32 level1ProductCalibrationCalibrationData::numberOfAntennaPatterns::get() {
    return this->numberOfAntennaPatternsField;
}
inline System::Void level1ProductCalibrationCalibrationData::numberOfAntennaPatterns::set(System::Int32 value) {
    this->numberOfAntennaPatternsField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  level1ProductCalibrationCalibrationData::antennaPattern::get() {
    return this->antennaPatternField;
}
inline System::Void level1ProductCalibrationCalibrationData::antennaPattern::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPattern^  >^  value) {
    this->antennaPatternField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  level1ProductCalibrationCalibrationData::calibrationInfoAndInstrumentCharacteristics::get() {
    return this->calibrationInfoAndInstrumentCharacteristicsField;
}
inline System::Void level1ProductCalibrationCalibrationData::calibrationInfoAndInstrumentCharacteristics::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics^  value) {
    this->calibrationInfoAndInstrumentCharacteristicsField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataRadiometricDEMID::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataRadiometricDEMID::Value::set(System::String^  value) {
    this->valueField = value;
}


inline polLayer level1ProductCalibrationCalibrationDataAntennaPattern::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline level1ProductCalibrationCalibrationDataAntennaPatternDRAoffset level1ProductCalibrationCalibrationDataAntennaPattern::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::DRAoffset::set(level1ProductCalibrationCalibrationDataAntennaPatternDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductCalibrationCalibrationDataAntennaPattern::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  level1ProductCalibrationCalibrationDataAntennaPattern::elevationPattern::get() {
    return this->elevationPatternField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::elevationPattern::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern^  >^  value) {
    this->elevationPatternField = value;
}

inline level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  level1ProductCalibrationCalibrationDataAntennaPattern::azimuthPattern::get() {
    return this->azimuthPatternField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::azimuthPattern::set(level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern^  value) {
    this->azimuthPatternField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataAntennaPattern::azimuthSteeringAngle::get() {
    return this->azimuthSteeringAngleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::azimuthSteeringAngle::set(System::Single value) {
    this->azimuthSteeringAngleField = value;
}

inline level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  level1ProductCalibrationCalibrationDataAntennaPattern::elevationLookAngles::get() {
    return this->elevationLookAnglesField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::elevationLookAngles::set(level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles^  value) {
    this->elevationLookAnglesField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  level1ProductCalibrationCalibrationDataAntennaPattern::beamPointingVector::get() {
    return this->beamPointingVectorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPattern::beamPointingVector::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector^  >^  value) {
    this->beamPointingVectorField = value;
}


inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::referenceGain::get() {
    return this->referenceGainField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::referenceGain::set(System::Single value) {
    this->referenceGainField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt^  >^  level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::gainExt::get() {
    return this->gainExtField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::gainExt::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt^  >^  value) {
    this->gainExtField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::description::get() {
    return this->descriptionField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::description::set(System::String^  value) {
    this->descriptionField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPattern::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt::angle::get() {
    return this->angleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt::angle::set(System::Single value) {
    this->angleField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationPatternGainExt::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::referenceGain::get() {
    return this->referenceGainField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::referenceGain::set(System::Single value) {
    this->referenceGainField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt^  >^  level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::gainExt::get() {
    return this->gainExtField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::gainExt::set(cli::array< level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt^  >^  value) {
    this->gainExtField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::description::get() {
    return this->descriptionField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::description::set(System::String^  value) {
    this->descriptionField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::azimuthBeamID::get() {
    return this->azimuthBeamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPattern::azimuthBeamID::set(System::String^  value) {
    this->azimuthBeamIDField = value;
}


inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt::angle::get() {
    return this->angleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt::angle::set(System::Single value) {
    this->angleField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternAzimuthPatternGainExt::Value::set(System::Single value) {
    this->valueField = value;
}


inline level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMin::get() {
    return this->coverageRegionMinField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMin::set(level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin^  value) {
    this->coverageRegionMinField = value;
}

inline level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMax::get() {
    return this->coverageRegionMaxField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::coverageRegionMax::set(level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax^  value) {
    this->coverageRegionMaxField = value;
}

inline System::Boolean level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::fullPerformance::get() {
    return this->fullPerformanceField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAngles::fullPerformance::set(System::Boolean value) {
    this->fullPerformanceField = value;
}


inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::incidenceAngle::set(System::Single value) {
    this->incidenceAngleField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMin::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::incidenceAngle::get() {
    return this->incidenceAngleField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::incidenceAngle::set(System::Single value) {
    this->incidenceAngleField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternElevationLookAnglesCoverageRegionMax::Value::set(System::Single value) {
    this->valueField = value;
}


inline level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::x::get() {
    return this->xField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::x::set(level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX^  value) {
    this->xField = value;
}

inline level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::y::get() {
    return this->yField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::y::set(level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY^  value) {
    this->yField = value;
}

inline level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::z::get() {
    return this->zField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::z::set(level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ^  value) {
    this->zField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVector::beamID::set(System::String^  value) {
    this->beamIDField = value;
}


inline System::Double level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::error::get() {
    return this->errorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::error::set(System::Double value) {
    this->errorField = value;
}

inline System::Double level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorX::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::Double level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::error::get() {
    return this->errorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::error::set(System::Double value) {
    this->errorField = value;
}

inline System::Double level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorY::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::Double level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::error::get() {
    return this->errorField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::error::set(System::Double value) {
    this->errorField = value;
}

inline System::Double level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataAntennaPatternBeamPointingVectorZ::Value::set(System::Double value) {
    this->valueField = value;
}


inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::absCalFactor::get() {
    return this->absCalFactorField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::absCalFactor::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor^  >^  value) {
    this->absCalFactorField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::totalInstrumentTimeDelay::get() {
    return this->totalInstrumentTimeDelayField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::totalInstrumentTimeDelay::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay^  value) {
    this->totalInstrumentTimeDelayField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::ADCandIQCharacteristics::get() {
    return this->aDCandIQCharacteristicsField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::ADCandIQCharacteristics::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics^  >^  value) {
    this->aDCandIQCharacteristicsField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::polarimetricChannelCorrection::get() {
    return this->polarimetricChannelCorrectionField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::polarimetricChannelCorrection::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection^  value) {
    this->polarimetricChannelCorrectionField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::DRAChannelParameters::get() {
    return this->dRAChannelParametersField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristics::DRAChannelParameters::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters^  >^  value) {
    this->dRAChannelParametersField = value;
}


inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::imagingMode::get() {
    return this->imagingModeField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::imagingMode::set(System::String^  value) {
    this->imagingModeField = value;
}

inline System::String^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorPolarisationChannel level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::polarisationChannel::get() {
    return this->polarisationChannelField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::polarisationChannel::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorPolarisationChannel value) {
    this->polarisationChannelField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorLookDirection level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::lookDirection::get() {
    return this->lookDirectionField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::lookDirection::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorLookDirection value) {
    this->lookDirectionField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorAntennaMode level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::antennaMode::get() {
    return this->antennaModeField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::antennaMode::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactorAntennaMode value) {
    this->antennaModeField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsAbsCalFactor::Value::set(System::Single value) {
    this->valueField = value;
}


inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay() {
    this->instrCESystematicTimeDelayField = static_cast<System::Single>(1000);
}

inline System::Single level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::instrCESystematicTimeDelay::get() {
    return this->instrCESystematicTimeDelayField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::instrCESystematicTimeDelay::set(System::Single value) {
    this->instrCESystematicTimeDelayField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::internalDelay::get() {
    return this->internalDelayField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelay::internalDelay::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay^  >^  value) {
    this->internalDelayField = value;
}


inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelayPolarisationChannel level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::polarisationChannel::get() {
    return this->polarisationChannelField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::polarisationChannel::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelayPolarisationChannel value) {
    this->polarisationChannelField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsTotalInstrumentTimeDelayInternalDelay::Value::set(System::Single value) {
    this->valueField = value;
}


inline System::Double level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::bias::get() {
    return this->biasField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::bias::set(System::Double value) {
    this->biasField = value;
}

inline System::Double level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::imbalance::get() {
    return this->imbalanceField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::imbalance::set(System::Double value) {
    this->imbalanceField = value;
}

inline System::Double level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::nonorthogonality::get() {
    return this->nonorthogonalityField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::nonorthogonality::set(System::Double value) {
    this->nonorthogonalityField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristicsChannel level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::channel::get() {
    return this->channelField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristics::channel::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsIQCharacteristicsChannel value) {
    this->channelField = value;
}


inline System::Single level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection::channelImbalance::get() {
    return this->channelImbalanceField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection::channelImbalance::set(System::Single value) {
    this->channelImbalanceField = value;
}

inline cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk^  >^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection::crosstalk::get() {
    return this->crosstalkField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrection::crosstalk::set(cli::array< level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk^  >^  value) {
    this->crosstalkField = value;
}


inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalkPolarisation level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk::polarisation::get() {
    return this->polarisationField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk::polarisation::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalkPolarisation value) {
    this->polarisationField = value;
}

inline System::Single level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsPolarimetricChannelCorrectionCrosstalk::Value::set(System::Single value) {
    this->valueField = value;
}


inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters::draParameters::get() {
    return this->draParametersField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters::draParameters::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters^  value) {
    this->draParametersField = value;
}

inline System::UInt64 level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters::num::get() {
    return this->numField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParameters::num::set(System::UInt64 value) {
    this->numField = value;
}


inline System::Double level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters::sumToDiffDelay::get() {
    return this->sumToDiffDelayField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters::sumToDiffDelay::set(System::Double value) {
    this->sumToDiffDelayField = value;
}

inline level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters::transformationMatrix::get() {
    return this->transformationMatrixField;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParameters::transformationMatrix::set(level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix^  value) {
    this->transformationMatrixField = value;
}


inline System::Double level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::k1::get() {
    return this->k1Field;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::k1::set(System::Double value) {
    this->k1Field = value;
}

inline dblComplex^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_1_1::get() {
    return this->h_1_1Field;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_1_1::set(dblComplex^  value) {
    this->h_1_1Field = value;
}

inline dblComplex^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_1_2::get() {
    return this->h_1_2Field;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_1_2::set(dblComplex^  value) {
    this->h_1_2Field = value;
}

inline dblComplex^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_2_1::get() {
    return this->h_2_1Field;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_2_1::set(dblComplex^  value) {
    this->h_2_1Field = value;
}

inline dblComplex^  level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_2_2::get() {
    return this->h_2_2Field;
}
inline System::Void level1ProductCalibrationCalibrationDataCalibrationInfoAndInstrumentCharacteristicsDRAChannelParametersDraParametersTransformationMatrix::h_2_2::set(dblComplex^  value) {
    this->h_2_2Field = value;
}


inline System::Single level1ProductCalibrationNominalGeometricPerformance::azimuthRes::get() {
    return this->azimuthResField;
}
inline System::Void level1ProductCalibrationNominalGeometricPerformance::azimuthRes::set(System::Single value) {
    this->azimuthResField = value;
}

inline System::Single level1ProductCalibrationNominalGeometricPerformance::slantRangeRes::get() {
    return this->slantRangeResField;
}
inline System::Void level1ProductCalibrationNominalGeometricPerformance::slantRangeRes::set(System::Single value) {
    this->slantRangeResField = value;
}

inline System::Single level1ProductCalibrationNominalGeometricPerformance::nominalSwathWidth::get() {
    return this->nominalSwathWidthField;
}
inline System::Void level1ProductCalibrationNominalGeometricPerformance::nominalSwathWidth::set(System::Single value) {
    this->nominalSwathWidthField = value;
}


inline polLayer level1ProductCalibrationCalibrationConstant::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline System::Boolean level1ProductCalibrationCalibrationConstant::polLayerSpecified::get() {
    return this->polLayerFieldSpecified;
}
inline System::Void level1ProductCalibrationCalibrationConstant::polLayerSpecified::set(System::Boolean value) {
    this->polLayerFieldSpecified = value;
}

inline System::String^  level1ProductCalibrationCalibrationConstant::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductCalibrationCalibrationConstantDRAoffset level1ProductCalibrationCalibrationConstant::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::DRAoffset::set(level1ProductCalibrationCalibrationConstantDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductCalibrationCalibrationConstant::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductCalibrationCalibrationConstant::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline level1ProductCalibrationCalibrationConstantCalFactor^  level1ProductCalibrationCalibrationConstant::calFactor::get() {
    return this->calFactorField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::calFactor::set(level1ProductCalibrationCalibrationConstantCalFactor^  value) {
    this->calFactorField = value;
}

inline System::String^  level1ProductCalibrationCalibrationConstant::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductCalibrationCalibrationConstant::layerIndex::set(System::String^  value) {
    this->layerIndexField = value;
}


inline System::Double level1ProductCalibrationCalibrationConstantCalFactor::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductCalibrationCalibrationConstantCalFactor::Value::set(System::Double value) {
    this->valueField = value;
}


inline polLayer level1ProductNoise::PolLayer::get() {
    return this->PolLayerField;
}
inline System::Void level1ProductNoise::PolLayer::set(polLayer value) {
    this->PolLayerField = value;
}

inline System::String^  level1ProductNoise::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductNoise::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductNoiseDRAoffset level1ProductNoise::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductNoise::DRAoffset::set(level1ProductNoiseDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductNoise::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductNoise::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
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

inline System::Int32 level1ProductNoise::numberOfNoiseRecords::get() {
    return this->numberOfNoiseRecordsField;
}
inline System::Void level1ProductNoise::numberOfNoiseRecords::set(System::Int32 value) {
    this->numberOfNoiseRecordsField = value;
}

inline System::Single level1ProductNoise::averageNoiseRecordAzimuthSpacing::get() {
    return this->averageNoiseRecordAzimuthSpacingField;
}
inline System::Void level1ProductNoise::averageNoiseRecordAzimuthSpacing::set(System::Single value) {
    this->averageNoiseRecordAzimuthSpacingField = value;
}

inline cli::array< level1ProductNoiseImageNoise^  >^  level1ProductNoise::imageNoise::get() {
    return this->imageNoiseField;
}
inline System::Void level1ProductNoise::imageNoise::set(cli::array< level1ProductNoiseImageNoise^  >^  value) {
    this->imageNoiseField = value;
}

inline System::Int32 level1ProductNoise::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductNoise::layerIndex::set(System::Int32 value) {
    this->layerIndexField = value;
}


inline System::DateTime level1ProductNoiseImageNoise::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductNoiseImageNoise::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline cli::array< dblPolynom^  >^  level1ProductNoiseImageNoise::noiseEstimate::get() {
    return this->noiseEstimateField;
}
inline System::Void level1ProductNoiseImageNoise::noiseEstimate::set(cli::array< dblPolynom^  >^  value) {
    this->noiseEstimateField = value;
}

inline System::Single level1ProductNoiseImageNoise::noiseEstimateConfidence::get() {
    return this->noiseEstimateConfidenceField;
}
inline System::Void level1ProductNoiseImageNoise::noiseEstimateConfidence::set(System::Single value) {
    this->noiseEstimateConfidenceField = value;
}


inline level1ProductPlatformReferenceData^  level1ProductPlatform::referenceData::get() {
    return this->referenceDataField;
}
inline System::Void level1ProductPlatform::referenceData::set(level1ProductPlatformReferenceData^  value) {
    this->referenceDataField = value;
}

inline level1ProductPlatformOrbit^  level1ProductPlatform::orbit::get() {
    return this->orbitField;
}
inline System::Void level1ProductPlatform::orbit::set(level1ProductPlatformOrbit^  value) {
    this->orbitField = value;
}

inline level1ProductPlatformAttitude^  level1ProductPlatform::attitude::get() {
    return this->attitudeField;
}
inline System::Void level1ProductPlatform::attitude::set(level1ProductPlatformAttitude^  value) {
    this->attitudeField = value;
}


inline System::Double level1ProductPlatformReferenceData::SARAntennaMechanicalBoresight::get() {
    return this->sARAntennaMechanicalBoresightField;
}
inline System::Void level1ProductPlatformReferenceData::SARAntennaMechanicalBoresight::set(System::Double value) {
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


inline level1ProductPlatformReferenceDataSARAntennaPositionDRAoffset level1ProductPlatformReferenceDataSARAntennaPosition::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductPlatformReferenceDataSARAntennaPosition::DRAoffset::set(level1ProductPlatformReferenceDataSARAntennaPositionDRAoffset value) {
    this->dRAoffsetField = value;
}


inline level1ProductPlatformReferenceDataGPSAntennaPositionGPSreceiver level1ProductPlatformReferenceDataGPSAntennaPosition::GPSreceiver::get() {
    return this->gPSreceiverField;
}
inline System::Void level1ProductPlatformReferenceDataGPSAntennaPosition::GPSreceiver::set(level1ProductPlatformReferenceDataGPSAntennaPositionGPSreceiver value) {
    this->gPSreceiverField = value;
}

inline level1ProductPlatformReferenceDataGPSAntennaPositionUnit level1ProductPlatformReferenceDataGPSAntennaPosition::unit::get() {
    return this->unitField;
}
inline System::Void level1ProductPlatformReferenceDataGPSAntennaPosition::unit::set(level1ProductPlatformReferenceDataGPSAntennaPositionUnit value) {
    this->unitField = value;
}


inline level1ProductPlatformOrbitOrbitHeader^  level1ProductPlatformOrbit::orbitHeader::get() {
    return this->orbitHeaderField;
}
inline System::Void level1ProductPlatformOrbit::orbitHeader::set(level1ProductPlatformOrbitOrbitHeader^  value) {
    this->orbitHeaderField = value;
}

inline cli::array< level1ProductPlatformOrbitStateVec^  >^  level1ProductPlatformOrbit::stateVec::get() {
    return this->stateVecField;
}
inline System::Void level1ProductPlatformOrbit::stateVec::set(cli::array< level1ProductPlatformOrbitStateVec^  >^  value) {
    this->stateVecField = value;
}


inline level1ProductPlatformOrbitOrbitHeaderGenerationSystem^  level1ProductPlatformOrbitOrbitHeader::generationSystem::get() {
    return this->generationSystemField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::generationSystem::set(level1ProductPlatformOrbitOrbitHeaderGenerationSystem^  value) {
    this->generationSystemField = value;
}

inline level1ProductPlatformOrbitOrbitHeaderSensor level1ProductPlatformOrbitOrbitHeader::sensor::get() {
    return this->sensorField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::sensor::set(level1ProductPlatformOrbitOrbitHeaderSensor value) {
    this->sensorField = value;
}

inline level1ProductPlatformOrbitOrbitHeaderAccuracy level1ProductPlatformOrbitOrbitHeader::accuracy::get() {
    return this->accuracyField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::accuracy::set(level1ProductPlatformOrbitOrbitHeaderAccuracy value) {
    this->accuracyField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::stateVectorRefFrame::get() {
    return this->stateVectorRefFrameField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::stateVectorRefFrame::set(System::String^  value) {
    this->stateVectorRefFrameField = value;
}

inline level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom^  level1ProductPlatformOrbitOrbitHeader::coordSystemTransfrom::get() {
    return this->coordSystemTransfromField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::coordSystemTransfrom::set(level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom^  value) {
    this->coordSystemTransfromField = value;
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

inline System::UInt64 level1ProductPlatformOrbitOrbitHeader::numStateVectors::get() {
    return this->numStateVectorsField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::numStateVectors::set(System::UInt64 value) {
    this->numStateVectorsField = value;
}

inline level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  level1ProductPlatformOrbitOrbitHeader::firstStateTime::get() {
    return this->firstStateTimeField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::firstStateTime::set(level1ProductPlatformOrbitOrbitHeaderFirstStateTime^  value) {
    this->firstStateTimeField = value;
}

inline level1ProductPlatformOrbitOrbitHeaderLastStateTime^  level1ProductPlatformOrbitOrbitHeader::lastStateTime::get() {
    return this->lastStateTimeField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::lastStateTime::set(level1ProductPlatformOrbitOrbitHeaderLastStateTime^  value) {
    this->lastStateTimeField = value;
}

inline System::Double level1ProductPlatformOrbitOrbitHeader::stateVectorTimeSpacing::get() {
    return this->stateVectorTimeSpacingField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::stateVectorTimeSpacing::set(System::Double value) {
    this->stateVectorTimeSpacingField = value;
}

inline System::Single level1ProductPlatformOrbitOrbitHeader::positionAccuracyMargin::get() {
    return this->positionAccuracyMarginField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::positionAccuracyMargin::set(System::Single value) {
    this->positionAccuracyMarginField = value;
}

inline System::Single level1ProductPlatformOrbitOrbitHeader::velocityAccuracyMargin::get() {
    return this->velocityAccuracyMarginField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::velocityAccuracyMargin::set(System::Single value) {
    this->velocityAccuracyMarginField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeader::recProcessingTechnique::get() {
    return this->recProcessingTechniqueField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::recProcessingTechnique::set(System::String^  value) {
    this->recProcessingTechniqueField = value;
}

inline System::Int32 level1ProductPlatformOrbitOrbitHeader::recPolDegree::get() {
    return this->recPolDegreeField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::recPolDegree::set(System::Int32 value) {
    this->recPolDegreeField = value;
}

inline System::Int32 level1ProductPlatformOrbitOrbitHeader::dataGapIndicator::get() {
    return this->dataGapIndicatorField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeader::dataGapIndicator::set(System::Int32 value) {
    this->dataGapIndicatorField = value;
}


inline System::String^  level1ProductPlatformOrbitOrbitHeaderGenerationSystem::version::get() {
    return this->versionField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderGenerationSystem::version::set(System::String^  value) {
    this->versionField = value;
}

inline System::String^  level1ProductPlatformOrbitOrbitHeaderGenerationSystem::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderGenerationSystem::Value::set(System::String^  value) {
    this->valueField = value;
}


inline cli::array< level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff^  >^  level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom::rotMatrixCoeff::get() {
    return this->rotMatrixCoeffField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom::rotMatrixCoeff::set(cli::array< level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff^  >^  value) {
    this->rotMatrixCoeffField = value;
}

inline dblVector^  level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom::shift::get() {
    return this->shiftField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfrom::shift::set(dblVector^  value) {
    this->shiftField = value;
}


inline System::Int32 level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff::i::get() {
    return this->iField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff::i::set(System::Int32 value) {
    this->iField = value;
}

inline System::Int32 level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff::j::get() {
    return this->jField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff::j::set(System::Int32 value) {
    this->jField = value;
}

inline System::Double level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderCoordSystemTransfromRotMatrixCoeff::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::DateTime level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeUTC::get() {
    return this->firstStateTimeUTCField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeUTC::set(System::DateTime value) {
    this->firstStateTimeUTCField = value;
}

inline System::UInt32 level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPS::get() {
    return this->firstStateTimeGPSField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPS::set(System::UInt32 value) {
    this->firstStateTimeGPSField = value;
}

inline System::Double level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPSFraction::get() {
    return this->firstStateTimeGPSFractionField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderFirstStateTime::firstStateTimeGPSFraction::set(System::Double value) {
    this->firstStateTimeGPSFractionField = value;
}


inline System::DateTime level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeUTC::get() {
    return this->lastStateTimeUTCField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeUTC::set(System::DateTime value) {
    this->lastStateTimeUTCField = value;
}

inline System::UInt32 level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPS::get() {
    return this->lastStateTimeGPSField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPS::set(System::UInt32 value) {
    this->lastStateTimeGPSField = value;
}

inline System::Double level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPSFraction::get() {
    return this->lastStateTimeGPSFractionField;
}
inline System::Void level1ProductPlatformOrbitOrbitHeaderLastStateTime::lastStateTimeGPSFraction::set(System::Double value) {
    this->lastStateTimeGPSFractionField = value;
}


inline System::DateTime level1ProductPlatformOrbitStateVec::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductPlatformOrbitStateVec::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline System::UInt64 level1ProductPlatformOrbitStateVec::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductPlatformOrbitStateVec::timeGPS::set(System::UInt64 value) {
    this->timeGPSField = value;
}

inline System::Double level1ProductPlatformOrbitStateVec::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductPlatformOrbitStateVec::timeGPSFraction::set(System::Double value) {
    this->timeGPSFractionField = value;
}

inline System::Double level1ProductPlatformOrbitStateVec::posX::get() {
    return this->posXField;
}
inline System::Void level1ProductPlatformOrbitStateVec::posX::set(System::Double value) {
    this->posXField = value;
}

inline System::Double level1ProductPlatformOrbitStateVec::posY::get() {
    return this->posYField;
}
inline System::Void level1ProductPlatformOrbitStateVec::posY::set(System::Double value) {
    this->posYField = value;
}

inline System::Double level1ProductPlatformOrbitStateVec::posZ::get() {
    return this->posZField;
}
inline System::Void level1ProductPlatformOrbitStateVec::posZ::set(System::Double value) {
    this->posZField = value;
}

inline System::Double level1ProductPlatformOrbitStateVec::velX::get() {
    return this->velXField;
}
inline System::Void level1ProductPlatformOrbitStateVec::velX::set(System::Double value) {
    this->velXField = value;
}

inline System::Double level1ProductPlatformOrbitStateVec::velY::get() {
    return this->velYField;
}
inline System::Void level1ProductPlatformOrbitStateVec::velY::set(System::Double value) {
    this->velYField = value;
}

inline System::Double level1ProductPlatformOrbitStateVec::velZ::get() {
    return this->velZField;
}
inline System::Void level1ProductPlatformOrbitStateVec::velZ::set(System::Double value) {
    this->velZField = value;
}

inline System::UInt64 level1ProductPlatformOrbitStateVec::num::get() {
    return this->numField;
}
inline System::Void level1ProductPlatformOrbitStateVec::num::set(System::UInt64 value) {
    this->numField = value;
}

inline level1ProductPlatformOrbitStateVecManeuver level1ProductPlatformOrbitStateVec::maneuver::get() {
    return this->maneuverField;
}
inline System::Void level1ProductPlatformOrbitStateVec::maneuver::set(level1ProductPlatformOrbitStateVecManeuver value) {
    this->maneuverField = value;
}

inline System::Byte level1ProductPlatformOrbitStateVec::qualInd::get() {
    return this->qualIndField;
}
inline System::Void level1ProductPlatformOrbitStateVec::qualInd::set(System::Byte value) {
    this->qualIndField = value;
}


inline level1ProductPlatformAttitudeAttitudeHeader^  level1ProductPlatformAttitude::attitudeHeader::get() {
    return this->attitudeHeaderField;
}
inline System::Void level1ProductPlatformAttitude::attitudeHeader::set(level1ProductPlatformAttitudeAttitudeHeader^  value) {
    this->attitudeHeaderField = value;
}

inline cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  level1ProductPlatformAttitude::attitudeData::get() {
    return this->attitudeDataField;
}
inline System::Void level1ProductPlatformAttitude::attitudeData::set(cli::array< level1ProductPlatformAttitudeAttitudeData^  >^  value) {
    this->attitudeDataField = value;
}


inline level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem^  level1ProductPlatformAttitudeAttitudeHeader::generationSystem::get() {
    return this->generationSystemField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::generationSystem::set(level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem^  value) {
    this->generationSystemField = value;
}

inline level1ProductPlatformAttitudeAttitudeHeaderSensor level1ProductPlatformAttitudeAttitudeHeader::sensor::get() {
    return this->sensorField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::sensor::set(level1ProductPlatformAttitudeAttitudeHeaderSensor value) {
    this->sensorField = value;
}

inline level1ProductPlatformAttitudeAttitudeHeaderAccuracy level1ProductPlatformAttitudeAttitudeHeader::accuracy::get() {
    return this->accuracyField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::accuracy::set(level1ProductPlatformAttitudeAttitudeHeaderAccuracy value) {
    this->accuracyField = value;
}

inline level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  level1ProductPlatformAttitudeAttitudeHeader::attitudeDataRefFrames::get() {
    return this->attitudeDataRefFramesField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::attitudeDataRefFrames::set(level1ProductPlatformAttitudeAttitudeHeaderAttitudeDataRefFrames^  value) {
    this->attitudeDataRefFramesField = value;
}

inline level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom^  level1ProductPlatformAttitudeAttitudeHeader::coordSystemTransfrom::get() {
    return this->coordSystemTransfromField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::coordSystemTransfrom::set(level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom^  value) {
    this->coordSystemTransfromField = value;
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

inline System::UInt64 level1ProductPlatformAttitudeAttitudeHeader::numRecords::get() {
    return this->numRecordsField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::numRecords::set(System::UInt64 value) {
    this->numRecordsField = value;
}

inline level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  level1ProductPlatformAttitudeAttitudeHeader::firstAttitudeTime::get() {
    return this->firstAttitudeTimeField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::firstAttitudeTime::set(level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime^  value) {
    this->firstAttitudeTimeField = value;
}

inline level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  level1ProductPlatformAttitudeAttitudeHeader::lastAttitudeTime::get() {
    return this->lastAttitudeTimeField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::lastAttitudeTime::set(level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime^  value) {
    this->lastAttitudeTimeField = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeHeader::attitudeDataTimeSpacing::get() {
    return this->attitudeDataTimeSpacingField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::attitudeDataTimeSpacing::set(System::Double value) {
    this->attitudeDataTimeSpacingField = value;
}

inline System::Single level1ProductPlatformAttitudeAttitudeHeader::accuracyMargin::get() {
    return this->accuracyMarginField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::accuracyMargin::set(System::Single value) {
    this->accuracyMarginField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::recInterpolTechnique::get() {
    return this->recInterpolTechniqueField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::recInterpolTechnique::set(System::String^  value) {
    this->recInterpolTechniqueField = value;
}

inline System::Int32 level1ProductPlatformAttitudeAttitudeHeader::recInterpolPolDegree::get() {
    return this->recInterpolPolDegreeField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::recInterpolPolDegree::set(System::Int32 value) {
    this->recInterpolPolDegreeField = value;
}

inline System::Int32 level1ProductPlatformAttitudeAttitudeHeader::dataGapIndicator::get() {
    return this->dataGapIndicatorField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::dataGapIndicator::set(System::Int32 value) {
    this->dataGapIndicatorField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeader::steeringLawIndicator::get() {
    return this->steeringLawIndicatorField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeader::steeringLawIndicator::set(System::String^  value) {
    this->steeringLawIndicatorField = value;
}


inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem::version::get() {
    return this->versionField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem::version::set(System::String^  value) {
    this->versionField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderGenerationSystem::Value::set(System::String^  value) {
    this->valueField = value;
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


inline cli::array< level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff^  >^  level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom::rotMatrixCoeff::get() {
    return this->rotMatrixCoeffField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom::rotMatrixCoeff::set(cli::array< level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff^  >^  value) {
    this->rotMatrixCoeffField = value;
}

inline dblVector^  level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom::shift::get() {
    return this->shiftField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfrom::shift::set(dblVector^  value) {
    this->shiftField = value;
}


inline System::Int32 level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff::i::get() {
    return this->iField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff::i::set(System::Int32 value) {
    this->iField = value;
}

inline System::Int32 level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff::j::get() {
    return this->jField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff::j::set(System::Int32 value) {
    this->jField = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderCoordSystemTransfromRotMatrixCoeff::Value::set(System::Double value) {
    this->valueField = value;
}


inline System::DateTime level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeUTC::get() {
    return this->firstAttitudeTimeUTCField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeUTC::set(System::DateTime value) {
    this->firstAttitudeTimeUTCField = value;
}

inline System::UInt32 level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPS::get() {
    return this->firstAttitudeTimeGPSField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPS::set(System::UInt32 value) {
    this->firstAttitudeTimeGPSField = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPSFraction::get() {
    return this->firstAttitudeTimeGPSFractionField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderFirstAttitudeTime::firstAttitudeTimeGPSFraction::set(System::Double value) {
    this->firstAttitudeTimeGPSFractionField = value;
}


inline System::DateTime level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeUTC::get() {
    return this->lastAttitudeTimeUTCField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeUTC::set(System::DateTime value) {
    this->lastAttitudeTimeUTCField = value;
}

inline System::UInt32 level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPS::get() {
    return this->lastAttitudeTimeGPSField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPS::set(System::UInt32 value) {
    this->lastAttitudeTimeGPSField = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPSFraction::get() {
    return this->lastAttitudeTimeGPSFractionField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeHeaderLastAttitudeTime::lastAttitudeTimeGPSFraction::set(System::Double value) {
    this->lastAttitudeTimeGPSFractionField = value;
}


inline System::DateTime level1ProductPlatformAttitudeAttitudeData::timeUTC::get() {
    return this->timeUTCField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::timeUTC::set(System::DateTime value) {
    this->timeUTCField = value;
}

inline System::UInt64 level1ProductPlatformAttitudeAttitudeData::timeGPS::get() {
    return this->timeGPSField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::timeGPS::set(System::UInt64 value) {
    this->timeGPSField = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeData::timeGPSFraction::get() {
    return this->timeGPSFractionField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::timeGPSFraction::set(System::Double value) {
    this->timeGPSFractionField = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeData::q0::get() {
    return this->q0Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q0::set(System::Double value) {
    this->q0Field = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeData::q1::get() {
    return this->q1Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q1::set(System::Double value) {
    this->q1Field = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeData::q2::get() {
    return this->q2Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q2::set(System::Double value) {
    this->q2Field = value;
}

inline System::Double level1ProductPlatformAttitudeAttitudeData::q3::get() {
    return this->q3Field;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::q3::set(System::Double value) {
    this->q3Field = value;
}

inline System::UInt64 level1ProductPlatformAttitudeAttitudeData::num::get() {
    return this->numField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::num::set(System::UInt64 value) {
    this->numField = value;
}

inline level1ProductPlatformAttitudeAttitudeDataManeuver level1ProductPlatformAttitudeAttitudeData::maneuver::get() {
    return this->maneuverField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::maneuver::set(level1ProductPlatformAttitudeAttitudeDataManeuver value) {
    this->maneuverField = value;
}

inline System::Byte level1ProductPlatformAttitudeAttitudeData::qualInd::get() {
    return this->qualIndField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::qualInd::set(System::Byte value) {
    this->qualIndField = value;
}

inline System::String^  level1ProductPlatformAttitudeAttitudeData::antsteerInd::get() {
    return this->antsteerIndField;
}
inline System::Void level1ProductPlatformAttitudeAttitudeData::antsteerInd::set(System::String^  value) {
    this->antsteerIndField = value;
}


inline cli::array< level1ProductProductQualityRawDataQuality^  >^  level1ProductProductQuality::rawDataQuality::get() {
    return this->rawDataQualityField;
}
inline System::Void level1ProductProductQuality::rawDataQuality::set(cli::array< level1ProductProductQualityRawDataQuality^  >^  value) {
    this->rawDataQualityField = value;
}

inline level1ProductProductQualityAuxDataQuality^  level1ProductProductQuality::auxDataQuality::get() {
    return this->auxDataQualityField;
}
inline System::Void level1ProductProductQuality::auxDataQuality::set(level1ProductProductQualityAuxDataQuality^  value) {
    this->auxDataQualityField = value;
}

inline level1ProductProductQualityProcessingParameterQuality^  level1ProductProductQuality::processingParameterQuality::get() {
    return this->processingParameterQualityField;
}
inline System::Void level1ProductProductQuality::processingParameterQuality::set(level1ProductProductQualityProcessingParameterQuality^  value) {
    this->processingParameterQualityField = value;
}

inline cli::array< level1ProductProductQualityImageDataQuality^  >^  level1ProductProductQuality::imageDataQuality::get() {
    return this->imageDataQualityField;
}
inline System::Void level1ProductProductQuality::imageDataQuality::set(cli::array< level1ProductProductQualityImageDataQuality^  >^  value) {
    this->imageDataQualityField = value;
}

inline level1ProductProductQualityLimits^  level1ProductProductQuality::limits::get() {
    return this->limitsField;
}
inline System::Void level1ProductProductQuality::limits::set(level1ProductProductQualityLimits^  value) {
    this->limitsField = value;
}

inline System::String^  level1ProductProductQuality::instrumentStateRemark::get() {
    return this->instrumentStateRemarkField;
}
inline System::Void level1ProductProductQuality::instrumentStateRemark::set(System::String^  value) {
    this->instrumentStateRemarkField = value;
}


inline System::String^  level1ProductProductQualityRawDataQuality::instrumentChannel::get() {
    return this->instrumentChannelField;
}
inline System::Void level1ProductProductQualityRawDataQuality::instrumentChannel::set(System::String^  value) {
    this->instrumentChannelField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductQualityRawDataQuality::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline System::String^  level1ProductProductQualityRawDataQuality::polarization::get() {
    return this->polarizationField;
}
inline System::Void level1ProductProductQualityRawDataQuality::polarization::set(System::String^  value) {
    this->polarizationField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::gapSignificanceFlag::get() {
    return this->gapSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::gapSignificanceFlag::set(System::Boolean value) {
    this->gapSignificanceFlagField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::missingLinesSignificanceFlag::get() {
    return this->missingLinesSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::missingLinesSignificanceFlag::set(System::Boolean value) {
    this->missingLinesSignificanceFlagField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::ADCOverflowSignificanceFlag::get() {
    return this->aDCOverflowSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::ADCOverflowSignificanceFlag::set(System::Boolean value) {
    this->aDCOverflowSignificanceFlagField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::bitErrorsSignificanceFlag::get() {
    return this->bitErrorsSignificanceFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::bitErrorsSignificanceFlag::set(System::Boolean value) {
    this->bitErrorsSignificanceFlagField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::IBiasOutsideLimitsFlag::get() {
    return this->iBiasOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::IBiasOutsideLimitsFlag::set(System::Boolean value) {
    this->iBiasOutsideLimitsFlagField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::QBiasOutsideLimitsFlag::get() {
    return this->qBiasOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::QBiasOutsideLimitsFlag::set(System::Boolean value) {
    this->qBiasOutsideLimitsFlagField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::IQImbalanceOutsideLimitsFlag::get() {
    return this->iQImbalanceOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::IQImbalanceOutsideLimitsFlag::set(System::Boolean value) {
    this->iQImbalanceOutsideLimitsFlagField = value;
}

inline System::Boolean level1ProductProductQualityRawDataQuality::IQNonOrthogonalityOutsideLimitsFlag::get() {
    return this->iQNonOrthogonalityOutsideLimitsFlagField;
}
inline System::Void level1ProductProductQualityRawDataQuality::IQNonOrthogonalityOutsideLimitsFlag::set(System::Boolean value) {
    this->iQNonOrthogonalityOutsideLimitsFlagField = value;
}


inline System::Boolean level1ProductProductQualityAuxDataQuality::orbitDataQualityLowFlag::get() {
    return this->orbitDataQualityLowFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::orbitDataQualityLowFlag::set(System::Boolean value) {
    this->orbitDataQualityLowFlagField = value;
}

inline System::Boolean level1ProductProductQualityAuxDataQuality::attitudeDataQualityLowFlag::get() {
    return this->attitudeDataQualityLowFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::attitudeDataQualityLowFlag::set(System::Boolean value) {
    this->attitudeDataQualityLowFlagField = value;
}

inline System::Boolean level1ProductProductQualityAuxDataQuality::DEMqualityLowFlag::get() {
    return this->dEMqualityLowFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::DEMqualityLowFlag::set(System::Boolean value) {
    this->dEMqualityLowFlagField = value;
}

inline System::Boolean level1ProductProductQualityAuxDataQuality::missingAuxDataFlag::get() {
    return this->missingAuxDataFlagField;
}
inline System::Void level1ProductProductQualityAuxDataQuality::missingAuxDataFlag::set(System::Boolean value) {
    this->missingAuxDataFlagField = value;
}


inline level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  level1ProductProductQualityProcessingParameterQuality::averageDopplerCentroidInfo::get() {
    return this->averageDopplerCentroidInfoField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::averageDopplerCentroidInfo::set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo^  value) {
    this->averageDopplerCentroidInfoField = value;
}

inline System::Boolean level1ProductProductQualityProcessingParameterQuality::dopplerAmbiguityNotZeroFlag::get() {
    return this->dopplerAmbiguityNotZeroFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerAmbiguityNotZeroFlag::set(System::Boolean value) {
    this->dopplerAmbiguityNotZeroFlagField = value;
}

inline System::Boolean level1ProductProductQualityProcessingParameterQuality::dopplerInconsistencyFlag::get() {
    return this->dopplerInconsistencyFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerInconsistencyFlag::set(System::Boolean value) {
    this->dopplerInconsistencyFlagField = value;
}

inline System::Boolean level1ProductProductQualityProcessingParameterQuality::dopplerOutsideLimitsFlags::get() {
    return this->dopplerOutsideLimitsFlagsField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerOutsideLimitsFlags::set(System::Boolean value) {
    this->dopplerOutsideLimitsFlagsField = value;
}

inline System::Boolean level1ProductProductQualityProcessingParameterQuality::dopplerDriftOutsideLimitsFlags::get() {
    return this->dopplerDriftOutsideLimitsFlagsField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::dopplerDriftOutsideLimitsFlags::set(System::Boolean value) {
    this->dopplerDriftOutsideLimitsFlagsField = value;
}

inline System::Boolean level1ProductProductQualityProcessingParameterQuality::chirpQualityLowFlag::get() {
    return this->chirpQualityLowFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::chirpQualityLowFlag::set(System::Boolean value) {
    this->chirpQualityLowFlagField = value;
}

inline System::Boolean level1ProductProductQualityProcessingParameterQuality::geolocationQualityLowFlag::get() {
    return this->geolocationQualityLowFlagField;
}
inline System::Void level1ProductProductQualityProcessingParameterQuality::geolocationQualityLowFlag::set(System::Boolean value) {
    this->geolocationQualityLowFlagField = value;
}


inline level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStart::get() {
    return this->azimuthStartField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStart::set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart^  value) {
    this->azimuthStartField = value;
}

inline level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthCenter::get() {
    return this->azimuthCenterField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthCenter::set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter^  value) {
    this->azimuthCenterField = value;
}

inline level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStop::get() {
    return this->azimuthStopField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfo::azimuthStop::set(level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop^  value) {
    this->azimuthStopField = value;
}


inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::nearRange::get() {
    return this->nearRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::nearRange::set(System::Double value) {
    this->nearRangeField = value;
}

inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::midRange::get() {
    return this->midRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::midRange::set(System::Double value) {
    this->midRangeField = value;
}

inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::farRange::get() {
    return this->farRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStart::farRange::set(System::Double value) {
    this->farRangeField = value;
}


inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::nearRange::get() {
    return this->nearRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::nearRange::set(System::Double value) {
    this->nearRangeField = value;
}

inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::midRange::get() {
    return this->midRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::midRange::set(System::Double value) {
    this->midRangeField = value;
}

inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::farRange::get() {
    return this->farRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthCenter::farRange::set(System::Double value) {
    this->farRangeField = value;
}


inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::nearRange::get() {
    return this->nearRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::nearRange::set(System::Double value) {
    this->nearRangeField = value;
}

inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::midRange::get() {
    return this->midRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::midRange::set(System::Double value) {
    this->midRangeField = value;
}

inline System::Double level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::farRange::get() {
    return this->farRangeField;
}
inline System::Void level1ProductProductQualityProcessingParameterQualityAverageDopplerCentroidInfoAzimuthStop::farRange::set(System::Double value) {
    this->farRangeField = value;
}


inline polLayer level1ProductProductQualityImageDataQuality::PolLayer::get() {
    return this->polLayerField;
}
inline System::Void level1ProductProductQualityImageDataQuality::PolLayer::set(polLayer value) {
    this->polLayerField = value;
}

inline System::String^  level1ProductProductQualityImageDataQuality::beamID::get() {
    return this->beamIDField;
}
inline System::Void level1ProductProductQualityImageDataQuality::beamID::set(System::String^  value) {
    this->beamIDField = value;
}

inline level1ProductProductQualityImageDataQualityDRAoffset level1ProductProductQualityImageDataQuality::DRAoffset::get() {
    return this->dRAoffsetField;
}
inline System::Void level1ProductProductQualityImageDataQuality::DRAoffset::set(level1ProductProductQualityImageDataQualityDRAoffset value) {
    this->dRAoffsetField = value;
}

inline System::Boolean level1ProductProductQualityImageDataQuality::DRAoffsetSpecified::get() {
    return this->dRAoffsetFieldSpecified;
}
inline System::Void level1ProductProductQualityImageDataQuality::DRAoffsetSpecified::set(System::Boolean value) {
    this->dRAoffsetFieldSpecified = value;
}

inline level1ProductProductQualityImageDataQualityImageDataStatistics^  level1ProductProductQualityImageDataQuality::imageDataStatistics::get() {
    return this->imageDataStatisticsField;
}
inline System::Void level1ProductProductQualityImageDataQuality::imageDataStatistics::set(level1ProductProductQualityImageDataQualityImageDataStatistics^  value) {
    this->imageDataStatisticsField = value;
}

inline System::Single level1ProductProductQualityImageDataQuality::nominalSNR::get() {
    return this->nominalSNRField;
}
inline System::Void level1ProductProductQualityImageDataQuality::nominalSNR::set(System::Single value) {
    this->nominalSNRField = value;
}

inline System::Boolean level1ProductProductQualityImageDataQuality::imageMeanFlag::get() {
    return this->imageMeanFlagField;
}
inline System::Void level1ProductProductQualityImageDataQuality::imageMeanFlag::set(System::Boolean value) {
    this->imageMeanFlagField = value;
}

inline System::Boolean level1ProductProductQualityImageDataQuality::imageStdDevFlag::get() {
    return this->imageStdDevFlagField;
}
inline System::Void level1ProductProductQualityImageDataQuality::imageStdDevFlag::set(System::Boolean value) {
    this->imageStdDevFlagField = value;
}

inline System::Int32 level1ProductProductQualityImageDataQuality::layerIndex::get() {
    return this->layerIndexField;
}
inline System::Void level1ProductProductQualityImageDataQuality::layerIndex::set(System::Int32 value) {
    this->layerIndexField = value;
}


inline System::Double level1ProductProductQualityImageDataQualityImageDataStatistics::mean::get() {
    return this->meanField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::mean::set(System::Double value) {
    this->meanField = value;
}

inline System::Double level1ProductProductQualityImageDataQualityImageDataStatistics::max::get() {
    return this->maxField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::max::set(System::Double value) {
    this->maxField = value;
}

inline System::Double level1ProductProductQualityImageDataQualityImageDataStatistics::min::get() {
    return this->minField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::min::set(System::Double value) {
    this->minField = value;
}

inline System::Double level1ProductProductQualityImageDataQualityImageDataStatistics::stdDev::get() {
    return this->stdDevField;
}
inline System::Void level1ProductProductQualityImageDataQualityImageDataStatistics::stdDev::set(System::Double value) {
    this->stdDevField = value;
}


inline cli::array< level1ProductProductQualityLimitsRawData^  >^  level1ProductProductQualityLimits::rawData::get() {
    return this->rawDataField;
}
inline System::Void level1ProductProductQualityLimits::rawData::set(cli::array< level1ProductProductQualityLimitsRawData^  >^  value) {
    this->rawDataField = value;
}

inline level1ProductProductQualityLimitsProcessing^  level1ProductProductQualityLimits::processing::get() {
    return this->processingField;
}
inline System::Void level1ProductProductQualityLimits::processing::set(level1ProductProductQualityLimitsProcessing^  value) {
    this->processingField = value;
}

inline level1ProductProductQualityLimitsImageData^  level1ProductProductQualityLimits::imageData::get() {
    return this->imageDataField;
}
inline System::Void level1ProductProductQualityLimits::imageData::set(level1ProductProductQualityLimitsImageData^  value) {
    this->imageDataField = value;
}


inline System::String^  level1ProductProductQualityLimitsRawData::instrumentChannel::get() {
    return this->instrumentChannelField;
}
inline System::Void level1ProductProductQualityLimitsRawData::instrumentChannel::set(System::String^  value) {
    this->instrumentChannelField = value;
}

inline level1ProductProductQualityLimitsRawDataADCOverflow^  level1ProductProductQualityLimitsRawData::ADCOverflow::get() {
    return this->aDCOverflowField;
}
inline System::Void level1ProductProductQualityLimitsRawData::ADCOverflow::set(level1ProductProductQualityLimitsRawDataADCOverflow^  value) {
    this->aDCOverflowField = value;
}

inline level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics^  level1ProductProductQualityLimitsRawData::echoBufferParityErrorStatistics::get() {
    return this->echoBufferParityErrorStatisticsField;
}
inline System::Void level1ProductProductQualityLimitsRawData::echoBufferParityErrorStatistics::set(level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics^  value) {
    this->echoBufferParityErrorStatisticsField = value;
}

inline level1ProductProductQualityLimitsRawDataSARDataStatistics^  level1ProductProductQualityLimitsRawData::SARDataStatistics::get() {
    return this->sARDataStatisticsField;
}
inline System::Void level1ProductProductQualityLimitsRawData::SARDataStatistics::set(level1ProductProductQualityLimitsRawDataSARDataStatistics^  value) {
    this->sARDataStatisticsField = value;
}

inline System::Single level1ProductProductQualityLimitsRawData::missingLinePercentageLimit::get() {
    return this->missingLinePercentageLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawData::missingLinePercentageLimit::set(System::Single value) {
    this->missingLinePercentageLimitField = value;
}

inline System::Int32 level1ProductProductQualityLimitsRawData::gapDefinition::get() {
    return this->gapDefinitionField;
}
inline System::Void level1ProductProductQualityLimitsRawData::gapDefinition::set(System::Int32 value) {
    this->gapDefinitionField = value;
}

inline System::Single level1ProductProductQualityLimitsRawData::gapPercentageLimit::get() {
    return this->gapPercentageLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawData::gapPercentageLimit::set(System::Single value) {
    this->gapPercentageLimitField = value;
}


inline level1ProductProductQualityLimitsRawDataADCOverflowIChannel^  level1ProductProductQualityLimitsRawDataADCOverflow::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProductQualityLimitsRawDataADCOverflow::IChannel::set(level1ProductProductQualityLimitsRawDataADCOverflowIChannel^  value) {
    this->iChannelField = value;
}

inline level1ProductProductQualityLimitsRawDataADCOverflowQChannel^  level1ProductProductQualityLimitsRawDataADCOverflow::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProductQualityLimitsRawDataADCOverflow::QChannel::set(level1ProductProductQualityLimitsRawDataADCOverflowQChannel^  value) {
    this->qChannelField = value;
}


inline System::Single level1ProductProductQualityLimitsRawDataADCOverflowIChannel::IAdcOvlMaxLimit::get() {
    return this->iAdcOvlMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataADCOverflowIChannel::IAdcOvlMaxLimit::set(System::Single value) {
    this->iAdcOvlMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataADCOverflowIChannel::IAdcOvlStdLimit::get() {
    return this->iAdcOvlStdLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataADCOverflowIChannel::IAdcOvlStdLimit::set(System::Single value) {
    this->iAdcOvlStdLimitField = value;
}


inline System::Single level1ProductProductQualityLimitsRawDataADCOverflowQChannel::QAdcOvlMaxLimit::get() {
    return this->qAdcOvlMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataADCOverflowQChannel::QAdcOvlMaxLimit::set(System::Single value) {
    this->qAdcOvlMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataADCOverflowQChannel::QAdcOvlStdLimit::get() {
    return this->qAdcOvlStdLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataADCOverflowQChannel::QAdcOvlStdLimit::set(System::Single value) {
    this->qAdcOvlStdLimitField = value;
}


inline level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit^  level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics::EBParityErrorRateMaxLimit::get() {
    return this->eBParityErrorRateMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatistics::EBParityErrorRateMaxLimit::set(level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit^  value) {
    this->eBParityErrorRateMaxLimitField = value;
}


inline System::Single level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit::Value::get() {
    return this->valueField;
}
inline System::Void level1ProductProductQualityLimitsRawDataEchoBufferParityErrorStatisticsEBParityErrorRateMaxLimit::Value::set(System::Single value) {
    this->valueField = value;
}


inline level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel^  level1ProductProductQualityLimitsRawDataSARDataStatistics::IChannel::get() {
    return this->iChannelField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatistics::IChannel::set(level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel^  value) {
    this->iChannelField = value;
}

inline level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel^  level1ProductProductQualityLimitsRawDataSARDataStatistics::QChannel::get() {
    return this->qChannelField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatistics::QChannel::set(level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel^  value) {
    this->qChannelField = value;
}

inline level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel^  level1ProductProductQualityLimitsRawDataSARDataStatistics::IQChannel::get() {
    return this->iQChannelField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatistics::IQChannel::set(level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel^  value) {
    this->iQChannelField = value;
}


inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel::IMeanMaxLimit::get() {
    return this->iMeanMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel::IMeanMaxLimit::set(System::Single value) {
    this->iMeanMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel::IMeanStdLimit::get() {
    return this->iMeanStdLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel::IMeanStdLimit::set(System::Single value) {
    this->iMeanStdLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel::IBiasMaxLimit::get() {
    return this->iBiasMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIChannel::IBiasMaxLimit::set(System::Single value) {
    this->iBiasMaxLimitField = value;
}


inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel::QMeanMaxLimit::get() {
    return this->qMeanMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel::QMeanMaxLimit::set(System::Single value) {
    this->qMeanMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel::QMeanStdLimit::get() {
    return this->qMeanStdLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel::QMeanStdLimit::set(System::Single value) {
    this->qMeanStdLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel::QBiasMaxLimit::get() {
    return this->qBiasMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsQChannel::QBiasMaxLimit::set(System::Single value) {
    this->qBiasMaxLimitField = value;
}


inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQGainImbalanceMaxLimit::get() {
    return this->iQGainImbalanceMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQGainImbalanceMaxLimit::set(System::Single value) {
    this->iQGainImbalanceMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQGainImbalanceStdLimit::get() {
    return this->iQGainImbalanceStdLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQGainImbalanceStdLimit::set(System::Single value) {
    this->iQGainImbalanceStdLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQNonorthogonalityMaxLimit::get() {
    return this->iQNonorthogonalityMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQNonorthogonalityMaxLimit::set(System::Single value) {
    this->iQNonorthogonalityMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQNonorthogonalityStdLimit::get() {
    return this->iQNonorthogonalityStdLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQNonorthogonalityStdLimit::set(System::Single value) {
    this->iQNonorthogonalityStdLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQCrossCorrelationMaxLimit::get() {
    return this->iQCrossCorrelationMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQCrossCorrelationMaxLimit::set(System::Single value) {
    this->iQCrossCorrelationMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQCrossCorrelationStdLimit::get() {
    return this->iQCrossCorrelationStdLimitField;
}
inline System::Void level1ProductProductQualityLimitsRawDataSARDataStatisticsIQChannel::IQCrossCorrelationStdLimit::set(System::Single value) {
    this->iQCrossCorrelationStdLimitField = value;
}


inline level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  level1ProductProductQualityLimitsProcessing::dopplerCentroidInformation::get() {
    return this->dopplerCentroidInformationField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::dopplerCentroidInformation::set(level1ProductProductQualityLimitsProcessingDopplerCentroidInformation^  value) {
    this->dopplerCentroidInformationField = value;
}

inline System::Single level1ProductProductQualityLimitsProcessing::chirpQualityLimit::get() {
    return this->chirpQualityLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::chirpQualityLimit::set(System::Single value) {
    this->chirpQualityLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsProcessing::geolocationQualityLimit::get() {
    return this->geolocationQualityLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessing::geolocationQualityLimit::set(System::Single value) {
    this->geolocationQualityLimitField = value;
}


inline System::Single level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcNearRangeLimit::get() {
    return this->fdcNearRangeLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcNearRangeLimit::set(System::Single value) {
    this->fdcNearRangeLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcMidRangeLimit::get() {
    return this->fdcMidRangeLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcMidRangeLimit::set(System::Single value) {
    this->fdcMidRangeLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcFarRangeLimit::get() {
    return this->fdcFarRangeLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcFarRangeLimit::set(System::Single value) {
    this->fdcFarRangeLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearRangeDriftMaxLimit::get() {
    return this->fdcLinearRangeDriftMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearRangeDriftMaxLimit::set(System::Single value) {
    this->fdcLinearRangeDriftMaxLimitField = value;
}

inline System::Single level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearAzimuthDriftMaxLimit::get() {
    return this->fdcLinearAzimuthDriftMaxLimitField;
}
inline System::Void level1ProductProductQualityLimitsProcessingDopplerCentroidInformation::fdcLinearAzimuthDriftMaxLimit::set(System::Single value) {
    this->fdcLinearAzimuthDriftMaxLimitField = value;
}


inline qualityLimitsType^  level1ProductProductQualityLimitsImageData::imageMean::get() {
    return this->imageMeanField;
}
inline System::Void level1ProductProductQualityLimitsImageData::imageMean::set(qualityLimitsType^  value) {
    this->imageMeanField = value;
}

inline qualityLimitsType^  level1ProductProductQualityLimitsImageData::imageSigma::get() {
    return this->imageSigmaField;
}
inline System::Void level1ProductProductQualityLimitsImageData::imageSigma::set(qualityLimitsType^  value) {
    this->imageSigmaField = value;
}
