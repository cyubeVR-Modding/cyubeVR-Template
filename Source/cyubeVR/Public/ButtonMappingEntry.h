#pragma once
#include "CoreMinimal.h"
#include "ButtonMappingEntry.generated.h"

USTRUCT(BlueprintType)
struct FButtonMappingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionName;
    
    CYUBEVR_API FButtonMappingEntry();
};

