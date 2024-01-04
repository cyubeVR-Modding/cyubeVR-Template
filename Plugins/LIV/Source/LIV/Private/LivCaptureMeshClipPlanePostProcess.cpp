#include "LivCaptureMeshClipPlanePostProcess.h"

ULivCaptureMeshClipPlanePostProcess::ULivCaptureMeshClipPlanePostProcess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneCaptureComponent = NULL;
    this->CameraClipPlane = NULL;
    this->FloorClipPlane = NULL;
    this->PostProcessedSceneRenderTarget = NULL;
    this->BackgroundDepthRenderTarget = NULL;
    this->ForegroundDepthRenderTarget = NULL;
    this->BackgroundOutputRenderTarget = NULL;
    this->ForegroundOutputRenderTarget = NULL;
}


