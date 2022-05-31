#include "LivShotActor.h"
#include "Components/SceneComponent.h"
#include "LivShotComponent.h"

ALivShotActor::ALivShotActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ShotComponent = CreateDefaultSubobject<ULivShotComponent>(TEXT("ShotComponent"));
}

