#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetServerListDelegateDelegate.h"
#include "GetServerListMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetServerList.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetServerList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetServerListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServerList();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& Filter, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

