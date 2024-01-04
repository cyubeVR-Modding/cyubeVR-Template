#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAssetIDDelegateDelegate.h"
#include "GetAssetIDNode.generated.h"

class UGetAssetIDNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAssetIDNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAssetIDDelegate Completed;
    
    UGetAssetIDNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAssetIDNode* GetAssetIDNode(const FString& Key, int32 AppID, const FString& ListingID);
    
};

