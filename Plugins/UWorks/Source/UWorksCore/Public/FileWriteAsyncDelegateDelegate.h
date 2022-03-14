#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "FileWriteAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFileWriteAsyncDelegate, bool, bSuccessful, EUWorksResult, Result);

