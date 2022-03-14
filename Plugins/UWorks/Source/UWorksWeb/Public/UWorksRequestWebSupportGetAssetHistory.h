#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SupportGetAssetHistoryDelegateDelegate.h"
#include "SupportGetAssetHistoryMinimalDelegateDelegate.h"
#include "UWorksRequestWebSupportGetAssetHistory.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebSupportGetAssetHistory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSupportGetAssetHistoryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSupportGetAssetHistoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSupportGetAssetHistory();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& AssetID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

