#pragma once
#include "CoreMinimal.h"
#include "UWorksScreenshotHandle.h"
#include "EUWorksResult.h"
#include "ScreenshotReadyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScreenshotReadyDelegate, FUWorksScreenshotHandle, Handle, EUWorksResult, Result);

