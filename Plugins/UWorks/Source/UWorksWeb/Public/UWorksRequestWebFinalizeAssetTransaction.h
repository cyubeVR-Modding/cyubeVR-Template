#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "FinalizeAssetTransactionDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "FinalizeAssetTransactionMinimalDelegateDelegate.h"
#include "UWorksRequestWebFinalizeAssetTransaction.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebFinalizeAssetTransaction : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinalizeAssetTransactionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinalizeAssetTransactionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFinalizeAssetTransaction();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& TxnID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

