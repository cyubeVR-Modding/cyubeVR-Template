#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERuntimeMeshMobility.h"
#include "RuntimeMeshActor.generated.h"

class URuntimeMeshComponent;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API ARuntimeMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URuntimeMeshComponent* RuntimeMeshComponent;
    
public:
    ARuntimeMeshActor();
    UFUNCTION(BlueprintCallable)
    void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);
    
    UFUNCTION(BlueprintCallable)
    ERuntimeMeshMobility GetRuntimeMeshMobility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URuntimeMeshComponent* GetRuntimeMeshComponent() const;
    
};

