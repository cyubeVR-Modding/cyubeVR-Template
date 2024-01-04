#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DragonIKPhysicsHolder.generated.h"

UCLASS(Blueprintable)
class DRAGONIKPLUGIN_API ADragonIKPhysicsHolder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* connected_actor;
    
    ADragonIKPhysicsHolder(const FObjectInitializer& ObjectInitializer);

};

