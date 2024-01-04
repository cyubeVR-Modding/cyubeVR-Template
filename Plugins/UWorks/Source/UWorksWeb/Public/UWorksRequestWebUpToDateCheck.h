#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UpToDateCheckDelegateDelegate.h"
#include "UpToDateCheckMinimalDelegateDelegate.h"
#include "UWorksRequestWebUpToDateCheck.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebUpToDateCheck : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpToDateCheckDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpToDateCheckMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpToDateCheck();

    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, int32 VersionToCheck);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

