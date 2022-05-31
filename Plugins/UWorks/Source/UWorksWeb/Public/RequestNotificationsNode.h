#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestNotificationsDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "RequestNotificationsNode.generated.h"

class URequestNotificationsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API URequestNotificationsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestNotificationsDelegate Completed;
    
    URequestNotificationsNode();
    UFUNCTION(BlueprintCallable)
    static URequestNotificationsNode* RequestNotificationsNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

