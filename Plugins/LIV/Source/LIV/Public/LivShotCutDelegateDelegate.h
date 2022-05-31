#pragma once
#include "CoreMinimal.h"
#include "LivShotCutDelegateDelegate.generated.h"

class ALivCameraController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLivShotCutDelegate, ALivCameraController*, Controller);

