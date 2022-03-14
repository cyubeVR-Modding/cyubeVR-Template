#pragma once
#include "CoreMinimal.h"
#include "GetCollectionDetailsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetCollectionDetailsDelegate, bool, bSuccessful, const FString&, Content);

