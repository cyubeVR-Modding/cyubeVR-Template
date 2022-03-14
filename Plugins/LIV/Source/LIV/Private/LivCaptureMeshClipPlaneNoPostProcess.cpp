#include "LivCaptureMeshClipPlaneNoPostProcess.h"

ULivCaptureMeshClipPlaneNoPostProcess::ULivCaptureMeshClipPlaneNoPostProcess() {
    this->CameraClipPlane = NULL;
    this->FloorClipPlane = NULL;
    this->BackgroundRenderTarget = NULL;
    this->ForegroundRenderTarget = NULL;
    this->BackgroundOutputRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
}

