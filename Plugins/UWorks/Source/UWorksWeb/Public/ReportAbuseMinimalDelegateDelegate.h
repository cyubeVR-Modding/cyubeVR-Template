#pragma once
#include "CoreMinimal.h"
#include "ReportAbuseMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FReportAbuseMinimalDelegate, bool, bSuccessful, const FString&, Content);

