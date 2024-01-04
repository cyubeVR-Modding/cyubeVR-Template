#pragma once
#include "CoreMinimal.h"
#include "GetServersAtAddressDelegateDelegate.h"
#include "GetServersAtAddressMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetServersAtAddress.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServersAtAddressDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServersAtAddressMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServersAtAddress();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Addr);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

