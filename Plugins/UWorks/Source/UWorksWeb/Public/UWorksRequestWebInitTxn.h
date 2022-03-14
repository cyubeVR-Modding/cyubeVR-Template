#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "InitTxnDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksSteamItemDef.h"
#include "InitTxnMinimalDelegateDelegate.h"
#include "EUWorksUserSession.h"
#include "UWorksRequestWebInitTxn.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebInitTxn : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInitTxnDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInitTxnMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebInitTxn();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, const FString& Language, const FString& Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, const FString& IPAddress);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

