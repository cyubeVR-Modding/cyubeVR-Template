#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CreateItemDelegateDelegate.h"
#include "EUWorksResult.h"
#include "EUWorksWorkshopFileType.h"
#include "CoreCreateItemNode.generated.h"

class UCoreCreateItemNode;

UCLASS()
class UWORKSCORE_API UCoreCreateItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateItemDelegate Completed;
    
    UCoreCreateItemNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    
    UFUNCTION(BlueprintCallable)
    static UCoreCreateItemNode* CreateItemNode(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    
};

