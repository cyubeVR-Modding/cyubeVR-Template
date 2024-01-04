#include "LivCaptureCombo.h"

ULivCaptureCombo::ULivCaptureCombo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneCaptureComponent = NULL;
    this->BackgroundRenderTarget = NULL;
    this->ForegroundRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
}


