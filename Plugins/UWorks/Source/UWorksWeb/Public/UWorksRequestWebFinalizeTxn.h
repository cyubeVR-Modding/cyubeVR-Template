#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FinalizeTxnDelegateDelegate.h"
#include "FinalizeTxnMinimalDelegateDelegate.h"
#include "UWorksRequestWebFinalizeTxn.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebFinalizeTxn : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFinalizeTxnDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFinalizeTxnMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFinalizeTxn();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& OrderID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

