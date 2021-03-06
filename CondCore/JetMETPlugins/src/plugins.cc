#include "CondCore/PluginSystem/interface/registration_macros.h"

#include "CondFormats/JetMETObjects/interface/QGLikelihoodObject.h"
#include "CondFormats/DataRecord/interface/QGLikelihoodRcd.h"
#include "CondFormats/DataRecord/interface/QGLikelihoodSystematicsRcd.h"

#include "CondFormats/JetMETObjects/interface/FFTJetCorrectorParameters.h"
#include "CondFormats/DataRecord/interface/FFTJetCorrectorParametersRcdTypes.h"

#include "JetMETCorrections/Objects/interface/JetCorrectionsRecord.h"
#include "CondFormats/JetMETObjects/interface/JetCorrectorParameters.h"

#include "JetMETCorrections/Objects/interface/METCorrectionsRecord.h"
#include "CondFormats/JetMETObjects/interface/METCorrectorParameters.h"
#include "JetMETCorrections/Objects/interface/MEtXYcorrectRecord.h"
#include "CondFormats/JetMETObjects/interface/MEtXYcorrectParameters.h"

#include "CondFormats/JetMETObjects/interface/JetResolutionObject.h"
#include "CondFormats/DataRecord/interface/JetResolutionRcd.h"
#include "CondFormats/DataRecord/interface/JetResolutionScaleFactorRcd.h"

REGISTER_PLUGIN(JetCorrectionsRecord, JetCorrectorParametersCollection);
REGISTER_PLUGIN(METCorrectionsRecord, METCorrectorParametersCollection);
REGISTER_PLUGIN(MEtXYcorrectRecord, MEtXYcorrectParametersCollection);

REGISTER_PLUGIN(QGLikelihoodRcd, QGLikelihoodObject);
REGISTER_PLUGIN(QGLikelihoodSystematicsRcd, QGLikelihoodSystematicsObject);

REGISTER_PLUGIN(JetResolutionRcd, JME::JetResolutionObject);
REGISTER_PLUGIN(JetResolutionScaleFactorRcd, JME::JetResolutionObject);

REGISTER_PLUGIN(FFTBasicJetCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGenJetCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCaloJetCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFJetCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTTrackJetCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTJPTJetCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFCHS0CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFCHS1CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFCHS2CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTBasicJetSysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGenJetSysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCaloJetSysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFJetSysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTTrackJetSysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTJPTJetSysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFCHS0SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFCHS1SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPFCHS2SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGen0CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGen1CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGen2CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF0CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF1CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF2CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF3CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF4CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo0CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo1CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo2CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo3CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo4CorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGen0SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGen1SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTGen2SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF0SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF1SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF2SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF3SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF4SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF5SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF6SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF7SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF8SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPF9SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo0SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo1SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo2SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo3SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo4SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo5SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo6SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo7SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo8SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCalo9SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS0SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS1SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS2SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS3SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS4SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS5SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS6SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS7SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS8SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTCHS9SysCorrectorParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTEtaFlatteningFactorsParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPileupRhoCalibrationParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTPileupRhoEtaDependenceParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT0ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT1ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT2ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT3ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT4ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT5ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT6ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT7ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT8ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT9ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT10ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT11ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT12ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT13ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT14ParametersRcd, FFTJetCorrectorParameters);
REGISTER_PLUGIN(FFTLUT15ParametersRcd, FFTJetCorrectorParameters);
