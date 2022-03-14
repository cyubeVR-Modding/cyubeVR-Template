#pragma once
#include "CoreMinimal.h"
#include "ReportCheatDataMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FReportCheatDataMinimalDelegate, bool, bSuccessful, const FString&, Content);

