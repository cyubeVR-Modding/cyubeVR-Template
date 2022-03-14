#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "LightReceiveInterface.generated.h"

class AActor;
class UMeshComponent;

UINTERFACE(MinimalAPI)
class ULightReceiveInterface : public UInterface {
    GENERATED_BODY()
};

class ILightReceiveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool UseLightAroundValue() PURE_VIRTUAL(UseLightAroundValue, return false;);
    
    UFUNCTION()
    virtual bool UseActorCustomLocation() PURE_VIRTUAL(UseActorCustomLocation, return false;);
    
    UFUNCTION()
    virtual bool TickReceiveLight() PURE_VIRTUAL(TickReceiveLight, return false;);
    
    UFUNCTION()
    virtual void LightInterfaceBeginPlay(AActor* ThisActor) PURE_VIRTUAL(LightInterfaceBeginPlay,);
    
    UFUNCTION()
    virtual void LightInterfaceBeginDestroy(AActor* ThisActor) PURE_VIRTUAL(LightInterfaceBeginDestroy,);
    
    UFUNCTION()
    virtual TArray<UMeshComponent*> GetMeshComponents() PURE_VIRTUAL(GetMeshComponents, return TArray<UMeshComponent*>(););
    
    UFUNCTION()
    virtual FVector GetActorCustomLocation() PURE_VIRTUAL(GetActorCustomLocation, return FVector{};);
    
};

