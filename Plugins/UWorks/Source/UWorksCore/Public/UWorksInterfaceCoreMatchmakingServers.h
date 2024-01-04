#pragma once
#include "CoreMinimal.h"
#include "EUWorksServerQueryType.h"
#include "PingMinimalDelegateDelegate.h"
#include "PlayersMinimalDelegateDelegate.h"
#include "PlayersUpdateMinimalDelegateDelegate.h"
#include "RulesMinimalDelegateDelegate.h"
#include "RulesUpdateMinimalDelegateDelegate.h"
#include "ServerListMinimalDelegateDelegate.h"
#include "ServerListUpdateMinimalDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "UWorksInterfaceCoreMatchmakingServers.generated.h"

class UUWorksInterfaceCoreMatchmakingServers;
class UUWorksRequestCorePing;
class UUWorksRequestCorePlayers;
class UUWorksRequestCoreRules;
class UUWorksRequestCoreServerList;

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

