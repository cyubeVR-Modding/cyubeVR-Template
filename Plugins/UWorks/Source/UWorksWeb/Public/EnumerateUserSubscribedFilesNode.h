#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "EnumerateUserSubscribedFilesDelegateDelegate.h"
#include "EnumerateUserSubscribedFilesNode.generated.h"

class UEnumerateUserSubscribedFilesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UEnumerateUserSubscribedFilesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateUserSubscribedFilesDelegate Completed;
    
    UEnumerateUserSubscribedFilesNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UEnumerateUserSubscribedFilesNode* EnumerateUserSubscribedFilesNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 ListType);
    
};

