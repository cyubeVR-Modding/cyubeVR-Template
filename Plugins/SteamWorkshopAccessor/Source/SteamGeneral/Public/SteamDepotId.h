#pragma once
#include "CoreMinimal.h"
#include "UInt32.h"
#include "SteamDepotId.generated.h"

USTRUCT(BlueprintType)
struct FSteamDepotId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt32 ID;
    
    STEAMGENERAL_API FSteamDepotId();
};

