#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "CreateItemMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FCreateItemMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksPublishedFileID, PublishedFileID, bool, bUserNeedsToAcceptWorkshopLegalAgreement);

