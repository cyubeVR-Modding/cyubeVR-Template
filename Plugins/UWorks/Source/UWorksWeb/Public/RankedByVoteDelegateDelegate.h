#pragma once
#include "CoreMinimal.h"
#include "RankedByVoteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRankedByVoteDelegate, bool, bSuccessful, const FString&, Content);

