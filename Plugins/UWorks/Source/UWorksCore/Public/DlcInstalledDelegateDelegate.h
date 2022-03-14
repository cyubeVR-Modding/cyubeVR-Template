#pragma once
#include "CoreMinimal.h"
#include "DlcInstalledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDlcInstalledDelegate, int32, AppID);

