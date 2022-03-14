#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPlayerSummariesDelegateDelegate.h"
#include "GetPlayerSummariesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetPlayerSummaries.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerSummariesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPlayerSummariesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayerSummaries();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

