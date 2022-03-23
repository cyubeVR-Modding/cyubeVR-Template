#pragma once
#include "CoreMinimal.h"
#include "DownloadPakDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDownloadPakDelegate, int32, HttpResponseCode, int32, ContentLength, const FString&, SavePath, int32, bytesReceived);

