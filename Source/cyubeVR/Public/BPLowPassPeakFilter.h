#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BPLowPassPeakFilter.generated.h"

USTRUCT(BlueprintType)
struct FBPLowPassPeakFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VelocitySamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> VelocitySampleLog;
    
    CYUBEVR_API FBPLowPassPeakFilter();
};

