#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetSessionDetailsForAppDelegateDelegate.h"
#include "GetSessionDetailsForAppMinimalDelegateDelegate.h"
#include "UWorksSessions.h"
#include "UWorksRequestWebGetSessionDetailsForApp.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetSessionDetailsForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSessionDetailsForAppDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSessionDetailsForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetSessionDetailsForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSessions Sessions, int32 AppID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

