#pragma once
#include "CoreMinimal.h"
#include "DragonData_ArmSizeStruct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_ArmSizeStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Use_Custom_Arm_Sizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float custom_upperArm_length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float custom_lowerArm_length;
    
    DRAGONIKPLUGIN_API FDragonData_ArmSizeStruct();
};

