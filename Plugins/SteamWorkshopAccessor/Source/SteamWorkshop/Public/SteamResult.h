#pragma once
#include "CoreMinimal.h"
#include "EResultBP.h"
#include "SteamResult.generated.h"

USTRUCT(BlueprintType)
struct FSteamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    EResultBP Result;
    
    STEAMWORKSHOP_API FSteamResult();
};

