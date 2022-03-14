#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "PopulateItemDescriptionsDelegateDelegate.h"
#include "PopulateItemDescriptionsMinimalDelegateDelegate.h"
#include "UWorksLanguages.h"
#include "UWorksRequestWebPopulateItemDescriptions.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebPopulateItemDescriptions : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPopulateItemDescriptionsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPopulateItemDescriptionsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebPopulateItemDescriptions();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksLanguages Languages);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

