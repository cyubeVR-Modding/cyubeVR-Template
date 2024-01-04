#include "LivShotActor.h"
#include "Components/SceneComponent.h"
#include "LivShotComponent.h"

ALivShotActor::ALivShotActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->ShotComponent = CreateDefaultSubobject<ULivShotComponent>(TEXT("ShotComponent"));
    this->ShotComponent->SetupAttachment(RootComponent);
}


