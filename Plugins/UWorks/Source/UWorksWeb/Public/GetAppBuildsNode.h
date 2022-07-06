#pragma once
#include "CoreMinimal.h"
#include "GetAppBuildsDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAppBuildsNode.generated.h"

class UGetAppBuildsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAppBuildsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAppBuildsDelegate Completed;
    
    UGetAppBuildsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppBuildsNode* GetAppBuildsNode(const FString& Key, int32 AppID, int32 Count);
    
};

