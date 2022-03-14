#pragma once
#include "CoreMinimal.h"
#include "UWorksControllerMotionData.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksControllerMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RotQuatX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RotQuatY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RotQuatZ;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RotQuatW;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PosAccelX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PosAccelY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PosAccelZ;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RotVelX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RotVelY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float RotVelZ;
    
    FUWorksControllerMotionData();
};

