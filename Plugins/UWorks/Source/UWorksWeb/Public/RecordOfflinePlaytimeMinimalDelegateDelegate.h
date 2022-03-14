#pragma once
#include "CoreMinimal.h"
#include "RecordOfflinePlaytimeMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRecordOfflinePlaytimeMinimalDelegate, bool, bSuccessful, const FString&, Content);

