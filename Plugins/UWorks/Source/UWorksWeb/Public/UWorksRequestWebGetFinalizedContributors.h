#pragma once
#include "CoreMinimal.h"
#include "GetFinalizedContributorsMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetFinalizedContributorsDelegateDelegate.h"
#include "UWorksRequestWebGetFinalizedContributors.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetFinalizedContributors : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetFinalizedContributorsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetFinalizedContributorsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetFinalizedContributors();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 GameItemID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

