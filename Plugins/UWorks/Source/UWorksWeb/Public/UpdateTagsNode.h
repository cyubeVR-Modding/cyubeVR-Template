#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UpdateTagsDelegateDelegate.h"
#include "UpdateTagsNode.generated.h"

class UUpdateTagsNode;

UCLASS()
class UWORKSWEB_API UUpdateTagsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateTagsDelegate Completed;
    
    UUpdateTagsNode();
    UFUNCTION(BlueprintCallable)
    static UUpdateTagsNode* UpdateTagsNode(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

