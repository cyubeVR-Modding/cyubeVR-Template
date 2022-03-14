#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "GSStatsUnloadedDelegateDelegate.h"
#include "ServerRequestUserStatsMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "ServerStoreUserStatsMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreGameServerStats.generated.h"

class UUWorksInterfaceCoreGameServerStats;
class UUWorksRequestCoreStoreUserStats;
class UUWorksRequestCoreRequestUserStatsGS;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreGameServerStats : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGSStatsUnloadedDelegate GSStatsUnloaded;
    
    UUWorksInterfaceCoreGameServerStats();
    UFUNCTION(BlueprintCallable)
    bool UpdateUserAvgRateStat(FUWorksSteamID SteamIDUser, const FString& Name, float CountThisSession, float SessionLength);
    
    UFUNCTION(BlueprintCallable)
    void StoreUserStatsMinimal(const FServerStoreUserStatsMinimalDelegate& Completed, FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreStoreUserStats* StoreUserStats();
    
    UFUNCTION(BlueprintCallable)
    bool SetUserStatFromInteger(FUWorksSteamID SteamIDUser, const FString& Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetUserStatFromFloat(FUWorksSteamID SteamIDUser, const FString& Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void RequestUserStatsMinimal(const FServerRequestUserStatsMinimalDelegate& Completed, FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestUserStatsGS* RequestUserStats();
    
    UFUNCTION(BlueprintCallable)
    bool GetUserStatAsInteger(FUWorksSteamID SteamIDUser, const FString& Name, int32& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserStatAsFloat(FUWorksSteamID SteamIDUser, const FString& Name, float& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreGameServerStats* GetGameServerStats();
    
    UFUNCTION(BlueprintCallable)
    bool ClearUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name);
    
};

