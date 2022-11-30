#pragma once
#include "CoreMinimal.h"
#include "PlayersUpdateMinimalDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "ServerListMinimalDelegateDelegate.h"
#include "EUWorksServerQueryType.h"
#include "ServerListUpdateMinimalDelegateDelegate.h"
#include "RulesMinimalDelegateDelegate.h"
#include "RulesUpdateMinimalDelegateDelegate.h"
#include "PlayersMinimalDelegateDelegate.h"
#include "PingMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreMatchmakingServers.generated.h"

class UUWorksRequestCoreServerList;
class UUWorksInterfaceCoreMatchmakingServers;
class UUWorksRequestCoreRules;
class UUWorksRequestCorePlayers;
class UUWorksRequestCorePing;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreMatchmakingServers : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UUWorksInterfaceCoreMatchmakingServers();
    UFUNCTION(BlueprintCallable)
    void ServerListMinimal(const FServerListMinimalDelegate& Completed, const FServerListUpdateMinimalDelegate& Updated, int32 AppID, EUWorksServerQueryType queryType);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreServerList* ServerList();
    
    UFUNCTION(BlueprintCallable)
    void RulesMinimal(const FRulesMinimalDelegate& Completed, const FRulesUpdateMinimalDelegate& Updated, const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRules* Rules();
    
    UFUNCTION(BlueprintCallable)
    void PlayersMinimal(const FPlayersMinimalDelegate& Completed, const FPlayersUpdateMinimalDelegate& Updated, const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCorePlayers* Players();
    
    UFUNCTION(BlueprintCallable)
    void PingMinimal(const FPingMinimalDelegate& Completed, const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCorePing* Ping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreMatchmakingServers* GetMatchmakingServers();
    
};

