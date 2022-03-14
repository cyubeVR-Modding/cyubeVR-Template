#pragma once
#include "CoreMinimal.h"
#include "EnumerateUserSubscribedFilesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnumerateUserSubscribedFilesDelegate, bool, bSuccessful, const FString&, Content);

