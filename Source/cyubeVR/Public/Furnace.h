#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MeshObject.h"
#include "Furnace.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API AFurnace : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Initialized;
    
    AFurnace(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFurnaceSaveVariables(float HeatOnTop, float MoltenFillValue, float MeltAmountSum, int32 ItemFullyFinishedMelt, bool FlowOutStarted, FRotator RotationShutterTop, FRotator RotationShutterBottom, FRotator RotationLever);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFurnaceSaveVariables(float& HeatOnTop, float& MoltenFillValue, float& MeltAmountSum, int32& ItemFullyFinishedMelt, bool& FlowOutStarted, FRotator& RotationShutterTop, FRotator& RotationShutterBottom, FRotator& RotationLever);
    
    UFUNCTION(BlueprintCallable)
    FVector GetActorCustomLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CanDamageObjectBP(bool& CanDamage);
    
};

