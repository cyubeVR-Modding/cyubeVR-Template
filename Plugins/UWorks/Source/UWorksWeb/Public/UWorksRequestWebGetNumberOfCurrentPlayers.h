#pragma once
#include "CoreMinimal.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate2.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate2.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetNumberOfCurrentPlayers.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetNumberOfCurrentPlayers();

    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

