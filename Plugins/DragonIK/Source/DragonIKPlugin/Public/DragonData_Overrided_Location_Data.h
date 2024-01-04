#pragma once
#include "CoreMinimal.h"
#include "DragonData_SingleArmElement.h"
#include "DragonData_Overrided_Location_Data.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_Overrided_Location_Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDragonData_SingleArmElement> Arm_TargetLocation_Overrides;
    
    DRAGONIKPLUGIN_API FDragonData_Overrided_Location_Data();
};

