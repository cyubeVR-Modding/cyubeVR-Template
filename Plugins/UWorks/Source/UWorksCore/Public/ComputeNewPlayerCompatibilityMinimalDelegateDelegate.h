#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "ComputeNewPlayerCompatibilityMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_SixParams(FComputeNewPlayerCompatibilityMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, int32, PlayersThatDontLikeCandidate, int32, PlayersThatCandidateDoesntLike, int32, ClanPlayersThatDontLikeCandidate, FUWorksSteamID, SteamIDCandidate);

