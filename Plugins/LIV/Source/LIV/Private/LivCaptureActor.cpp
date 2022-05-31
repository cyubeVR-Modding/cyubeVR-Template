#include "LivCaptureActor.h"
#include "Components/SceneCaptureComponent2D.h"

ALivCaptureActor::ALivCaptureActor() {
    this->PrimaryCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("NewSceneCaptureComponent2D"));
}

