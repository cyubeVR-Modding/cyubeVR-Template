#pragma once
#include "CoreMinimal.h"
#include "LivShotTickDelegateDelegate.generated.h"

class ALivCameraController;
class ULivCaptureBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLivShotTickDelegate, ALivCameraController*, Controller, ULivCaptureBase*, CaptureComponent, float, ShotTime, float, DeltaTime);

