#pragma once
#include "CoreMinimal.h"
#include "UWorksUGCQueryHandle.h"
#include "EUWorksResult.h"
#include "SendQueryUGCRequestMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_SixParams(FSendQueryUGCRequestMinimalDelegate, bool, bSuccessful, FUWorksUGCQueryHandle, UGCQueryHandle, EUWorksResult, Result, int32, numResultsReturned, int32, TotalMatchingResults, bool, bCachedData);

