#pragma once
#include "CoreMinimal.h"
#include "UserVoteSummaryDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserVoteSummaryDelegate, bool, bSuccessful, const FString&, Content);

