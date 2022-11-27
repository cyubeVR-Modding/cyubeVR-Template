#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LightReceiveInterface.h"
#include "UObject/NoExportTypes.h"
#include "VRCharacter.generated.h"

class UMeshComponent;
class UCameraComponent;
class AActor;

UCLASS(Blueprintable)
class CYUBEVR_API AVRCharacter : public APawn, public ILightReceiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LocationLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> Meshes;
    
    AVRCharacter();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WasRotated();
    
    UFUNCTION(BlueprintCallable)
    bool UseLightAroundValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetViewDirection(FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReduceHealthCPP(float Amount);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetMeshComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetActorLocationForCameraLocationCPP(FVector NewCameraLocation);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool UseActorCustomLocation() override PURE_VIRTUAL(UseActorCustomLocation, return false;);
    
    UFUNCTION()
    bool TickReceiveLight() override PURE_VIRTUAL(TickReceiveLight, return false;);
    
    UFUNCTION()
    void LightInterfaceBeginPlay(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginPlay,);
    
    UFUNCTION()
    void LightInterfaceBeginDestroy(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginDestroy,);
    
    UFUNCTION()
    FVector GetActorCustomLocation() override PURE_VIRTUAL(GetActorCustomLocation, return FVector{};);
    
};

