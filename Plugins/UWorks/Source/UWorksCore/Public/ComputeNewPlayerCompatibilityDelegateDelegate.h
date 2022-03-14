#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "ComputeNewPlayerCompatibilityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FComputeNewPlayerCompatibilityDelegate, bool, bSuccessful, EUWorksResult, Result, int32, PlayersThatDontLikeCandidate, int32, PlayersThatCandidateDoesntLike, int32, ClanPlayersThatDontLikeCandidate, FUWorksSteamID, SteamIDCandidate);

