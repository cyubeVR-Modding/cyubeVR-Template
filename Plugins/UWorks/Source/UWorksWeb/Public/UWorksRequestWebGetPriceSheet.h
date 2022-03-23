#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetPriceSheetMinimalDelegateDelegate.h"
#include "GetPriceSheetDelegateDelegate.h"
#include "UWorksRequestWebGetPriceSheet.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPriceSheetDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPriceSheetMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPriceSheet();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 ECurrency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

