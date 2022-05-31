#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksRequestCore.h"
#include "ServerStoreUserStatsDelegateDelegate.h"
#include "ServerStoreUserStatsMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreStoreUserStats.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerStoreUserStatsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerStoreUserStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStoreUserStats();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

