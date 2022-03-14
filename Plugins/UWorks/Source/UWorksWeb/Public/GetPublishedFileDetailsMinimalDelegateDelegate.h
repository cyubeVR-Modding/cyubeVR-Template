#pragma once
#include "CoreMinimal.h"
#include "GetPublishedFileDetailsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPublishedFileDetailsMinimalDelegate, bool, bSuccessful, const FString&, Content);

