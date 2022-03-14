#pragma once
#include "CoreMinimal.h"
#include "GetPublisherAppOwnershipMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPublisherAppOwnershipMinimalDelegate, bool, bSuccessful, const FString&, Content);

