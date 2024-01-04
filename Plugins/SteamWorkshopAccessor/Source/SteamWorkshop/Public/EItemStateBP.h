#pragma once
#include "CoreMinimal.h"
#include "EItemStateBP.generated.h"

UENUM(BlueprintType)
enum class EItemStateBP : uint8 {
    IS_None,
    IS_Subscribed,
    IS_LegacyItem,
    IS_Installed = 4,
    IS_NeedsUpdate = 8,
    IS_Downloading = 16,
    IS_DownloadPending = 32,
};

