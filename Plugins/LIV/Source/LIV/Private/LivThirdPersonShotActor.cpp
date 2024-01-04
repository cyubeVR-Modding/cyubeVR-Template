#include "LivThirdPersonShotActor.h"
#include "LivShotComponent.h"
#include "LivSpringArmComponent.h"

ALivThirdPersonShotActor::ALivThirdPersonShotActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpringArm = CreateDefaultSubobject<ULivSpringArmComponent>(TEXT("SpringArm"));
    this->ShotComponent = CreateDefaultSubobject<ULivShotComponent>(TEXT("ShotComponent"));
    this->ShotComponent->SetupAttachment(SpringArm);
}

void ALivThirdPersonShotActor::TickSpringArm(ALivCameraController* Controller, ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime) {
}


