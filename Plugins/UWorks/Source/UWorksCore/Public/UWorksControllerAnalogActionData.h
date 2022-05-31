#pragma once
#include "CoreMinimal.h"
#include "EUWorksControllerSourceMode.h"
#include "UWorksControllerAnalogActionData.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksControllerAnalogActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUWorksControllerSourceMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    FUWorksControllerAnalogActionData();
};

