#pragma once
#include "CoreMinimal.h"
#include "GetPublisherAppOwnershipDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetPublisherAppOwnershipDelegate, bool, bSuccessful, const FString&, Content);

