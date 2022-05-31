#pragma once
#include "CoreMinimal.h"
#include "EItemStateBP.generated.h"

UENUM(BlueprintType)
enum class EItemStateBP : uint8 {
    IS_None,
    IS_Subscribed,
    IS_LegacyItem,
    IS_Installed = 0x4,
    IS_NeedsUpdate = 0x8,
    IS_Downloading = 0x10,
    IS_DownloadPending = 0x20,
    IS_MAX UMETA(Hidden),
};

