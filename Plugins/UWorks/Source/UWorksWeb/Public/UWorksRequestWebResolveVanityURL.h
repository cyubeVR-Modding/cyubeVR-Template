#pragma once
#include "CoreMinimal.h"
#include "ResolveVanityURLDelegateDelegate.h"
#include "ResolveVanityURLMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebResolveVanityURL.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebResolveVanityURL : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResolveVanityURLDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResolveVanityURLMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebResolveVanityURL();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& VanityURL, uint8 URLType);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

