#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "JoinLobbyDelegateDelegate.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "CoreJoinLobbyNode.generated.h"

class UCoreJoinLobbyNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreJoinLobbyNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinLobbyDelegate Completed;
    
    UCoreJoinLobbyNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDLobby, const TArray<uint8>& ChatPermissions, bool bLocked, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    static UCoreJoinLobbyNode* JoinLobbyNode(FUWorksSteamID SteamIDLobby);
    
};

