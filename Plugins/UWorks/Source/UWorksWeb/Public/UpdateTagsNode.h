#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UpdateTagsDelegateDelegate.h"
#include "UWorksPublishedFileID.h"
#include "UpdateTagsNode.generated.h"

class UUpdateTagsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UUpdateTagsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateTagsDelegate Completed;
    
    UUpdateTagsNode();
    UFUNCTION(BlueprintCallable)
    static UUpdateTagsNode* UpdateTagsNode(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, TArray<FString> AddTags, TArray<FString> RemoveTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

