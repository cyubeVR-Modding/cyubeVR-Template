#pragma once
#include "CoreMinimal.h"
#include "GetAppDepotVersionsMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetAppDepotVersionsDelegateDelegate.h"
#include "UWorksRequestWebGetAppDepotVersions.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetAppDepotVersions : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppDepotVersionsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppDepotVersionsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppDepotVersions();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

