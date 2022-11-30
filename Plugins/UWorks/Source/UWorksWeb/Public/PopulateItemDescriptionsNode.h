#pragma once
#include "CoreMinimal.h"
#include "UWorksLanguages.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PopulateItemDescriptionsDelegateDelegate.h"
#include "PopulateItemDescriptionsNode.generated.h"

class UPopulateItemDescriptionsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UPopulateItemDescriptionsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopulateItemDescriptionsDelegate Completed;
    
    UPopulateItemDescriptionsNode();
    UFUNCTION(BlueprintCallable)
    static UPopulateItemDescriptionsNode* PopulateItemDescriptionsNode(const FString& Key, int32 AppID, FUWorksLanguages Languages);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

