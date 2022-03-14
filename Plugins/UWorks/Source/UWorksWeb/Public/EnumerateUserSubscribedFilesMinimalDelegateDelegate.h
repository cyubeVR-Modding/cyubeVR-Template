#pragma once
#include "CoreMinimal.h"
#include "EnumerateUserSubscribedFilesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FEnumerateUserSubscribedFilesMinimalDelegate, bool, bSuccessful, const FString&, Content);

