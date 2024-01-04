#pragma once
#include "CoreMinimal.h"
#include "FinalizeTxnDelegateDelegate.h"
#include "FinalizeTxnMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebFinalizeTxn.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebFinalizeTxn : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinalizeTxnDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinalizeTxnMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFinalizeTxn();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& OrderID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

