#pragma once
#include "CoreMinimal.h"
#include "EUserUGCListBP.generated.h"

UENUM(BlueprintType)
enum class EUserUGCListBP : uint8 {
    L_Published,
    L_VotedOn,
    L_VotedUp,
    L_VotedDown,
    L_WillVoteLater,
    L_Favorited,
    L_Subscribed,
    L_UsedOrPlayed,
    L_Followed,
};

