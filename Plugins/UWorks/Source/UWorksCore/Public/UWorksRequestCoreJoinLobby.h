#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinLobbyDelegateDelegate.h"
#include "JoinLobbyMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreJoinLobby.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreJoinLobby : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FJoinLobbyDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FJoinLobbyMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreJoinLobby();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksSteamID& SteamIDLobby, TArray<uint8>& ChatPermissions, bool& bLocked, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

