#include "BPVRComponentPosRep.h"

FBPVRComponentPosRep::FBPVRComponentPosRep() {
    this->QuantizationLevel = EVRVectorQuantization::RoundOneDecimal;
    this->RotationQuantizationLevel = EVRRotationQuantization::RoundTo10Bits;
}

