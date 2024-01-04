#pragma once
#include "CoreMinimal.h"
#include "DragonData_ArmSizeStruct.h"
#include "DragonData_CustomArmLengths.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_CustomArmLengths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDragonData_ArmSizeStruct> CustomArmSizeArray;
    
    DRAGONIKPLUGIN_API FDragonData_CustomArmLengths();
};

