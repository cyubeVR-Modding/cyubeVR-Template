#pragma once
#include "CoreMinimal.h"
#include "EUGCQueryBP.generated.h"

UENUM(BlueprintType)
enum class EUGCQueryBP : uint8 {
    UQ_RankedByVote,
    UQ_RankedByPublicationDate,
    UQ_AcceptedForGameRankedByAcceptanceDate,
    UQ_RankedByTrend,
    UQ_FavoritedByFriendsRankedByPublicationDate,
    UQ_CreatedByFriendsRankedByPublicationDate,
    UQ_RankedByNumTimesReported,
    UQ_CreatedByFollowedUsersRankedByPublicationDate,
    UQ_NotYetRated,
    UQ_RankedByTotalVotesAsc,
    UQ_RankedByVotesUp,
    UQ_RankedByTextSearch,
    UQ_RankedByTotalUniqueSubscriptions,
    UQ_RankedByPlaytimeTrend,
    UQ_RankedByTotalPlaytime,
    UQ_RankedByAveragePlaytimeTrend,
    UQ_RankedByLifetimeAveragePlaytime,
    UQ_RankedByPlaytimeSessionsTrend,
    UQ_RankedByLifetimePlaytimeSessions,
    UQ_MAX UMETA(Hidden),
};

