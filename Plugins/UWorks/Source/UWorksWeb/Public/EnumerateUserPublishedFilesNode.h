#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "EnumerateUserPublishedFilesDelegateDelegate.h"
#include "EnumerateUserPublishedFilesNode.generated.h"

class UEnumerateUserPublishedFilesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UEnumerateUserPublishedFilesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateUserPublishedFilesDelegate Completed;
    
    UEnumerateUserPublishedFilesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEnumerateUserPublishedFilesNode* EnumerateUserPublishedFilesNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

