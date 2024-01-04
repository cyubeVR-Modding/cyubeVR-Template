#include "LivCaptureGlobalClipPlanePostProcess.h"

ULivCaptureGlobalClipPlanePostProcess::ULivCaptureGlobalClipPlanePostProcess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneCaptureComponent = NULL;
    this->PostProcessedBackgroundRenderTarget = NULL;
    this->PostProcessedForegroundRenderTarget = NULL;
    this->ForegroundInverseOpacityRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
}


