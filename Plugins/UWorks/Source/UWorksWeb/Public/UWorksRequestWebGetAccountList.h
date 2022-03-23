#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAccountListDelegateDelegate.h"
#include "GetAccountListMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAccountList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAccountList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAccountListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAccountListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAccountList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

