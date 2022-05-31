#pragma once
#include "CoreMinimal.h"
#include "UInt64.h"
#include "SteamUGCItemId.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 ID;
    
    STEAMGENERAL_API FSteamUGCItemId();
};

