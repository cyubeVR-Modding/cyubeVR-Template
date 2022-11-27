#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "AssociateWithClanDelegateDelegate.h"
#include "AssociateWithClanMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreAssociateWithClan.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreAssociateWithClan : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssociateWithClanDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

