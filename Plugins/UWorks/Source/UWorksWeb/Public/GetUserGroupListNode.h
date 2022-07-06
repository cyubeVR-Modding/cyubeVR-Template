#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetUserGroupListDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetUserGroupListNode.generated.h"

class UGetUserGroupListNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetUserGroupListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserGroupListDelegate Completed;
    
    UGetUserGroupListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserGroupListNode* GetUserGroupListNode(const FString& Key, FUWorksSteamID SteamID);
    
};

