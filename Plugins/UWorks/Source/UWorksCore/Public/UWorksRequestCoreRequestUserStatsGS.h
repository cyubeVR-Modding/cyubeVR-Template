#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "UWorksSteamID.h"
#include "ServerRequestUserStatsMinimalDelegateDelegate.h"
#include "ServerRequestUserStatsDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestUserStatsGS.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestUserStatsGS : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerRequestUserStatsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerRequestUserStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestUserStatsGS();
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

