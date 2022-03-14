#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "QueryLoginTokenMinimalDelegateDelegate.h"
#include "QueryLoginTokenDelegateDelegate.h"
#include "UWorksRequestWebQueryLoginToken.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQueryLoginTokenDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQueryLoginTokenMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebQueryLoginToken();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& LoginToken);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

