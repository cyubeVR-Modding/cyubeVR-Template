#include "LivCaptureGlobalClipPlaneNoPostProcess.h"

ULivCaptureGlobalClipPlaneNoPostProcess::ULivCaptureGlobalClipPlaneNoPostProcess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BackgroundRenderTarget = NULL;
    this->ForegroundRenderTarget = NULL;
    this->ForegroundMaskedRenderTarget = NULL;
}


