#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "CreateItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCreateItemDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksPublishedFileID, PublishedFileID, bool, bUserNeedsToAcceptWorkshopLegalAgreement);

