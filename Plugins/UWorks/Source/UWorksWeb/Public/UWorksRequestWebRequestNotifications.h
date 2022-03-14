#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "RequestNotificationsDelegateDelegate.h"
#include "RequestNotificationsMinimalDelegateDelegate.h"
#include "UWorksRequestWebRequestNotifications.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestNotificationsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestNotificationsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRequestNotifications();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

