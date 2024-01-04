#pragma once
#include "CoreMinimal.h"
#include "GetAssetIDDelegateDelegate.h"
#include "GetAssetIDMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetAssetID.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetAssetID : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAssetIDDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAssetIDMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAssetID();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& ListingID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

