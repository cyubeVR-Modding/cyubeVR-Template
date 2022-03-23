#include "UWorksInterfaceWebWorkshop.h"

class UUWorksRequestWebSetItemPaymentRules;
class UUWorksRequestWebGetItemDailyRevenue;
class UUWorksRequestWebPopulateItemDescriptions;
class UUWorksRequestWebGetFinalizedContributors;

void UUWorksInterfaceWebWorkshop::SetItemPaymentRulesMinimal(const FString& Key, int32 AppID, int32 GameItemID, FUWorksAssociatedWorkshopFiles AssociatedWorkshopFiles, FUWorksPartnerAccounts PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, const FSetItemPaymentRulesMinimalDelegate& Delegate) {
}

UUWorksRequestWebSetItemPaymentRules* UUWorksInterfaceWebWorkshop::SetItemPaymentRules() {
    return NULL;
}

void UUWorksInterfaceWebWorkshop::PopulateItemDescriptionsMinimal(const FString& Key, int32 AppID, FUWorksLanguages Languages, const FPopulateItemDescriptionsMinimalDelegate& Delegate) {
}

UUWorksRequestWebPopulateItemDescriptions* UUWorksInterfaceWebWorkshop::PopulateItemDescriptions() {
    return NULL;
}

void UUWorksInterfaceWebWorkshop::GetItemDailyRevenueMinimal(const FString& Key, int32 AppID, const FString& ItemId, int32 DateStart, int32 DateEnd, const FGetItemDailyRevenueMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetItemDailyRevenue* UUWorksInterfaceWebWorkshop::GetItemDailyRevenue() {
    return NULL;
}

void UUWorksInterfaceWebWorkshop::GetFinalizedContributorsMinimal(const FString& Key, int32 AppID, int32 GameItemID, const FGetFinalizedContributorsMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetFinalizedContributors* UUWorksInterfaceWebWorkshop::GetFinalizedContributors() {
    return NULL;
}

UUWorksInterfaceWebWorkshop::UUWorksInterfaceWebWorkshop() {
}

