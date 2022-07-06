#pragma once
#include "CoreMinimal.h"
#include "QueryTxnMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "QueryTxnDelegateDelegate.h"
#include "UWorksRequestWebQueryTxn.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebQueryTxn : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryTxnDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryTxnMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebQueryTxn();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& OrderID, const FString& TransID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

