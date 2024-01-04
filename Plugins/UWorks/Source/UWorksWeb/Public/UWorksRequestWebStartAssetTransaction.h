#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "StartAssetTransactionDelegateDelegate.h"
#include "StartAssetTransactionMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebStartAssetTransaction.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebStartAssetTransaction : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartAssetTransactionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartAssetTransactionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebStartAssetTransaction();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& AssetID, int32 AssetQuantity, const FString& Currency, const FString& Language, const FString& IPAddress, const FString& Referrer, bool bClientAuth);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

