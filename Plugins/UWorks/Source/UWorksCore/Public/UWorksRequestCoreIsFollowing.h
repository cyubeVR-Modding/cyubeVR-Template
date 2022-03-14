#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "UWorksSteamID.h"
#include "IsFollowingDelegateDelegate.h"
#include "IsFollowingMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreIsFollowing.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreIsFollowing : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIsFollowingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIsFollowingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreIsFollowing();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, bool& bIsFollowing);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

