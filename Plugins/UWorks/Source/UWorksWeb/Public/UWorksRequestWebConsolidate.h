#pragma once
#include "CoreMinimal.h"
#include "ConsolidateDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamItemDef.h"
#include "ConsolidateMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebConsolidate.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebConsolidate : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsolidateDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsolidateMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebConsolidate();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, TArray<FUWorksSteamItemDef> ItemDefID, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

