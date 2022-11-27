#pragma once
#include "CoreMinimal.h"
#include "PersonaStateChangeDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "GameOverlayActivatedDelegateDelegate.h"
#include "GameServerChangeRequestedDelegateDelegate.h"
#include "GameLobbyJoinRequestedDelegateDelegate.h"
#include "AvatarImageLoadedDelegateDelegate.h"
#include "GameRichPresenceJoinRequestedDelegateDelegate.h"
#include "FriendRichPresenceUpdateDelegateDelegate.h"
#include "GameConnectedClanChatMsgDelegateDelegate.h"
#include "GameConnectedChatJoinDelegateDelegate.h"
#include "GameConnectedChatLeaveDelegateDelegate.h"
#include "EUWorksFriendRelationship.h"
#include "GameConnectedFriendChatMsgDelegateDelegate.h"
#include "JoinClanChatRoomMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "SetPersonaNameMinimalDelegateDelegate.h"
#include "RequestClanOfficerListMinimalDelegateDelegate.h"
#include "IsFollowingMinimalDelegateDelegate.h"
#include "EUWorksPersonaState.h"
#include "EUWorksFriendFlags.h"
#include "GetFollowerCountMinimalDelegateDelegate.h"
#include "EUWorksUserRestriction.h"
#include "UWorksFriendsGroupID.h"
#include "UWorksGameID.h"
#include "EUWorksChatEntryType.h"
#include "EUWorksOverlayToStoreFlag.h"
#include "EnumerateFollowingListMinimalDelegateDelegate.h"
#include "DownloadClanActivityCountsMinimalDelegateDelegate.h"
#include "EUWorksOverlaySpecific.h"
#include "EUWorksOverlayGeneric.h"
#include "UWorksInterfaceCoreFriends.generated.h"

class UUWorksRequestCoreSetPersonaName;
class UUWorksRequestCoreRequestClanOfficerList;
class UUWorksRequestCoreEnumerateFollowingList;
class UUWorksRequestCoreJoinClanChatRoom;
class UUWorksRequestCoreIsFollowing;
class UTexture2D;
class UUWorksInterfaceCoreFriends;
class UUWorksRequestCoreGetFollowerCount;
class UUWorksRequestCoreDownloadClanActivityCounts;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreFriends : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonaStateChangeDelegate PersonaStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOverlayActivatedDelegate GameOverlayActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameServerChangeRequestedDelegate GameServerChangeRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLobbyJoinRequestedDelegate GameLobbyJoinRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvatarImageLoadedDelegate AvatarImageLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFriendRichPresenceUpdateDelegate FriendRichPresenceUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRichPresenceJoinRequestedDelegate GameRichPresenceJoinRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameConnectedClanChatMsgDelegate GameConnectedClanChatMsg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameConnectedChatJoinDelegate GameConnectedChatJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameConnectedChatLeaveDelegate GameConnectedChatLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameConnectedFriendChatMsgDelegate GameConnectedFriendChatMsg;
    
    UUWorksInterfaceCoreFriends();
    UFUNCTION(BlueprintCallable)
    bool SetRichPresence(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayedWith(FUWorksSteamID SteamIDUserPlayedWith);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaNameMinimal(const FSetPersonaNameMinimalDelegate& Completed, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreSetPersonaName* SetPersonaName();
    
    UFUNCTION(BlueprintCallable)
    bool SetListenForFriendsMessages(bool bInterceptEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetInGameVoiceSpeaking(FUWorksSteamID SteamIDUser, bool bSpeaking);
    
    UFUNCTION(BlueprintCallable)
    bool SendClanChatMessage(FUWorksSteamID SteamIDClanChat, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUserInformation(FUWorksSteamID SteamIDUser, bool bRequireNameOnly);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendRichPresence(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    void RequestClanOfficerListMinimal(const FRequestClanOfficerListMinimalDelegate& Completed, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestClanOfficerList* RequestClanOfficerList();
    
    UFUNCTION(BlueprintCallable)
    bool ReplyToFriendMessage(FUWorksSteamID SteamIDFriend, const FString& MessageToSend);
    
    UFUNCTION(BlueprintCallable)
    bool OpenClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);
    
    UFUNCTION(BlueprintCallable)
    bool LeaveClanChatRoom(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    void JoinClanChatRoomMinimal(const FJoinClanChatRoomMinimalDelegate& Completed, FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreJoinClanChatRoom* JoinClanChatRoom();
    
    UFUNCTION(BlueprintCallable)
    bool IsUserInSource(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDSource);
    
    UFUNCTION(BlueprintCallable)
    void IsFollowingMinimal(const FIsFollowingMinimalDelegate& Completed, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreIsFollowing* IsFollowing();
    
    UFUNCTION(BlueprintCallable)
    bool IsClanChatWindowOpenInSteam(FUWorksSteamID SteamIDClanChat);
    
    UFUNCTION(BlueprintCallable)
    bool IsClanChatAdmin(FUWorksSteamID SteamIDClanChat, FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    bool InviteUserToGame(FUWorksSteamID SteamIDFriend, const FString& ConnectString);
    
    UFUNCTION(BlueprintCallable)
    bool HasFriend(FUWorksSteamID SteamIDFriend, TArray<EUWorksFriendFlags> FriendFlags);
    
    UFUNCTION(BlueprintCallable)
    TArray<EUWorksUserRestriction> GetUserRestrictions();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetSmallFriendAvatar(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    FString GetPlayerNickname(FUWorksSteamID SteamIDPlayer);
    
    UFUNCTION(BlueprintCallable)
    EUWorksPersonaState GetPersonaState();
    
    UFUNCTION(BlueprintCallable)
    FString GetPersonaName();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetMediumFriendAvatar(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetLargeFriendAvatar(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendSteamLevel(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendsGroupName(FUWorksFriendsGroupID FriendsGroupID);
    
    UFUNCTION(BlueprintCallable)
    void GetFriendsGroupMembersList(FUWorksFriendsGroupID FriendsGroupID, TArray<FUWorksSteamID>& SteamIDMembers, int32 MembersCount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendsGroupMembersCount(FUWorksFriendsGroupID FriendsGroupID);
    
    UFUNCTION(BlueprintCallable)
    FUWorksFriendsGroupID GetFriendsGroupIDByIndex(int32 FriendGroup);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendsGroupCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreFriends* GetFriends();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendRichPresenceKeyCount(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendRichPresenceKeyByIndex(FUWorksSteamID SteamIDFriend, int32 Key);
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendRichPresence(FUWorksSteamID SteamIDFriend, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    EUWorksFriendRelationship GetFriendRelationship(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    EUWorksPersonaState GetFriendPersonaState(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendPersonaNameHistory(FUWorksSteamID SteamIDFriend, int32 PersonaName);
    
    UFUNCTION(BlueprintCallable)
    FString GetFriendPersonaName(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendMessage(FUWorksSteamID SteamIDFriend, int32 MessageID, FString& Text, int32 TextMaxLength, EUWorksChatEntryType& ChatEntryType);
    
    UFUNCTION(BlueprintCallable)
    bool GetFriendGamePlayed(FUWorksSteamID SteamIDFriend, FUWorksGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FUWorksSteamID& SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetFriendFromSourceByIndex(FUWorksSteamID SteamIDSource, int32 Friend);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendCountFromSource(FUWorksSteamID SteamIDSource);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendCount(TArray<EUWorksFriendFlags> FriendFlags);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendCoplayTime(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendCoplayGame(FUWorksSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetFriendByIndex(int32 Friend, TArray<EUWorksFriendFlags> FriendFlags);
    
    UFUNCTION(BlueprintCallable)
    void GetFollowerCountMinimal(const FGetFollowerCountMinimalDelegate& Completed, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreGetFollowerCount* GetFollowerCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCoplayFriendCount();
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetCoplayFriend(int32 CoplayFriend);
    
    UFUNCTION(BlueprintCallable)
    FString GetClanTag(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetClanOwner(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClanOfficerCount(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetClanOfficerByIndex(FUWorksSteamID SteamIDClan, int32 Officer);
    
    UFUNCTION(BlueprintCallable)
    FString GetClanName(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClanCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetClanChatMessage(FUWorksSteamID SteamIDClanChat, int32 MessageID, FString& Text, int32 TextMax, EUWorksChatEntryType& ChatEntryType, FUWorksSteamID& SteamIDChatter);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClanChatMemberCount(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetClanByIndex(int32 Clan);
    
    UFUNCTION(BlueprintCallable)
    bool GetClanActivityCounts(FUWorksSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetChatMemberByIndex(FUWorksSteamID SteamIDClan, int32 User);
    
    UFUNCTION(BlueprintCallable)
    void EnumerateFollowingListMinimal(const FEnumerateFollowingListMinimalDelegate& Completed, int32 StartIndex);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreEnumerateFollowingList* EnumerateFollowingList();
    
    UFUNCTION(BlueprintCallable)
    void DownloadClanActivityCountsMinimal(const FDownloadClanActivityCountsMinimalDelegate& Completed, TArray<FUWorksSteamID> SteamIDClans);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreDownloadClanActivityCounts* DownloadClanActivityCounts();
    
    UFUNCTION(BlueprintCallable)
    bool CloseClanChatWindowInSteam(FUWorksSteamID SteamIDClanChat);
    
    UFUNCTION(BlueprintCallable)
    void ClearRichPresence();
    
    UFUNCTION(BlueprintCallable)
    void ActivateGameOverlayToWebPage(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void ActivateGameOverlayToUser(EUWorksOverlaySpecific Dialog, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void ActivateGameOverlayToStore(int32 AppID, EUWorksOverlayToStoreFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    void ActivateGameOverlayInviteDialog(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    void ActivateGameOverlay(EUWorksOverlayGeneric Dialog);
    
};

