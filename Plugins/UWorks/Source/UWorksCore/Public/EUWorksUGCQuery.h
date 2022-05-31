#pragma once
#include "CoreMinimal.h"
#include "EUWorksUGCQuery.generated.h"

UENUM(BlueprintType)
enum class EUWorksUGCQuery : uint8 {
    RankedByVote,
    RankedByPublicationDate,
    AcceptedForGameRankedByAcceptanceDate,
    RankedByTrend,
    FavoritedByFriendsRankedByPublicationDate,
    CreatedByFriendsRankedByPublicationDate,
    RankedByNumTimesReported,
    CreatedByFollowedUsersRankedByPublicationDate,
    NotYetRated,
    RankedByTotalVotesAsc,
    RankedByVotesUp,
    RankedByTextSearch,
    RankedByTotalUniqueSubscriptions,
    RankedByPlaytimeTrend,
    RankedByTotalPlaytime,
    RankedByAveragePlaytimeTrend,
    RankedByLifetimeAveragePlaytime,
    RankedByPlaytimeSessionsTrend,
    RankedByLifetimePlaytimeSessions,
};

