#pragma once
#include "CoreMinimal.h"
#include "AssociateWithClanMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "AssociateWithClanDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreAssociateWithClan.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreAssociateWithClan : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAssociateWithClanDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAssociateWithClanMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreAssociateWithClan();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

