#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "QueryLoginTokenDelegateDelegate.h"
#include "QueryLoginTokenMinimalDelegateDelegate.h"
#include "UWorksRequestWebQueryLoginToken.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryLoginTokenDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryLoginTokenMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebQueryLoginToken();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& LoginToken);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

