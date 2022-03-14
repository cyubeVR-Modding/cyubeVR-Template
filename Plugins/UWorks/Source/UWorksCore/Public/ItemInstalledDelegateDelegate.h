#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "ItemInstalledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemInstalledDelegate, int32, AppID, FUWorksPublishedFileID, PublishedFileID);

