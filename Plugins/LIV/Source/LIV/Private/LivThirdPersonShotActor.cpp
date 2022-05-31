#include "LivThirdPersonShotActor.h"
#include "LivSpringArmComponent.h"
#include "LivShotComponent.h"

class ALivCameraController;
class ULivCaptureBase;

void ALivThirdPersonShotActor::TickSpringArm(ALivCameraController* Controller, ULivCaptureBase* CaptureComponent, float ShotTime, float DeltaTime) {
}

ALivThirdPersonShotActor::ALivThirdPersonShotActor() {
    this->SpringArm = CreateDefaultSubobject<ULivSpringArmComponent>(TEXT("SpringArm"));
    this->ShotComponent = CreateDefaultSubobject<ULivShotComponent>(TEXT("ShotComponent"));
}

