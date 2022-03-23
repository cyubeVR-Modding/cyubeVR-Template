#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UWorksPublishedFileID.h"
#include "QueryFilesDelegateDelegate.h"
#include "QueryFilesMinimalDelegateDelegate.h"
#include "UWorksRequiredKVTags.h"
#include "UWorksRequestWebQueryFiles.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebQueryFiles : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQueryFilesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQueryFilesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebQueryFiles();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, const FString& searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

