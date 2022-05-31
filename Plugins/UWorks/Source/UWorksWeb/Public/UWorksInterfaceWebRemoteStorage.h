#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "UWorksInterfaceWeb.h"
#include "UnsubscribePublishedFileMinimalDelegateDelegate.h"
#include "SetUGCUsedByGCMinimalDelegateDelegate.h"
#include "SubscribePublishedFileMinimalDelegateDelegate.h"
#include "GetUGCFileDetailsMinimalDelegateDelegate.h"
#include "GetPublishedFileDetailsMinimalDelegateDelegate.h"
#include "GetCollectionDetailsMinimalDelegateDelegate.h"
#include "EnumerateUserSubscribedFilesMinimalDelegateDelegate.h"
#include "EnumerateUserPublishedFilesMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebRemoteStorage.generated.h"

class UUWorksRequestWebUnsubscribePublishedFile;
class UUWorksRequestWebSubscribePublishedFile;
class UUWorksRequestWebSetUGCUsedByGC;
class UUWorksRequestWebGetUGCFileDetails;
class UUWorksRequestWebGetPublishedFileDetails;
class UUWorksRequestWebGetCollectionDetails;
class UUWorksRequestWebEnumerateUserSubscribedFiles;
class UUWorksRequestWebEnumerateUserPublishedFiles;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebRemoteStorage : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebRemoteStorage();
    UFUNCTION(BlueprintCallable)
    static void UnsubscribePublishedFileMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FUnsubscribePublishedFileMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebUnsubscribePublishedFile* UnsubscribePublishedFile();
    
    UFUNCTION(BlueprintCallable)
    static void SubscribePublishedFileMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID, const FSubscribePublishedFileMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSubscribePublishedFile* SubscribePublishedFile();
    
    UFUNCTION(BlueprintCallable)
    static void SetUGCUsedByGCMinimal(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, bool bUsed, const FSetUGCUsedByGCMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetUGCUsedByGC* SetUGCUsedByGC();
    
    UFUNCTION(BlueprintCallable)
    static void GetUGCFileDetailsMinimal(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID, const FGetUGCFileDetailsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetUGCFileDetails* GetUGCFileDetails();
    
    UFUNCTION(BlueprintCallable)
    static void GetPublishedFileDetailsMinimal(int32 ItemCount, TArray<int32> PublishedFileIDs, const FGetPublishedFileDetailsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPublishedFileDetails* GetPublishedFileDetails();
    
    UFUNCTION(BlueprintCallable)
    static void GetCollectionDetailsMinimal(int32 CollectionCount, TArray<int32> PublishedFileIDs, const FGetCollectionDetailsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetCollectionDetails* GetCollectionDetails();
    
    UFUNCTION(BlueprintCallable)
    static void EnumerateUserSubscribedFilesMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType, const FEnumerateUserSubscribedFilesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebEnumerateUserSubscribedFiles* EnumerateUserSubscribedFiles();
    
    UFUNCTION(BlueprintCallable)
    static void EnumerateUserPublishedFilesMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FEnumerateUserPublishedFilesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebEnumerateUserPublishedFiles* EnumerateUserPublishedFiles();
    
};

