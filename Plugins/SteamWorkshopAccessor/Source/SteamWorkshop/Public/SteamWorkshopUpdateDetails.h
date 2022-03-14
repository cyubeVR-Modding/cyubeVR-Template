#pragma once
#include "CoreMinimal.h"
#include "ESteamItemVisibility.h"
#include "ESteamSupportedLanguages.h"
#include "SteamKeyValuePair.h"
#include "SteamWorkshopUpdateDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamWorkshopUpdateDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString updateNotice;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ESteamSupportedLanguages updateLanguage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString MetaData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ESteamItemVisibility Visibility;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> tags;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamKeyValuePair> keyValueTags;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString contentDirectory;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString previewImage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> additionalImages;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> youtubeVideoIDs;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> keysOfKeyValueTagsToRemove;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> indexOfPreviewToRemove;
    
    STEAMWORKSHOP_API FSteamWorkshopUpdateDetails();
};

