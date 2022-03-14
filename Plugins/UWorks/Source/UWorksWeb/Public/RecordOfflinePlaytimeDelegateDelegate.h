#pragma once
#include "CoreMinimal.h"
#include "RecordOfflinePlaytimeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRecordOfflinePlaytimeDelegate, bool, bSuccessful, const FString&, Content);

