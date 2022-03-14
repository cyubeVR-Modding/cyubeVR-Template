#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VRGripControllerOnProfileTransformChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVRGripControllerOnProfileTransformChanged, const FTransform&, NewRelTransForProcComps, const FTransform&, NewProfileTransform);

