#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetNewsForAppMinimalDelegateDelegate.h"
#include "GetNewsForAppDelegateDelegate.h"
#include "UWorksRequestWebGetNewsForApp.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetNewsForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNewsForAppDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNewsForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetNewsForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

