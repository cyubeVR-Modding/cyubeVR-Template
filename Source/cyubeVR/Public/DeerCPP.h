#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "UObject/NoExportTypes.h"
#include "LightReceiveInterface.h"
#include "Engine/EngineTypes.h"
#include "DeerCPP.generated.h"

class UMeshComponent;
class AChunkManager;
class AActor;

UCLASS(Blueprintable)
class CYUBEVR_API ADeerCPP : public ACharacter, public ILightReceiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RecentlyRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasVisibleLastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDead;
    
    ADeerCPP();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateColorsFromLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMoving();
    
    UFUNCTION(BlueprintNativeEvent)
    void SetMobilityAllEvent(EComponentMobility::Type NewMobility);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void SetDead(AChunkManager* ChunkManager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetComponentTickBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetMeshComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoWeirdStuff();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoTick();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool UseLightAroundValue() override PURE_VIRTUAL(UseLightAroundValue, return false;);
    
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

