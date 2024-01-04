#include "LivCaptureSingle.h"

ULivCaptureSingle::ULivCaptureSingle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraClipPlane = NULL;
    this->FloorClipPlane = NULL;
    this->BackgroundOutputRenderTarget = NULL;
}


