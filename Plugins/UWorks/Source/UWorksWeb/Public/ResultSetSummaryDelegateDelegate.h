#pragma once
#include "CoreMinimal.h"
#include "ResultSetSummaryDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResultSetSummaryDelegate, bool, bSuccessful, const FString&, Content);

