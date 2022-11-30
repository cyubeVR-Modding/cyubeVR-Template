#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "GrantPackageMinimalDelegateDelegate.h"
#include "ResolveVanityURLMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetUserGroupListMinimalDelegateDelegate.h"
#include "GetPublisherAppOwnershipMinimalDelegateDelegate.h"
#include "GetPublisherAppOwnershipChangesMinimalDelegateDelegate.h"
#include "GetPlayerSummariesMinimalDelegateDelegate.h"
#include "GetPlayerBansMinimalDelegateDelegate.h"
#include "GetFriendListMinimalDelegateDelegate.h"
#include "GetAppPriceInfoMinimalDelegateDelegate.h"
#include "CheckAppOwnershipMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebUser.generated.h"

class UUWorksRequestWebResolveVanityURL;
class UUWorksRequestWebGetUserGroupList;
class UUWorksRequestWebGrantPackage;
class UUWorksRequestWebGetPublisherAppOwnershipChanges;
class UUWorksRequestWebGetPublisherAppOwnership;
class UUWorksRequestWebGetPlayerSummaries;
class UUWorksRequestWebGetPlayerBans;
class UUWorksRequestWebGetFriendList;
class UUWorksRequestWebGetAppPriceInfo;
class UUWorksRequestWebCheckAppOwnership;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebUser : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebUser();
    UFUNCTION(BlueprintCallable)
    static void ResolveVanityURLMinimal(const FString& Key, const FString& VanityURL, uint8 URLType, const FResolveVanityURLMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebResolveVanityURL* ResolveVanityURL();
    
    UFUNCTION(BlueprintCallable)
    static void GrantPackageMinimal(const FString& Key, FUWorksSteamID SteamID, int32 PackageID, const FString& IPAddress, const FString& ThirdPartyKey, int32 ThirdPartyAppID, const FGrantPackageMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGrantPackage* GrantPackage();
    
    UFUNCTION(BlueprintCallable)
    static void GetUserGroupListMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetUserGroupListMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetUserGroupList* GetUserGroupList();
    
    UFUNCTION(BlueprintCallable)
    static void GetPublisherAppOwnershipMinimal(const FString& Key, FUWorksSteamID SteamID, const FGetPublisherAppOwnershipMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void GetPublisherAppOwnershipChangesMinimal(const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion, const FGetPublisherAppOwnershipChangesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChanges();
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPublisherAppOwnership* GetPublisherAppOwnership();
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerSummariesMinimal(const FString& Key, const FString& SteamIDs, const FGetPlayerSummariesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPlayerSummaries* GetPlayerSummaries();
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerBansMinimal(const FString& Key, const FString& SteamIDs, const FGetPlayerBansMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPlayerBans* GetPlayerBans();
    
    UFUNCTION(BlueprintCallable)
    static void GetFriendListMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& Relationship, const FGetFriendListMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetFriendList* GetFriendList();
    
    UFUNCTION(BlueprintCallable)
    static void GetAppPriceInfoMinimal(const FString& Key, FUWorksSteamID SteamID, const FString& AppIDs, const FGetAppPriceInfoMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetAppPriceInfo* GetAppPriceInfo();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAppOwnershipMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FCheckAppOwnershipMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebCheckAppOwnership* CheckAppOwnership();
    
};

