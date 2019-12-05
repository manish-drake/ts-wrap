#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0000


Json::Value messageReplyRFVoltageRegulatorTestBuffer(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<unsigned int> _Voltage,
        float _Average,
        int _LimitMin,
        int _LimitMax,
        int _TestResult
        )
{
    CReplyRFVoltageRegulatorTestBuffer msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setVoltage(_Voltage);
    msg.setAverage(_Average);
    msg.setLimitMin(_LimitMin);
    msg.setLimitMax(_LimitMax);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyRFSynthesizerTestBuffer(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        int _TestResult,
        unsigned int _Modulus
        )
{
    CReplyRFSynthesizerTestBuffer msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setTestResult(_TestResult);
    msg.setModulus(_Modulus);
    return msg.get();
}


Json::Value messageReplyRXIQDemOffsetTest(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        int _LimitMin,
        int _LimitMax,
        std::vector<int> _IResult,
        std::vector<int> _QResult,
        int _TestResult
        )
{
    CReplyRXIQDemOffsetTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setLimitMin(_LimitMin);
    msg.setLimitMax(_LimitMax);
    msg.setIResult(_IResult);
    msg.setQResult(_QResult);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTXRefTuningOLD(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        float _LimitErr05,
        float _LimitErr01,
        int _LimitMax,
        int _TestResult
        )
{
    CReplyTXRefTuningOLD msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setLimitErr05(_LimitErr05);
    msg.setLimitErr01(_LimitErr01);
    msg.setLimitMax(_LimitMax);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTempSensorTest(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<unsigned int> _DetVolt,
        unsigned int _AvgDetVolt,
        float _DetTemp,
        std::vector<unsigned int> _ModVolt,
        unsigned int _AvgModVolt,
        float _ModTemp,
        float _LimitTempMin,
        float _LimitTempMax,
        float _LimitTempDiff,
        float _Frequency,
        int _TestResult
        )
{
    CReplyTempSensorTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setDetVolt(_DetVolt);
    msg.setAvgDetVolt(_AvgDetVolt);
    msg.setDetTemp(_DetTemp);
    msg.setModVolt(_ModVolt);
    msg.setAvgModVolt(_AvgModVolt);
    msg.setModTemp(_ModTemp);
    msg.setLimitTempMin(_LimitTempMin);
    msg.setLimitTempMax(_LimitTempMax);
    msg.setLimitTempDiff(_LimitTempDiff);
    msg.setFrequency(_Frequency);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyAssemblyRevTest(
        unsigned int _Channel,
        unsigned int _ADC,
        int _AssmRev,
        int _TestResult
        )
{
    CReplyAssemblyRevTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setAssmRev(_AssmRev);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyCalDetTest(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        int _TxPowerMin,
        int _TxPowerMax,
        std::vector<float> _TXPwr,
        int _TestResult
        )
{
    CReplyCalDetTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setTxPowerMin(_TxPowerMin);
    msg.setTxPowerMax(_TxPowerMax);
    msg.setTXPwr(_TXPwr);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyVSWRDetTest(
        unsigned int _Channel,
        unsigned int _ADC,
        int _DetTemp,
        int _DetFwdPwr,
        int _TempMin,
        int _TempMax,
        int _FwdPwrMin,
        int _FwdPwrMax,
        int _TestResult
        )
{
    CReplyVSWRDetTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setDetTemp(_DetTemp);
    msg.setDetFwdPwr(_DetFwdPwr);
    msg.setTempMin(_TempMin);
    msg.setTempMax(_TempMax);
    msg.setFwdPwrMin(_FwdPwrMin);
    msg.setFwdPwrMax(_FwdPwrMax);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyDirDetTest(
        unsigned int _Channel,
        unsigned int _ADC,
        int _DirDetRef,
        double _envRatio,
        int _RmsNF,
        int _EnvSIG,
        int _RmsSIG,
        int _DirRefMin,
        int _DirRefMax,
        int _EnvSensl,
        int _RmsSensl,
        float _Freq,
        int _TestResult
        )
{
    CReplyDirDetTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setDirDetRef(_DirDetRef);
    msg.setenvRatio(_envRatio);
    msg.setRmsNF(_RmsNF);
    msg.setEnvSIG(_EnvSIG);
    msg.setRmsSIG(_RmsSIG);
    msg.setDirRefMin(_DirRefMin);
    msg.setDirRefMax(_DirRefMax);
    msg.setEnvSensl(_EnvSensl);
    msg.setRmsSensl(_RmsSensl);
    msg.setFreq(_Freq);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyThldDetTest(
        unsigned int _Channel,
        unsigned int _ADC,
        int _DirDetThld_L,
        int _DirDetThld_H,
        int _DirThldLow,
        int _DirThldHigh,
        float _Freq,
        int _TestResult
        )
{
    CReplyThldDetTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setDirDetThld_L(_DirDetThld_L);
    msg.setDirDetThld_H(_DirDetThld_H);
    msg.setDirThldLow(_DirThldLow);
    msg.setDirThldHigh(_DirThldHigh);
    msg.setFreq(_Freq);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTXIQModOffsetTest(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        int _LimitTxOFSMin,
        int _LimitTxOFSMax,
        int _LimitTxCRSMin,
        std::vector<int> _IResult,
        std::vector<int> _QResult,
        std::vector<double> _CRSResult,
        int _TestResult
        )
{
    CReplyTXIQModOffsetTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setLimitTxOFSMin(_LimitTxOFSMin);
    msg.setLimitTxOFSMax(_LimitTxOFSMax);
    msg.setLimitTxCRSMin(_LimitTxCRSMin);
    msg.setIResult(_IResult);
    msg.setQResult(_QResult);
    msg.setCRSResult(_CRSResult);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTXIQGainBalTest(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        float _LimitTxBALmin,
        float _LimitTxBALmax,
        std::vector<double> _IBal,
        std::vector<double> _QBal,
        std::vector<float> _DeltaPWR,
        int _TestResult
        )
{
    CReplyTXIQGainBalTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setLimitTxBALmin(_LimitTxBALmin);
    msg.setLimitTxBALmax(_LimitTxBALmax);
    msg.setIBal(_IBal);
    msg.setQBal(_QBal);
    msg.setDeltaPWR(_DeltaPWR);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTXRefTuningTest(
        unsigned int _Channel,
        unsigned int _ADC,
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        std::vector<float> _RefAttn,
        std::vector<int> _RefAmpl,
        std::vector<double> _CalDetTemp,
        int _MinRefAmpl,
        int _MaxRefAmpl,
        int _TestResult
        )
{
    CReplyTXRefTuningTest msg;
    msg.setChannel(_Channel);
    msg.setADC(_ADC);
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setRefAttn(_RefAttn);
    msg.setRefAmpl(_RefAmpl);
    msg.setCalDetTemp(_CalDetTemp);
    msg.setMinRefAmpl(_MinRefAmpl);
    msg.setMaxRefAmpl(_MaxRefAmpl);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTXStepAttenTest(
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        std::vector<double> _TxStepVal,
        std::vector<double> _MinTxStepVal,
        std::vector<double> _MaxTxStepVal,
        int _TestResult
        )
{
    CReplyTXStepAttenTest msg;
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setTxStepVal(_TxStepVal);
    msg.setMinTxStepVal(_MinTxStepVal);
    msg.setMaxTxStepVal(_MaxTxStepVal);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTXCoarseAttenTest(
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        std::vector<double> _TxCoarseVal,
        std::vector<double> _MinTxCoarseVal,
        std::vector<double> _MaxTxCoarseVal,
        int _TestResult
        )
{
    CReplyTXCoarseAttenTest msg;
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setTxCoarseVal(_TxCoarseVal);
    msg.setMinTxCoarseVal(_MinTxCoarseVal);
    msg.setMaxTxCoarseVal(_MaxTxCoarseVal);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyRXAttenTest(
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        std::vector<double> _RXAttnVal,
        std::vector<double> _MinRxAttnVal,
        std::vector<double> _MaxRxAttnVal,
        int _TestResult
        )
{
    CReplyRXAttenTest msg;
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setRXAttnVal(_RXAttnVal);
    msg.setMinRxAttnVal(_MinRxAttnVal);
    msg.setMaxRxAttnVal(_MaxRxAttnVal);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyRXBWTest(
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        std::vector<double> _FreqOfsVals,
        std::vector<double> _LPFloss,
        std::vector<double> _MinRXBW,
        std::vector<double> _MaxRXBW,
        int _TestResult
        )
{
    CReplyRXBWTest msg;
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setFreqOfsVals(_FreqOfsVals);
    msg.setLPFloss(_LPFloss);
    msg.setMinRXBW(_MinRXBW);
    msg.setMaxRXBW(_MaxRXBW);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyRunBITTest(
        std::vector<int> _Rxlevel,
        int _TestResult
        )
{
    CReplyRunBITTest msg;
    msg.setRxlevel(_Rxlevel);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyTXBWTest(
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        std::vector<int> _FreqOfsVals,
        std::vector<double> _LPFloss,
        std::vector<double> _MinTXBW,
        std::vector<double> _MaxTXBW,
        int _TestResult
        )
{
    CReplyTXBWTest msg;
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setFreqOfsVals(_FreqOfsVals);
    msg.setLPFloss(_LPFloss);
    msg.setMinTXBW(_MinTXBW);
    msg.setMaxTXBW(_MaxTXBW);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messageReplyRXIQGainTest(
        std::vector<float> _Frequency,
        std::vector<unsigned int> _FreqResult,
        float _LimitTxBALmin,
        float _LimitTxBALmax,
        std::vector<double> _IBal,
        std::vector<double> _QBal,
        int _TestResult
        )
{
    CReplyRXIQGainTest msg;
    msg.setFrequency(_Frequency);
    msg.setFreqResult(_FreqResult);
    msg.setLimitTxBALmin(_LimitTxBALmin);
    msg.setLimitTxBALmax(_LimitTxBALmax);
    msg.setIBal(_IBal);
    msg.setQBal(_QBal);
    msg.setTestResult(_TestResult);
    return msg.get();
}
