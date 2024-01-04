#pragma once
#include "CoreMinimal.h"
#include "GetServerListDelegateDelegate.h"
#include "GetServerListMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetServerList.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetServerList : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServerListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServerListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServerList();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& Filter, int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

