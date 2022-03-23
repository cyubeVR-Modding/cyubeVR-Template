#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetFriendListDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetFriendListNode.generated.h"

class UGetFriendListNode;

UCLASS()
class UWORKSWEB_API UGetFriendListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetFriendListDelegate Completed;
    
    UGetFriendListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetFriendListNode* GetFriendListNode(const FString& Key, FUWorksSteamID SteamID, const FString& Relationship);
    
};

