#pragma once
#include "CoreMinimal.h"
#include "PostGameDataFrameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPostGameDataFrameDelegate, bool, bSuccessful, const FString&, Content);

