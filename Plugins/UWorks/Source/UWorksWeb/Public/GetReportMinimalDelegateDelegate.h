#pragma once
#include "CoreMinimal.h"
#include "GetReportMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetReportMinimalDelegate, bool, bSuccessful, const FString&, Content);

