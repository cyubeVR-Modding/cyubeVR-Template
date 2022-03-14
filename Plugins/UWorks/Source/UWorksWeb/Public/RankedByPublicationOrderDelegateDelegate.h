#pragma once
#include "CoreMinimal.h"
#include "RankedByPublicationOrderDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRankedByPublicationOrderDelegate, bool, bSuccessful, const FString&, Content);

