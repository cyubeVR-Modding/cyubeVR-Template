#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksWorkshopFileType.h"
#include "UWorksPublishedFileID.h"
#include "CreateItemDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreCreateItemNode.generated.h"

class UCoreCreateItemNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreCreateItemNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateItemDelegate Completed;
    
    UCoreCreateItemNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksPublishedFileID PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
    
    UFUNCTION(BlueprintCallable)
    static UCoreCreateItemNode* CreateItemNode(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    
};

