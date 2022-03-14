#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "GetFileDetailsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FGetFileDetailsDelegate, bool, bSuccessful, EUWorksResult, Result, int32, fileSize, const FString&, FileSHA, const TArray<int32>&, FileFlags);

