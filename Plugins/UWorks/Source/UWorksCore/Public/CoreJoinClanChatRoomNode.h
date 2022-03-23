#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "JoinClanChatRoomDelegateDelegate.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "CoreJoinClanChatRoomNode.generated.h"

class UCoreJoinClanChatRoomNode;

UCLASS()
class UWORKSCORE_API UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FJoinClanChatRoomDelegate Completed;
    
    UCoreJoinClanChatRoomNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    static UCoreJoinClanChatRoomNode* JoinClanChatRoomNode(FUWorksSteamID SteamIDClan);
    
};

