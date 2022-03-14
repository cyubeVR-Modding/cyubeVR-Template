#pragma once
#include "CoreMinimal.h"
#include "EUWorksAudioPlaybackStatus.generated.h"

UENUM()
enum class EUWorksAudioPlaybackStatus : uint8 {
    Undefined,
    Playing,
    Paused,
    Idle,
};

