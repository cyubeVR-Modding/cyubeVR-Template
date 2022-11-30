#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAppListDelegateDelegate.h"
#include "GetAppListMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAppList.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetAppList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppList();
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

