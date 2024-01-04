#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "GetAccountPublicInfoDelegateDelegate.h"
#include "GetAccountPublicInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebGetAccountPublicInfo.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetAccountPublicInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAccountPublicInfoDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAccountPublicInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAccountPublicInfo();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

