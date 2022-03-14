#pragma once
#include "CoreMinimal.h"
#include "GetPublisherAppOwnershipChangesMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPublisherAppOwnershipChangesMinimalDelegate, bool, bSuccessful, const FString&, Content);

