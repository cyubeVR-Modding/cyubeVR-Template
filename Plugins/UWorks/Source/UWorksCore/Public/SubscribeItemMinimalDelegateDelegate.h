#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "SubscribeItemMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSubscribeItemMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksPublishedFileID, PublishedFileID);

