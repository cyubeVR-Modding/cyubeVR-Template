#pragma once
#include "CoreMinimal.h"
#include "EnumerateUserPublishedFilesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnumerateUserPublishedFilesDelegate, bool, bSuccessful, const FString&, Content);

