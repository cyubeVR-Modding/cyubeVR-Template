#pragma once
#include "CoreMinimal.h"
#include "GetPriceSheetDelegateDelegate.h"
#include "GetPriceSheetMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetPriceSheet.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPriceSheetDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPriceSheetMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPriceSheet();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 ECurrency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

