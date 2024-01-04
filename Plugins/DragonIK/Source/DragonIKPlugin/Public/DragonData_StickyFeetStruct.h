#pragma once
#include "CoreMinimal.h"
#include "DragonData_StickyFeetStruct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_StickyFeetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> sticky_feet_array;
    
    DRAGONIKPLUGIN_API FDragonData_StickyFeetStruct();
};

