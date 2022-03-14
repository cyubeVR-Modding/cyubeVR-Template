#pragma once
#include "CoreMinimal.h"
#include "UpdateTagsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FUpdateTagsMinimalDelegate, bool, bSuccessful, const FString&, Content);

