#pragma once
#include "CoreMinimal.h"
#include "EUserUGCListSortOrderBP.generated.h"

UENUM(BlueprintType)
enum class EUserUGCListSortOrderBP : uint8 {
    SO_CreationOrderDesc,
    SO_CreationOrderAsc,
    SO_TitleAsc,
    SO_LastUpdatedDesc,
    SO_SubscriptionDateDesc,
    SO_VoteScoreDesc,
    SO_ForModeration,
    SO_MAX UMETA(Hidden),
};

