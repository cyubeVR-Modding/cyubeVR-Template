#pragma once
#include "CoreMinimal.h"
#include "ESteamItemVisibility.generated.h"

UENUM(BlueprintType)
enum class ESteamItemVisibility : uint8 {
    SIV_Public,
    SIV_FriendsOnly,
    SIV_Private,
};

