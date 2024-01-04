#include "CaptureActor.h"

ACaptureActor::ACaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Source = NULL;
    this->SizeX = 1920;
    this->SizeY = 1080;
}

void ACaptureActor::StartCapture() {
}

void ACaptureActor::EndCapture() {
}


