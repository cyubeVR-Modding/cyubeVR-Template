#pragma once
#include "CoreMinimal.h"
#include "EnumerateUserPublishedFilesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FEnumerateUserPublishedFilesMinimalDelegate, bool, bSuccessful, const FString&, Content);

