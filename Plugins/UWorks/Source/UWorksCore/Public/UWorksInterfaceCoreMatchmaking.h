#pragma once
#include "CoreMinimal.h"
#include "LobbyDataUpdateDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "FavoritesListChangedDelegateDelegate.h"
#include "LobbyInviteDelegateDelegate.h"
#include "LobbyEnterDelegateDelegate.h"
#include "LobbyChatUpdateDelegateDelegate.h"
#include "LobbyChatMsgDelegateDelegate.h"
#include "LobbyGameCreatedDelegateDelegate.h"
#include "LobbyKickedDelegateDelegate.h"
#include "EUWorksLobbyDistanceFilter.h"
#include "FavoritesListAccountsUpdatedDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "EUWorksLobbyType.h"
#include "RequestLobbyListMinimalDelegateDelegate.h"
#include "EUWorksFavoriteFlags.h"
#include "EUWorksLobbyComparison.h"
#include "JoinLobbyMinimalDelegateDelegate.h"
#include "EUWorksChatEntryType.h"
#include "CreateLobbyMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreMatchmaking.generated.h"

class UUWorksRequestCoreRequestLobbyList;
class UUWorksRequestCoreJoinLobby;
class UUWorksInterfaceCoreMatchmaking;
class UUWorksRequestCoreCreateLobby;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreMatchmaking : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFavoritesListChangedDelegate FavoritesListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLobbyInviteDelegate LobbyInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLobbyDataUpdateDelegate LobbyDataUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLobbyEnterDelegate LobbyEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLobbyChatUpdateDelegate LobbyChatUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLobbyChatMsgDelegate LobbyChatMsg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLobbyGameCreatedDelegate LobbyGameCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLobbyKickedDelegate LobbyKicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFavoritesListAccountsUpdatedDelegate FavoritesListAccountsUpdated;
    
    UUWorksInterfaceCoreMatchmaking();
    UFUNCTION(BlueprintCallable)
    bool SetLobbyType(FUWorksSteamID SteamIDLobby, EUWorksLobbyType LobbyType);
    
    UFUNCTION(BlueprintCallable)
    bool SetLobbyOwner(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDNewOwner);
    
    UFUNCTION(BlueprintCallable)
    bool SetLobbyMemberLimit(FUWorksSteamID SteamIDLobby, int32 MaxMembers);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyMemberData(FUWorksSteamID SteamIDLobby, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetLobbyJoinable(FUWorksSteamID SteamIDLobby, bool bLobbyJoinable);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyGameServer(FUWorksSteamID SteamIDLobby, const FString& GameServerIP, int32 GameServerPort, FUWorksSteamID SteamIDGameServer);
    
    UFUNCTION(BlueprintCallable)
    bool SetLobbyData(FUWorksSteamID SteamIDLobby, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetLinkedLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDLobbyDependent);
    
    UFUNCTION(BlueprintCallable)
    bool SendLobbyChatMsg(FUWorksSteamID SteamIDLobby, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void RequestLobbyListMinimal(const FRequestLobbyListMinimalDelegate& Completed);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestLobbyList* RequestLobbyList();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLobbyData(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags);
    
    UFUNCTION(BlueprintCallable)
    void LeaveLobby(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    void JoinLobbyMinimal(const FJoinLobbyMinimalDelegate& Completed, FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreJoinLobby* JoinLobby();
    
    UFUNCTION(BlueprintCallable)
    bool InviteUserToLobby(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDInvitee);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumLobbyMembers(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreMatchmaking* GetMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetLobbyOwner(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyMemberLimit(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    FString GetLobbyMemberData(FUWorksSteamID SteamIDLobby, FUWorksSteamID SteamIDUser, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetLobbyMemberByIndex(FUWorksSteamID SteamIDLobby, int32 Member);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyGameServer(FUWorksSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FUWorksSteamID& SteamIDGameServer);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyDataCount(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyDataByIndex(FUWorksSteamID SteamIDLobby, int32 LobbyData, FString& Key, int32 KeyMaxLength, FString& Value, int32 ValueMaxLength);
    
    UFUNCTION(BlueprintCallable)
    FString GetLobbyData(FUWorksSteamID SteamIDLobby, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyChatEntry(FUWorksSteamID SteamIDLobby, int32 MessageID, FUWorksSteamID& SteamIDUser, FString& Message, int32 MessageMaxLength, EUWorksChatEntryType& ChatEntryType);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetLobbyByIndex(int32 Lobby);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFavoriteGameCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<EUWorksFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteLobbyData(FUWorksSteamID SteamIDLobby, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void CreateLobbyMinimal(const FCreateLobbyMinimalDelegate& Completed, EUWorksLobbyType LobbyType, int32 MaxMembers);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreCreateLobby* CreateLobby();
    
    UFUNCTION(BlueprintCallable)
    void AddRequestLobbyListStringFilter(const FString& KeyToMatch, const FString& ValueToMatch, EUWorksLobbyComparison ComparisonType);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestLobbyListResultCountFilter(int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestLobbyListNumericalFilter(const FString& KeyToMatch, int32 ValueToMatch, EUWorksLobbyComparison ComparisonType);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestLobbyListNearValueFilter(const FString& KeyToMatch, int32 ValueToBeCloseTo);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestLobbyListDistanceFilter(EUWorksLobbyDistanceFilter LobbyDistanceFilter);
    
    UFUNCTION(BlueprintCallable)
    void AddRequestLobbyListCompatibleMembersFilter(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    int32 AddFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<EUWorksFavoriteFlags> Flags, int32 TimeLastPlayedOnServer);
    
};

