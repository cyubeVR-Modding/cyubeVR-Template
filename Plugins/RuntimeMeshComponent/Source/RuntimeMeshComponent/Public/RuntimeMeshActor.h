#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshMobility.h"
#include "GameFramework/Actor.h"
#include "RuntimeMeshActor.generated.h"

class URuntimeMeshComponent;

UCLASS()
class RUNTIMEMESHCOMPONENT_API ARuntimeMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
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

