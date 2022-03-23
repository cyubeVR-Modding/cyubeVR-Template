#pragma once
#include "CoreMinimal.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate2.h"
#include "UWorksRequestWeb.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate2.h"
#include "UWorksRequestWebGetNumberOfCurrentPlayers.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetNumberOfCurrentPlayers();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

