#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "QueryFilesDelegateDelegate.h"
#include "UWorksRequiredKVTags.h"
#include "UWorksPublishedFileID.h"
#include "QueryFilesNode.generated.h"

class UQueryFilesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UQueryFilesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueryFilesDelegate Completed;
    
    UQueryFilesNode();
    UFUNCTION(BlueprintCallable)
    static UQueryFilesNode* QueryFilesNode(const FString& Key, uint8 queryType, int32 Page, int32 CreatorAppID, int32 AppID, TArray<FString> requiredTags, TArray<FString> excludedTags, TArray<FString> RequiredFlags, TArray<FString> OmittedFlags, const FString& searchText, uint8 fileType, FUWorksPublishedFileID ChildPublishedFileID, int32 Days, bool bIncludeRecentVotesOnly, FUWorksRequiredKVTags RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32 ReturnPlaytimeStats, int32 NumPerPage, bool bMatchAllTags, int32 CacheMaxAgeSeconds, int32 Language, bool bReturnMetaData);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

