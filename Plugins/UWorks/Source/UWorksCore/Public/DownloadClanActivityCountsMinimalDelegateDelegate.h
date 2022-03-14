#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDownloadClanActivityCountsMinimalDelegate, bool, bSuccessful, bool, bSuccess);

