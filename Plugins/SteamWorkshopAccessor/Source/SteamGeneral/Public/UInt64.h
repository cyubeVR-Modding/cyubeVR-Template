#pragma once
#include "CoreMinimal.h"
#include "UInt64.generated.h"

USTRUCT(BlueprintType)
struct FUInt64 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
    STEAMGENERAL_API FUInt64();
};

