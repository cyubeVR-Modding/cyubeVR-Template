#pragma once
#include "CoreMinimal.h"
#include "ReportPlayerCheatingMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FReportPlayerCheatingMinimalDelegate, bool, bSuccessful, const FString&, Content);

