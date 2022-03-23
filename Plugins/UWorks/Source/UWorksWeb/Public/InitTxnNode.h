#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "InitTxnDelegateDelegate.h"
#include "EUWorksUserSession.h"
#include "UWorksSteamID.h"
#include "UWorksSteamItemDef.h"
#include "InitTxnNode.generated.h"

class UInitTxnNode;

UCLASS()
class UWORKSWEB_API UInitTxnNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInitTxnDelegate Completed;
    
    UInitTxnNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UInitTxnNode* InitTxnNode(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, const FString& Language, const FString& Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, const FString& IPAddress);
    
};

