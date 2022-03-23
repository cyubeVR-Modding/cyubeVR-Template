#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAppBuildsDelegateDelegate.h"
#include "GetAppBuildsNode.generated.h"

class UGetAppBuildsNode;

UCLASS()
class UWORKSWEB_API UGetAppBuildsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAppBuildsDelegate Completed;
    
    UGetAppBuildsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppBuildsNode* GetAppBuildsNode(const FString& Key, int32 AppID, int32 Count);
    
};

