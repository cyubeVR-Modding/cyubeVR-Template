#pragma once
#include "CoreMinimal.h"
#include "GetPlayerSummariesDelegateDelegate.h"
#include "GetPlayerSummariesMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetPlayerSummaries.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayerSummariesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayerSummariesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPlayerSummaries();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SteamIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

