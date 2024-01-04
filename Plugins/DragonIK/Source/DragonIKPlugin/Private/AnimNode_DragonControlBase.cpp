#include "AnimNode_DragonControlBase.h"

FAnimNode_DragonControlBase::FAnimNode_DragonControlBase() {
    this->LODThreshold = 0;
    this->ActualAlpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->Alpha = 0.00f;
}

