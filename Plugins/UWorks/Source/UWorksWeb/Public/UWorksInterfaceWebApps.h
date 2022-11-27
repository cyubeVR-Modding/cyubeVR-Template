#pragma once
#include "CoreMinimal.h"
#include "SetAppBuildLiveMinimalDelegateDelegate.h"
#include "UWorksInterfaceWeb.h"
#include "UpToDateCheckMinimalDelegateDelegate.h"
#include "GetServersAtAddressMinimalDelegateDelegate.h"
#include "GetServerListMinimalDelegateDelegate.h"
#include "GetPlayersBannedMinimalDelegateDelegate.h"
#include "GetCheatingReportsListMinimalDelegateDelegate.h"
#include "GetAppListMinimalDelegateDelegate.h"
#include "GetAppDepotVersionsMinimalDelegateDelegate.h"
#include "GetAppBuildsMinimalDelegateDelegate.h"
#include "GetAppBetasMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebApps.generated.h"

class UUWorksRequestWebUpToDateCheck;
class UUWorksRequestWebSetAppBuildLive;
class UUWorksRequestWebGetServersAtAddress;
class UUWorksRequestWebGetServerList;
class UUWorksRequestWebGetPlayersBanned;
class UUWorksRequestWebGetCheatingReportsList;
class UUWorksRequestWebGetAppList;
class UUWorksRequestWebGetAppDepotVersions;
class UUWorksRequestWebGetAppBuilds;
class UUWorksRequestWebGetAppBetas;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebApps : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebApps();
    UFUNCTION(BlueprintCallable)
    static void UpToDateCheckMinimal(int32 AppID, int32 Version, const FUpToDateCheckMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebUpToDateCheck* UpToDateCheck();
    
    UFUNCTION(BlueprintCallable)
    static void SetAppBuildLiveMinimal(const FString& Key, int32 AppID, int32 BuildID, const FString& BetaKey, const FString& Description, const FSetAppBuildLiveMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetAppBuildLive* SetAppBuildLive();
    
    UFUNCTION(BlueprintCallable)
    static void GetServersAtAddressMinimal(const FString& Addr, const FGetServersAtAddressMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetServersAtAddress* GetServersAtAddress();
    
    UFUNCTION(BlueprintCallable)
    static void GetServerListMinimal(const FString& Key, const FString& Filter, int32 Limit, const FGetServerListMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetServerList* GetServerList();
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayersBannedMinimal(const FString& Key, int32 AppID, const FGetPlayersBannedMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPlayersBanned* GetPlayersBanned();
    
    UFUNCTION(BlueprintCallable)
    static void GetCheatingReportsListMinimal(const FString& Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, const FString& ReportIDMin, const FGetCheatingReportsListMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetCheatingReportsList* GetCheatingReportsList();
    
    UFUNCTION(BlueprintCallable)
    static void GetAppListMinimal(const FGetAppListMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAppList* GetAppList();
    
    UFUNCTION(BlueprintCallable)
    static void GetAppDepotVersionsMinimal(const FString& Key, int32 AppID, const FGetAppDepotVersionsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAppDepotVersions* GetAppDepotVersions();
    
    UFUNCTION(BlueprintCallable)
    static void GetAppBuildsMinimal(const FString& Key, int32 AppID, int32 Count, const FGetAppBuildsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAppBuilds* GetAppBuilds();
    
    UFUNCTION(BlueprintCallable)
    static void GetAppBetasMinimal(const FString& Key, int32 AppID, const FGetAppBetasMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAppBetas* GetAppBetas();
    
};

