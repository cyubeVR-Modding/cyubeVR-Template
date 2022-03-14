#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWeb.h"
#include "GetUGCFileDetailsDelegateDelegate.h"
#include "GetUGCFileDetailsMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetUGCFileDetails.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUGCFileDetails : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUGCFileDetailsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUGCFileDetailsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUGCFileDetails();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

