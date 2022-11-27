#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksPublishedFileID.h"
#include "SetDeveloperMetadataDelegateDelegate.h"
#include "SetDeveloperMetadataNode.generated.h"

class USetDeveloperMetadataNode;

UCLASS(Blueprintable)
class UWORKSWEB_API USetDeveloperMetadataNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetDeveloperMetadataDelegate Completed;
    
    USetDeveloperMetadataNode();
    UFUNCTION(BlueprintCallable)
    static USetDeveloperMetadataNode* SetDeveloperMetadataNode(const FString& Key, FUWorksPublishedFileID PublishedFileID, int32 AppID, const FString& MetaData);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

