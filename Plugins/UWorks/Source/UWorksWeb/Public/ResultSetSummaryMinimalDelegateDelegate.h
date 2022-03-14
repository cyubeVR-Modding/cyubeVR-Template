#pragma once
#include "CoreMinimal.h"
#include "ResultSetSummaryMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FResultSetSummaryMinimalDelegate, bool, bSuccessful, const FString&, Content);

