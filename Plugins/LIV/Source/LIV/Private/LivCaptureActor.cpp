#include "LivCaptureActor.h"
#include "Components/SceneCaptureComponent2D.h"

ALivCaptureActor::ALivCaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimaryCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("NewSceneCaptureComponent2D"));
}


