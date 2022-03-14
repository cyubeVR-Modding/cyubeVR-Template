#pragma once
#include "CoreMinimal.h"
#include "SetDeveloperMetadataDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetDeveloperMetadataDelegate, bool, bSuccessful, const FString&, Content);

