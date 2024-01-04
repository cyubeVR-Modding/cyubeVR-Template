#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnNeedsPathMoveRotationSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnNeedsPathMoveRotationSignatureUObject, FName, EnterPropertyName, FVector, TargetLocation, FVector, TargetUpVector, FVector, TargetForwardVector);

