#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetUserInfoDelegateDelegate.h"
#include "GetUserInfoNode.generated.h"

class UGetUserInfoNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetUserInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserInfoDelegate Completed;
    
    UGetUserInfoNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserInfoNode* GetUserInfoNode(const FString& Key, FUWorksSteamID SteamID, const FString& IPAddress);
    
};

