#pragma once
#include "CoreMinimal.h"
#include "ReportPlayerCheatingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportPlayerCheatingDelegate, bool, bSuccessful, const FString&, Content);

