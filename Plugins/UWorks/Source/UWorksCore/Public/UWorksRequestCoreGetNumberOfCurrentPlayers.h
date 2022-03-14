#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate.h"
#include "UWorksRequestCoreGetNumberOfCurrentPlayers.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetNumberOfCurrentPlayers : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetNumberOfCurrentPlayers();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(bool& bSuccess, int32& Players);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

