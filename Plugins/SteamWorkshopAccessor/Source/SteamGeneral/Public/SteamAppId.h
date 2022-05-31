#pragma once
#include "CoreMinimal.h"
#include "UInt32.h"
#include "SteamAppId.generated.h"

USTRUCT(BlueprintType)
struct FSteamAppId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt32 ID;
    
    STEAMGENERAL_API FSteamAppId();
};

