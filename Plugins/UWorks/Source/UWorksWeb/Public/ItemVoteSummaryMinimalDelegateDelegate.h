#pragma once
#include "CoreMinimal.h"
#include "ItemVoteSummaryMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FItemVoteSummaryMinimalDelegate, bool, bSuccessful, const FString&, Content);

