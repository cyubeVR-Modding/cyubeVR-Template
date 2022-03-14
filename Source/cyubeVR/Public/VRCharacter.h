#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LightReceiveInterface.h"
#include "UObject/NoExportTypes.h"
#include "VRCharacter.generated.h"

class UMeshComponent;
class UCameraComponent;
class AActor;

UCLASS()
class CYUBEVR_API AVRCharacter : public APawn, public ILightReceiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LocationLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> Meshes;
    
    AVRCharacter();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WasRotated();
    
    UFUNCTION(BlueprintCallable)
    bool UseLightAroundValue();
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetMeshComponents();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool UseActorCustomLocation() override PURE_VIRTUAL(UseActorCustomLocation, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool TickReceiveLight() override PURE_VIRTUAL(TickReceiveLight, return false;);
    
    UFUNCTION(BlueprintCallable)
    void LightInterfaceBeginPlay(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginPlay,);
    
    UFUNCTION(BlueprintCallable)
    void LightInterfaceBeginDestroy(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginDestroy,);
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorCustomLocation() override PURE_VIRTUAL(GetActorCustomLocation, return FVector{};);
    
};

