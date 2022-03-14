#pragma once
#include "CoreMinimal.h"
#include "SubscribePublishedFileDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSubscribePublishedFileDelegate, bool, bSuccessful, const FString&, Content);

