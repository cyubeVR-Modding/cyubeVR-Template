#pragma once
#include "CoreMinimal.h"
#include "EUWorksUserSession.h"
#include "UWorksInterfaceWeb.h"
#include "RefundTxnMinimalDelegateDelegate.h"
#include "ProcessAgreementMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetUserInfoMinimalDelegateDelegate.h"
#include "QueryTxnMinimalDelegateDelegate.h"
#include "AdjustAgreementMinimalDelegateDelegate.h"
#include "UWorksSteamItemDef.h"
#include "InitTxnMinimalDelegateDelegate.h"
#include "GetUserAgreementInfoMinimalDelegateDelegate.h"
#include "EUWorksReportType.h"
#include "GetReportMinimalDelegateDelegate.h"
#include "FinalizeTxnMinimalDelegateDelegate.h"
#include "CancelAgreementMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebMicroTxn.generated.h"

class UUWorksRequestWebQueryTxn;
class UUWorksRequestWebRefundTxn;
class UUWorksRequestWebProcessAgreement;
class UUWorksRequestWebInitTxn;
class UUWorksRequestWebGetUserInfo;
class UUWorksRequestWebGetUserAgreementInfo;
class UUWorksRequestWebGetReport;
class UUWorksRequestWebFinalizeTxn;
class UUWorksRequestWebCancelAgreement;
class UUWorksRequestWebAdjustAgreement;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebMicroTxn : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebMicroTxn();
    UFUNCTION(BlueprintCallable)
    static void RefundTxnMinimal(const FString& Key, const FString& OrderID, int32 AppID, const FRefundTxnMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRefundTxn* RefundTxn();
    
    UFUNCTION(BlueprintCallable)
    static void QueryTxnMinimal(const FString& Key, int32 AppID, const FString& OrderID, const FString& TransID, const FQueryTxnMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebQueryTxn* QueryTxn();
    
    UFUNCTION(BlueprintCallable)
    static void ProcessAgreementMinimal(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, int32 Amount, const FString& Currency, const FProcessAgreementMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebProcessAgreement* ProcessAgreement();
    
    UFUNCTION(BlueprintCallable)
    static void InitTxnMinimal(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, int32 AppID, int32 ItemCount, const FString& Language, const FString& Currency, TArray<FUWorksSteamItemDef> itemIds, TArray<int32> Quantities, TArray<int32> Amounts, TArray<FString> Descriptions, TArray<FString> Categories, TArray<int32> AssociatedBundles, TArray<FString> BillingTypes, TArray<FString> StartDates, TArray<FString> EndDates, TArray<FString> Periods, TArray<int32> Frequencies, TArray<FString> RecurringAmounts, int32 BundleCount, TArray<int32> BundleIDs, TArray<int32> BundleQuantities, TArray<FString> BundleDescriptions, TArray<FString> BundleCategories, EUWorksUserSession UserSession, const FString& IPAddress, const FInitTxnMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebInitTxn* InitTxn();
    
    UFUNCTION(BlueprintCallable)
    static void GetUserInfoMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& IPAddress, const FGetUserInfoMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetUserInfo* GetUserInfo();
    
    UFUNCTION(BlueprintCallable)
    static void GetUserAgreementInfoMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserAgreementInfoMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetUserAgreementInfo* GetUserAgreementInfo();
    
    UFUNCTION(BlueprintCallable)
    static void GetReportMinimal(const FString& Key, int32 AppID, const FString& Time, EUWorksReportType Type, int32 MaxResults, const FGetReportMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetReport* GetReport();
    
    UFUNCTION(BlueprintCallable)
    static void FinalizeTxnMinimal(const FString& Key, const FString& OrderID, int32 AppID, const FFinalizeTxnMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebFinalizeTxn* FinalizeTxn();
    
    UFUNCTION(BlueprintCallable)
    static void CancelAgreementMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, const FCancelAgreementMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebCancelAgreement* CancelAgreement();
    
    UFUNCTION(BlueprintCallable)
    static void AdjustAgreementMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, const FString& NextProcessDate, const FAdjustAgreementMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebAdjustAgreement* AdjustAgreement();
    
};

