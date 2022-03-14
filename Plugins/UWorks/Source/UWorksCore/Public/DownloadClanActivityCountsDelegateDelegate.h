#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDownloadClanActivityCountsDelegate, bool, bSuccessful, bool, bSuccess);

