#pragma once
#include "CoreMinimal.h"
#include "BhapticsRotationOption.generated.h"

USTRUCT(BlueprintType)
struct FBhapticsRotationOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAngleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetY;
    
    BHAPTICSPLUGIN_API FBhapticsRotationOption();
};

