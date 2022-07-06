#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UnsubscribePublishedFileDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UnsubscribePublishedFileNode.generated.h"

class UUnsubscribePublishedFileNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnsubscribePublishedFileDelegate Completed;
    
    UUnsubscribePublishedFileNode();
    UFUNCTION(BlueprintCallable)
    static UUnsubscribePublishedFileNode* UnsubscribePublishedFileNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

