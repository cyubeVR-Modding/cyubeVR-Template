#pragma once
#include "CoreMinimal.h"
#include "EUWorksItemState.generated.h"

UENUM()
enum class EUWorksItemState {
    None,
    Subscribed,
    LegacyItem,
    Installed,
    NeedsUpdate,
    Downloading,
    DownloadPending,
};

