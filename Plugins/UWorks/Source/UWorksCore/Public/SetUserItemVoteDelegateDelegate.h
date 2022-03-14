#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "SetUserItemVoteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSetUserItemVoteDelegate, bool, bSuccessful, FUWorksPublishedFileID, PublishedFileID, EUWorksResult, Result, bool, bVoteUp);

