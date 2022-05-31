#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "SupportGetAssetHistoryDelegateDelegate.h"
#include "SupportGetAssetHistoryMinimalDelegateDelegate.h"
#include "UWorksRequestWebSupportGetAssetHistory.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebSupportGetAssetHistory : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupportGetAssetHistoryDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupportGetAssetHistoryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebSupportGetAssetHistory();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& AssetID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

