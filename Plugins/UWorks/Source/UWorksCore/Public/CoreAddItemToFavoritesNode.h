#pragma once
#include "CoreMinimal.h"
#include "AddItemToFavoritesDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "CoreAddItemToFavoritesNode.generated.h"

class UCoreAddItemToFavoritesNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddItemToFavoritesDelegate Completed;
    
    UCoreAddItemToFavoritesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    
    UFUNCTION(BlueprintCallable)
    static UCoreAddItemToFavoritesNode* AddItemToFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
};

