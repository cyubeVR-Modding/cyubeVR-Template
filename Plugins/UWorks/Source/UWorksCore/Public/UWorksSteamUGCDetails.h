#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "EUWorksWorkshopFileType.h"
#include "UWorksSteamID.h"
#include "EUWorksRemoteStoragePublishedFileVisibility.h"
#include "UWorksUGCHandle.h"
#include "UWorksSteamUGCDetails.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksSteamUGCDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksPublishedFileID PublishedFileID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUWorksResult Result;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUWorksWorkshopFileType fileType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CreatorAppID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ConsumerAppID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksSteamID SteamIDOwner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TimeCreated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TimeUpdated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TimeAddedToUserList;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUWorksRemoteStoragePublishedFileVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bBanned;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bAcceptedForUse;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bTagsTruncated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> tags;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksUGCHandle File;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUWorksUGCHandle PreviewFile;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 fileSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PreviewFileSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 votesUp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 votesDown;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float score;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 numChildren;
    
    FUWorksSteamUGCDetails();
};

