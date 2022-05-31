#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserUGCListSortOrder.generated.h"

UENUM(BlueprintType)
enum class EUWorksUserUGCListSortOrder : uint8 {
    CreationOrderDesc,
    CreationOrderAsc,
    TitleAsc,
    LastUpdatedDesc,
    SubscriptionDateDesc,
    VoteScoreDesc,
    ForModeration,
};

