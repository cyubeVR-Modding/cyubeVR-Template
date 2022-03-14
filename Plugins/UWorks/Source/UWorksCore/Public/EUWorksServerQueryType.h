#pragma once
#include "CoreMinimal.h"
#include "EUWorksServerQueryType.generated.h"

UENUM()
enum class EUWorksServerQueryType : uint8 {
    Internet,
    LAN,
    Friends,
    Favorites,
    History,
    Spectator,
};

