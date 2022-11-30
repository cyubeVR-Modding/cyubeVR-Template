#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "UserStatsReceivedDelegateDelegate.h"
#include "UserStatsStoredDelegateDelegate.h"
#include "UWorksUGCHandle.h"
#include "UserAchievementStoredDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "UserStatsUnloadedDelegateDelegate.h"
#include "UploadLeaderboardScoreMinimalDelegateDelegate.h"
#include "UserAchievementIconFetchedDelegateDelegate.h"
#include "EUWorksLeaderboardUploadScoreMethod.h"
#include "RequestUserStatsMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "RequestGlobalStatsMinimalDelegateDelegate.h"
#include "RequestGlobalAchievementPercentagesMinimalDelegateDelegate.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate.h"
#include "FindLeaderboardMinimalDelegateDelegate.h"
#include "EUWorksLeaderboardSortMethod.h"
#include "EUWorksLeaderboardDisplayType.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "UWorksLeaderboardEntry.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.h"
#include "DownloadLeaderboardEntriesMinimalDelegateDelegate.h"
#include "EUWorksLeaderboardDataRequest.h"
#include "DownloadLeaderboardEntriesForUsersMinimalDelegateDelegate.h"
#include "AttachLeaderboardUGCMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreUserStats.generated.h"

class UUWorksRequestCoreRequestUserStats;
class UUWorksRequestCoreUploadLeaderboardScore;
class UUWorksRequestCoreRequestGlobalStats;
class UUWorksRequestCoreDownloadLeaderboardEntries;
class UUWorksRequestCoreRequestGlobalAchievementPercentages;
class UUWorksInterfaceCoreUserStats;
class UUWorksRequestCoreGetNumberOfCurrentPlayers;
class UTexture2D;
class UUWorksRequestCoreFindOrCreateLeaderboard;
class UUWorksRequestCoreFindLeaderboard;
class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers;
class UUWorksRequestCoreAttachLeaderboardUGC;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreUserStats : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserStatsReceivedDelegate UserStatsReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserStatsStoredDelegate UserStatsStored;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserAchievementStoredDelegate UserAchievementStored;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserStatsUnloadedDelegate UserStatsUnloaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserAchievementIconFetchedDelegate UserAchievementIconFetched;
    
    UUWorksInterfaceCoreUserStats();
    UFUNCTION(BlueprintCallable)
    void UploadLeaderboardScoreMinimal(const FUploadLeaderboardScoreMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreUploadLeaderboardScore* UploadLeaderboardScore();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAvgRateStat(const FString& Name, float CountThisSession, float SessionLength);
    
    UFUNCTION(BlueprintCallable)
    bool StoreStats();
    
    UFUNCTION(BlueprintCallable)
    bool SetStatAsInteger(const FString& Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetStatAsFloat(const FString& Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetAchievement(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool ResetAllStats(bool bAchievementsToo);
    
    UFUNCTION(BlueprintCallable)
    void RequestUserStatsMinimal(const FRequestUserStatsMinimalDelegate& Completed, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestUserStats* RequestUserStats();
    
    UFUNCTION(BlueprintCallable)
    void RequestGlobalStatsMinimal(const FRequestGlobalStatsMinimalDelegate& Completed, int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestGlobalStats* RequestGlobalStats();
    
    UFUNCTION(BlueprintCallable)
    void RequestGlobalAchievementPercentagesMinimal(const FRequestGlobalAchievementPercentagesMinimalDelegate& Completed);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentages();
    
    UFUNCTION(BlueprintCallable)
    bool RequestCurrentStats();
    
    UFUNCTION(BlueprintCallable)
    bool IndicateAchievementProgress(const FString& Name, int32 CurrentProgress, int32 MaxProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreUserStats* GetUserStats();
    
    UFUNCTION(BlueprintCallable)
    bool GetUserStatInteger(FUWorksSteamID SteamIDUser, const FString& Name, int32& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserStatFloat(FUWorksSteamID SteamIDUser, const FString& Name, float& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserAchievementAndUnlockTime(FUWorksSteamID SteamIDUser, const FString& Name, bool& bAchieved, int32& UnlockTime);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserAchievement(FUWorksSteamID SteamIDUser, const FString& Name, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    bool GetStatAsInteger(const FString& Name, int32& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetStatAsFloat(const FString& Name, float& Data);
    
    UFUNCTION(BlueprintCallable)
    void GetNumberOfCurrentPlayersMinimal(const FGetNumberOfCurrentPlayersMinimalDelegate& Completed);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumAchievements();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMostAchievedAchievementInfo(FString& Name, int32 NameBufferLength, float& Percent, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    EUWorksLeaderboardSortMethod GetLeaderboardSortMethod(FUWorksSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    FString GetLeaderboardName(FUWorksSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLeaderboardEntryCount(FUWorksSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    EUWorksLeaderboardDisplayType GetLeaderboardDisplayType(FUWorksSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGlobalStatHistoryFromIntegers(const FString& StatName, TArray<FString>& Data, int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGlobalStatHistoryFromFloats(const FString& StatName, TArray<FString>& Data, int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    bool GetGlobalStatFromInteger(const FString& StatName, FString& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetGlobalStatFromFloat(const FString& StatName, FString& Data);
    
    UFUNCTION(BlueprintCallable)
    bool GetDownloadedLeaderboardEntry(FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 Index, FUWorksLeaderboardEntry& LeaderboardEntry, TArray<int32>& Details, int32 DetailsMax);
    
    UFUNCTION(BlueprintCallable)
    FString GetAchievementName(int32 Achievement);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetAchievementIcon(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    FString GetAchievementDisplayAttribute(const FString& Name, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool GetAchievementAndUnlockTime(const FString& Name, bool& bAchieved, int32& UnlockTime);
    
    UFUNCTION(BlueprintCallable)
    bool GetAchievementAchievedPercent(const FString& Name, float& Percent);
    
    UFUNCTION(BlueprintCallable)
    bool GetAchievement(const FString& Name, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    void FindOrCreateLeaderboardMinimal(const FFindOrCreateLeaderboardMinimalDelegate& Completed, const FString& LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreFindOrCreateLeaderboard* FindOrCreateLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    void FindLeaderboardMinimal(const FFindLeaderboardMinimalDelegate& Completed, const FString& LeaderboardName);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreFindLeaderboard* FindLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    void DownloadLeaderboardEntriesMinimal(const FDownloadLeaderboardEntriesMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    
    UFUNCTION(BlueprintCallable)
    void DownloadLeaderboardEntriesForUsersMinimal(const FDownloadLeaderboardEntriesForUsersMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsers();
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreDownloadLeaderboardEntries* DownloadLeaderboardEntries();
    
    UFUNCTION(BlueprintCallable)
    bool ClearAchievement(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void AttachLeaderboardUGCMinimal(const FAttachLeaderboardUGCMinimalDelegate& Completed, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreAttachLeaderboardUGC* AttachLeaderboardUGC();
    
};

