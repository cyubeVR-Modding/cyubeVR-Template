#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "GetFileDetailsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FGetFileDetailsMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, int32, fileSize, const FString&, FileSHA, const TArray<int32>&, FileFlags);

