#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "ResolveVanityURLDelegateDelegate.h"
#include "ResolveVanityURLMinimalDelegateDelegate.h"
#include "UWorksRequestWebResolveVanityURL.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebResolveVanityURL : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResolveVanityURLDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FResolveVanityURLMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebResolveVanityURL();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& VanityURL, uint8 URLType);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

