#pragma once
#include "CoreMinimal.h"
#include "EUWorksSteamControllerLEDFlag.generated.h"

UENUM(BlueprintType)
enum class EUWorksSteamControllerLEDFlag : uint8 {
    SetColor,
    RestoreUserDefault,
};

