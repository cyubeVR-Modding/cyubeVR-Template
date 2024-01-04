#include "LivCaptureMulti.h"

ULivCaptureMulti::ULivCaptureMulti(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneCaptureComponent = NULL;
    this->BackgroundRenderTarget = NULL;
    this->BackgroundOutputRenderTarget = NULL;
    this->ForegroundRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
    this->EyeAdaptionRenderTarget = NULL;
    this->BloomRenderTarget = NULL;
    this->CameraClipPlane = NULL;
}


