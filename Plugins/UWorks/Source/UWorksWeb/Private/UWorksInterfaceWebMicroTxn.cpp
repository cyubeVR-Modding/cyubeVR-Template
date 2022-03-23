#include "UWorksInterfaceWebMicroTxn.h"

class UUWorksRequestWebGetUserInfo;
class UUWorksRequestWebRefundTxn;
class UUWorksRequestWebQueryTxn;
class UUWorksRequestWebCancelAgreement;
class UUWorksRequestWebProcessAgreement;
class UUWorksRequestWebInitTxn;
class UUWorksRequestWebGetUserAgreementInfo;
class UUWorksRequestWebGetReport;
class UUWorksRequestWebFinalizeTxn;
class UUWorksRequestWebAdjustAgreement;

void UUWorksInterfaceWebMicroTxn::RefundTxnMinimal(const FString& Key, const FString& OrderID, int32 AppID, const FRefundTxnMinimalDelegate& Delegate) {
}

UUWorksRequestWebRefundTxn* UUWorksInterfaceWebMicroTxn::RefundTxn() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::QueryTxnMinimal(const FString& Key, int32 AppID, const FString& OrderID, const FString& TransID, const FQueryTxnMinimalDelegate& Delegate) {
}

UUWorksRequestWebQueryTxn* UUWorksInterfaceWebMicroTxn::QueryTxn() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::ProcessAgreementMinimal(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, int32 Amount, const FString& Currency, const FProcessAgreementMinimalDelegate& Delegate) {
}

UUWorksRequestWebProcessAgreement* UUWorksInterfaceWebMicroTxn::ProcessAgreement() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::InitTxnMinimal(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, const FString& Language, const FString& Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, const FString& IPAddress, const FInitTxnMinimalDelegate& Delegate) {
}

UUWorksRequestWebInitTxn* UUWorksInterfaceWebMicroTxn::InitTxn() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::GetUserInfoMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& IPAddress, const FGetUserInfoMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetUserInfo* UUWorksInterfaceWebMicroTxn::GetUserInfo() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::GetUserAgreementInfoMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserAgreementInfoMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetUserAgreementInfo* UUWorksInterfaceWebMicroTxn::GetUserAgreementInfo() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::GetReportMinimal(const FString& Key, int32 AppID, const FString& Time, EUWorksReportType Type, int32 MaxResults, const FGetReportMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetReport* UUWorksInterfaceWebMicroTxn::GetReport() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::FinalizeTxnMinimal(const FString& Key, const FString& OrderID, int32 AppID, const FFinalizeTxnMinimalDelegate& Delegate) {
}

UUWorksRequestWebFinalizeTxn* UUWorksInterfaceWebMicroTxn::FinalizeTxn() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::CancelAgreementMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, const FCancelAgreementMinimalDelegate& Delegate) {
}

UUWorksRequestWebCancelAgreement* UUWorksInterfaceWebMicroTxn::CancelAgreement() {
    return NULL;
}

void UUWorksInterfaceWebMicroTxn::AdjustAgreementMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, const FString& NextProcessDate, const FAdjustAgreementMinimalDelegate& Delegate) {
}

UUWorksRequestWebAdjustAgreement* UUWorksInterfaceWebMicroTxn::AdjustAgreement() {
    return NULL;
}

UUWorksInterfaceWebMicroTxn::UUWorksInterfaceWebMicroTxn() {
}

