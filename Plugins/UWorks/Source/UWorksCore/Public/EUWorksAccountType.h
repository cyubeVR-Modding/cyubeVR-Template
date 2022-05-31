#pragma once
#include "CoreMinimal.h"
#include "EUWorksAccountType.generated.h"

UENUM(BlueprintType)
enum class EUWorksAccountType : uint8 {
    Invalid,
    Individual,
    Multiseat,
    GameServer,
    AnonGameServer,
    Pending,
    ContentServer,
    Clan,
    Chat,
    ConsoleUser,
    AnonUser,
    Max,
};

