#pragma once
#include "CoreMinimal.h"
#include "PostGameDataFrameMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPostGameDataFrameMinimalDelegate, bool, bSuccessful, const FString&, Content);

