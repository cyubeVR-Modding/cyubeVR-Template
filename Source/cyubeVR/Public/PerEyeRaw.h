#pragma once
#include "CoreMinimal.h"
#include "PerEyeRaw.generated.h"

USTRUCT(BlueprintType)
struct FPerEyeRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pfLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pfRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pfTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pfBottom;
    
    CYUBEVR_API FPerEyeRaw();
};

