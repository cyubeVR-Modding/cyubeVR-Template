#pragma once
#include "CoreMinimal.h"
#include "EUWorksItemState.generated.h"

UENUM(BlueprintType)
enum class EUWorksItemState : uint8 {
    None,
    Subscribed,
    LegacyItem,
    Installed,
    NeedsUpdate,
    Downloading,
    DownloadPending,
};

