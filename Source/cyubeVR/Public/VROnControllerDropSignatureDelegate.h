#pragma once
#include "CoreMinimal.h"
#include "BPActorGripInformation.h"
#include "VROnControllerDropSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVROnControllerDropSignature, const FBPActorGripInformation&, GripInformation, bool, bWasSocketed);

