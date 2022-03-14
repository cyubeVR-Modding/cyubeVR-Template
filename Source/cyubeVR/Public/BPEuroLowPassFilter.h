#pragma once
#include "CoreMinimal.h"
#include "BPEuroLowPassFilter.generated.h"

USTRUCT(BlueprintType)
struct FBPEuroLowPassFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutoffSlope;
    
    CYUBEVR_API FBPEuroLowPassFilter();
};

