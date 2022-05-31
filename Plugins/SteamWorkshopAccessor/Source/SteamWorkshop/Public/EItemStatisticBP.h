#pragma once
#include "CoreMinimal.h"
#include "EItemStatisticBP.generated.h"

UENUM(BlueprintType)
enum EItemStatisticBP {
    IStat_NumSubscriptions,
    IStat_NumFavorites,
    IStat_NumFollowers,
    IStat_NumUniqueSubscriptions,
    IStat_NumUniqueFavorites,
    IStat_NumUniqueFollowers,
    IStat_NumUniqueWebsiteViews,
    IStat_ReportScore,
    IStat_NumSecondsPlayed,
    IStat_NumPlaytimeSessions,
    IStat_NumComments,
    IStat_NumSecondsPlayedDuringTimePeriod,
    IStat_NumPlaytimeSessionsDuringTimePeriod,
    IStat_MAX UMETA(Hidden),
};

