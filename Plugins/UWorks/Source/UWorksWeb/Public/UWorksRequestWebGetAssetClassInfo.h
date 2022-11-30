#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetAssetClassInfoDelegateDelegate.h"
#include "GetAssetClassInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAssetClassInfo.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetAssetClassInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAssetClassInfoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAssetClassInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAssetClassInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 ClassCount, const FString& ClassID, const FString& Language, const FString& InstanceID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

