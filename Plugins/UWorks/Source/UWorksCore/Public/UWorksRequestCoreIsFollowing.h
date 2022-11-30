#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "IsFollowingDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "IsFollowingMinimalDelegateDelegate.h"
#include "UWorksRequestCoreIsFollowing.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreIsFollowing : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsFollowingDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

