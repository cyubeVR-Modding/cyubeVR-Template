#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshMaterialSlot.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshMaterialSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    FRuntimeMeshMaterialSlot();
};

