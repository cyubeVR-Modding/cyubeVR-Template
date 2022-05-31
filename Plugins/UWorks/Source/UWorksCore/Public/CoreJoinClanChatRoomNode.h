#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "JoinClanChatRoomDelegateDelegate.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "UWorksSteamID.h"
#include "CoreJoinClanChatRoomNode.generated.h"

class UCoreJoinClanChatRoomNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinClanChatRoomDelegate Completed;
    
    UCoreJoinClanChatRoomNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    static UCoreJoinClanChatRoomNode* JoinClanChatRoomNode(FUWorksSteamID SteamIDClan);
    
};

