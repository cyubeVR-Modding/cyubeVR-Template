#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "UnsubscribeItemMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FUnsubscribeItemMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksPublishedFileID, PublishedFileID);

