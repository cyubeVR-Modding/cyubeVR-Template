#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_FeetOffset_Struct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_FeetOffset_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> feet_extra_offset_array;
    
    DRAGONIKPLUGIN_API FDragonData_FeetOffset_Struct();
};

