#pragma once
#include "CoreMinimal.h"
#include "EndSecureMultiplayerSessionMinimalDelegateDelegate.h"
#include "UWorksInterfaceWeb.h"
#include "RequestVacStatusForUserMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "StartSecureMultiplayerSessionMinimalDelegateDelegate.h"
#include "RequestPlayerGameBanMinimalDelegateDelegate.h"
#include "ReportPlayerCheatingMinimalDelegateDelegate.h"
#include "ReportCheatDataMinimalDelegateDelegate.h"
#include "RemovePlayerGameBanMinimalDelegateDelegate.h"
#include "GetCheatingReportsMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebCheatReporting.generated.h"

class UUWorksRequestWebStartSecureMultiplayerSession;
class UUWorksRequestWebRequestVacStatusForUser;
class UUWorksRequestWebRequestPlayerGameBan;
class UUWorksRequestWebReportPlayerCheating;
class UUWorksRequestWebReportCheatData;
class UUWorksRequestWebRemovePlayerGameBan;
class UUWorksRequestWebGetCheatingReports;
class UUWorksRequestWebEndSecureMultiplayerSession;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebCheatReporting : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebCheatReporting();
    UFUNCTION(BlueprintCallable)
    static void StartSecureMultiplayerSessionMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FStartSecureMultiplayerSessionMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebStartSecureMultiplayerSession* StartSecureMultiplayerSession();
    
    UFUNCTION(BlueprintCallable)
    static void RequestVacStatusForUserMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId, const FRequestVacStatusForUserMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRequestVacStatusForUser* RequestVacStatusForUser();
    
    UFUNCTION(BlueprintCallable)
    static void RequestPlayerGameBanMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID ReportID, const FString& CheatDescription, int32 Duration, bool bDelayBan, const FRequestPlayerGameBanMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRequestPlayerGameBan* RequestPlayerGameBan();
    
    UFUNCTION(BlueprintCallable)
    static void ReportPlayerCheatingMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, FUWorksSteamID SteamIDReporter, int32 AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity, const FReportPlayerCheatingMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebReportPlayerCheating* ReportPlayerCheating();
    
    UFUNCTION(BlueprintCallable)
    static void ReportCheatDataMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& PathAndFileName, const FString& WebCheatURL, const FString& TimeNow, const FString& TimeStarted, const FString& TimeStopped, const FString& CheatName, int32 GameProcessID, int32 CheatProcessID, const FString& CheatParamA, const FString& CheatParamB, const FReportCheatDataMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebReportCheatData* ReportCheatData();
    
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerGameBanMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FRemovePlayerGameBanMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebRemovePlayerGameBan* RemovePlayerGameBan();
    
    UFUNCTION(BlueprintCallable)
    static void GetCheatingReportsMinimal(const FString& Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, const FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, FUWorksSteamID SteamID, const FGetCheatingReportsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetCheatingReports* GetCheatingReports();
    
    UFUNCTION(BlueprintCallable)
    static void EndSecureMultiplayerSessionMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& SessionId, const FEndSecureMultiplayerSessionMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebEndSecureMultiplayerSession* EndSecureMultiplayerSession();
    
};

