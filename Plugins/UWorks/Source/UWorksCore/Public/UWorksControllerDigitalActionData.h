#pragma once
#include "CoreMinimal.h"
#include "UWorksControllerDigitalActionData.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksControllerDigitalActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bState;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    FUWorksControllerDigitalActionData();
};

