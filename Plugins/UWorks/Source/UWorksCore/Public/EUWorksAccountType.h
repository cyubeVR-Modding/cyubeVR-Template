#pragma once
#include "CoreMinimal.h"
#include "EUWorksAccountType.generated.h"

UENUM()
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

