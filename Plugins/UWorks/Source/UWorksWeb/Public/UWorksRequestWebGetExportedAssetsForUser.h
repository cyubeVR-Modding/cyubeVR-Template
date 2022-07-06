#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetExportedAssetsForUserDelegateDelegate.h"
#include "GetExportedAssetsForUserMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebGetExportedAssetsForUser.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetExportedAssetsForUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetExportedAssetsForUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetExportedAssetsForUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

