#include "LivCaptureMeshClipPlanePostProcess.h"

ULivCaptureMeshClipPlanePostProcess::ULivCaptureMeshClipPlanePostProcess() {
    this->SceneCaptureComponent = NULL;
    this->CameraClipPlane = NULL;
    this->FloorClipPlane = NULL;
    this->PostProcessedSceneRenderTarget = NULL;
    this->BackgroundDepthRenderTarget = NULL;
    this->ForegroundDepthRenderTarget = NULL;
    this->BackgroundOutputRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
}

