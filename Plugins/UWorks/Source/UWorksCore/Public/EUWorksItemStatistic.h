#pragma once
#include "CoreMinimal.h"
#include "EUWorksItemStatistic.generated.h"

UENUM()
enum class EUWorksItemStatistic : uint8 {
    NumSubscriptions,
    NumFavorites,
    NumFollowers,
    NumUniqueSubscriptions,
    NumUniqueFavorites,
    NumUniqueFollowers,
    NumUniqueWebsiteViews,
    ReportScore,
    NumSecondsPlayed,
    NumPlaytimeSessions,
    NumComments,
};

