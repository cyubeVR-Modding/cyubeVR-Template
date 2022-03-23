#pragma once
#include "CoreMinimal.h"
#include "UWorksUGCQueryHandle.h"
#include "EUWorksResult.h"
#include "SendQueryUGCRequestDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FSendQueryUGCRequestDelegate, bool, bSuccessful, FUWorksUGCQueryHandle, UGCQueryHandle, EUWorksResult, Result, int32, numResultsReturned, int32, TotalMatchingResults, bool, bCachedData);

