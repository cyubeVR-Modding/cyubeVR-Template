#pragma once
#include "CoreMinimal.h"
#include "UInt64.h"
#include "SteamUGCUpdateHandle.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCUpdateHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 Handle;
    
    STEAMGENERAL_API FSteamUGCUpdateHandle();
};

