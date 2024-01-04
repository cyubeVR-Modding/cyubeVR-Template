#pragma once
#include "CoreMinimal.h"
#include "UInt32.generated.h"

USTRUCT(BlueprintType)
struct FUInt32 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    STEAMGENERAL_API FUInt32();
};

