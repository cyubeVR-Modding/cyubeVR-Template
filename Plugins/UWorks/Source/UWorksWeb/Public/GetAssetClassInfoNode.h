#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAssetClassInfoDelegateDelegate.h"
#include "GetAssetClassInfoNode.generated.h"

class UGetAssetClassInfoNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAssetClassInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAssetClassInfoDelegate Completed;
    
    UGetAssetClassInfoNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAssetClassInfoNode* GetAssetClassInfoNode(const FString& Key, int32 AppID, int32 ClassCount, const FString& ClassID0, const FString& Language, const FString& InstanceID0);
    
};

