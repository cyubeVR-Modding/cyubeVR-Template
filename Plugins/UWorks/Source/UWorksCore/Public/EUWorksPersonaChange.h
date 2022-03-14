#pragma once
#include "CoreMinimal.h"
#include "EUWorksPersonaChange.generated.h"

UENUM()
enum class EUWorksPersonaChange : uint8 {
    Name,
    Status,
    ComeOnline,
    GoneOffline,
    GamePlayed,
    GameServer,
    Avatar,
    JoinedSource,
    LeftSource,
    RelationshipChanged,
    NameFirstSet,
    FacebookInfo,
    Nickname,
    SteamLevel,
};

