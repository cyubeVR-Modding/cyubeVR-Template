#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "RefundTxnDelegateDelegate.h"
#include "RefundTxnMinimalDelegateDelegate.h"
#include "UWorksRequestWebRefundTxn.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebRefundTxn : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRefundTxnDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRefundTxnMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebRefundTxn();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& OrderID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

