#pragma once
#include "CoreMinimal.h"
#include "DragonData_FeetAlpha_Struct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_FeetAlpha_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> feet_IK_alpha_array;
    
    DRAGONIKPLUGIN_API FDragonData_FeetAlpha_Struct();
};

