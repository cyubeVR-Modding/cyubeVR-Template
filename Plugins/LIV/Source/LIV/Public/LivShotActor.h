#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LivShotActor.generated.h"

class ULivShotComponent;
class USceneComponent;

UCLASS(Blueprintable)
class LIV_API ALivShotActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULivShotComponent* ShotComponent;
    
    ALivShotActor(const FObjectInitializer& ObjectInitializer);

};

