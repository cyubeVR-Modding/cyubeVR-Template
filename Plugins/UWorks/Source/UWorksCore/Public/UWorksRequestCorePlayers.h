#pragma once
#include "CoreMinimal.h"
#include "PlayersDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "PlayersUpdateDelegateDelegate.h"
#include "UWorksPlayerInfo.h"
#include "PlayersMinimalDelegateDelegate.h"
#include "PlayersUpdateMinimalDelegateDelegate.h"
#include "UWorksRequestCorePlayers.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCorePlayers : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersUpdateDelegate OnRequestUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersMinimalDelegate OnRequestCompletedMinimal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersUpdateMinimalDelegate OnRequestUpdatedMinimal;
    
    UUWorksRequestCorePlayers();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksPlayerInfo& UpdatedPlayer, TArray<FUWorksPlayerInfo>& Players);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

