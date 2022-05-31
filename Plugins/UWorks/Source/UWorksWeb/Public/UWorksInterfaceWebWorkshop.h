#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "UWorksAssociatedWorkshopFiles.h"
#include "GetFinalizedContributorsMinimalDelegateDelegate.h"
#include "UWorksPartnerAccounts.h"
#include "UWorksLanguages.h"
#include "SetItemPaymentRulesMinimalDelegateDelegate.h"
#include "PopulateItemDescriptionsMinimalDelegateDelegate.h"
#include "GetItemDailyRevenueMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebWorkshop.generated.h"

class UUWorksRequestWebPopulateItemDescriptions;
class UUWorksRequestWebSetItemPaymentRules;
class UUWorksRequestWebGetItemDailyRevenue;
class UUWorksRequestWebGetFinalizedContributors;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebWorkshop : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebWorkshop();
    UFUNCTION(BlueprintCallable)
    static void SetItemPaymentRulesMinimal(const FString& Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, const FSetItemPaymentRulesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetItemPaymentRules* SetItemPaymentRules();
    
    UFUNCTION(BlueprintCallable)
    static void PopulateItemDescriptionsMinimal(const FString& Key, int32 AppID, FUWorksLanguages Languages, const FPopulateItemDescriptionsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebPopulateItemDescriptions* PopulateItemDescriptions();
    
    UFUNCTION(BlueprintCallable)
    static void GetItemDailyRevenueMinimal(const FString& Key, int32 AppID, const FString& ItemId, int32 DateStart, int32 DateEnd, const FGetItemDailyRevenueMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetItemDailyRevenue* GetItemDailyRevenue();
    
    UFUNCTION(BlueprintCallable)
    static void GetFinalizedContributorsMinimal(const FString& Key, int32 AppID, int32 GameItemID, const FGetFinalizedContributorsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetFinalizedContributors* GetFinalizedContributors();
    
};

