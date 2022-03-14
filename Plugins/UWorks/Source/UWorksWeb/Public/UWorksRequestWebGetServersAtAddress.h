#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetServersAtAddressDelegateDelegate.h"
#include "GetServersAtAddressMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetServersAtAddress.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServersAtAddressDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServersAtAddressMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServersAtAddress();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Addr);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

