#pragma once
#include "CoreMinimal.h"
#include "UInt64.h"
#include "SteamUGCHandle.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FUInt64 Handle;
    
    STEAMGENERAL_API FSteamUGCHandle();
};

