#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "ReportAbuseMinimalDelegateDelegate.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksInterfaceWebCommunity.generated.h"

class UUWorksRequestWebReportAbuse;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebCommunity : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebCommunity();

    UFUNCTION(BlueprintCallable)
    static void ReportAbuseMinimal(const FString& Key, FUWorksSteamID SteamIDActor, FUWorksSteamID SteamIDTarget, int32 AppID, uint8 AbuseType, uint8 ContentType, const FString& Description, const FString& GID, const FReportAbuseMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebReportAbuse* ReportAbuse();
    
};

