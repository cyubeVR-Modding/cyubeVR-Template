#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "QueryTxnDelegateDelegate.h"
#include "QueryTxnMinimalDelegateDelegate.h"
#include "UWorksRequestWebQueryTxn.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebQueryTxn : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQueryTxnDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQueryTxnMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebQueryTxn();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& OrderID, const FString& TransID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

