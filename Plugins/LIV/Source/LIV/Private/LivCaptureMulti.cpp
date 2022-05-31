#include "LivCaptureMulti.h"

ULivCaptureMulti::ULivCaptureMulti() {
    this->SceneCaptureComponent = NULL;
    this->BackgroundRenderTarget = NULL;
    this->BackgroundOutputRenderTarget = NULL;
    this->ForegroundRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
    this->EyeAdaptionRenderTarget = NULL;
    this->BloomRenderTarget = NULL;
    this->CameraClipPlane = NULL;
}

