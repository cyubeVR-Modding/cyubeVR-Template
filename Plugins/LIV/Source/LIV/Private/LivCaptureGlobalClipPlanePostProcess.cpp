#include "LivCaptureGlobalClipPlanePostProcess.h"

ULivCaptureGlobalClipPlanePostProcess::ULivCaptureGlobalClipPlanePostProcess() {
    this->SceneCaptureComponent = NULL;
    this->PostProcessedBackgroundRenderTarget = NULL;
    this->PostProcessedForegroundRenderTarget = NULL;
    this->ForegroundInverseOpacityRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
}

