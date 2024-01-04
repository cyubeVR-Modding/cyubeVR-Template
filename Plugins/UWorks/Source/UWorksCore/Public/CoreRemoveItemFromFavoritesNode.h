#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "RemoveItemFromFavoritesDelegateDelegate.h"
#include "CoreRemoveItemFromFavoritesNode.generated.h"

class UCoreRemoveItemFromFavoritesNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRemoveItemFromFavoritesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveItemFromFavoritesDelegate Completed;
    
    UCoreRemoveItemFromFavoritesNode();

    UFUNCTION(BlueprintCallable)
    static UCoreRemoveItemFromFavoritesNode* RemoveItemFromFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    
};

