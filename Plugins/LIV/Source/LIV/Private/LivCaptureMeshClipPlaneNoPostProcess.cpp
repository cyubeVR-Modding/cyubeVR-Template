#include "LivCaptureMeshClipPlaneNoPostProcess.h"

ULivCaptureMeshClipPlaneNoPostProcess::ULivCaptureMeshClipPlaneNoPostProcess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraClipPlane = NULL;
    this->FloorClipPlane = NULL;
    this->BackgroundRenderTarget = NULL;
    this->ForegroundRenderTarget = NULL;
    this->BackgroundOutputRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
}


