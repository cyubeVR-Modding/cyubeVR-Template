#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DragonIK_Library.generated.h"

UCLASS(Blueprintable)
class DRAGONIKPLUGIN_API UDragonIK_Library : public UObject {
    GENERATED_BODY()
public:
    UDragonIK_Library();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform QuatLookXatLocation(const FTransform& LookAtFromTransform, const FVector& LookAtTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator LookAtVector_V2(FVector Source_Location, FVector lookAt, FVector upDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator LookAtRotation_V3(FVector Source, FVector Target, FVector UpVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CustomLookRotation(FVector lookAt, FVector upDirection);
    
};

