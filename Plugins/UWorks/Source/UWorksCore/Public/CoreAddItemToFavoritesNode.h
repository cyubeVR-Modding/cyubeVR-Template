#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AddItemToFavoritesDelegateDelegate.h"
#include "CoreAddItemToFavoritesNode.generated.h"

class UCoreAddItemToFavoritesNode;

UCLASS()
class UWORKSCORE_API UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddItemToFavoritesDelegate Completed;
    
    UCoreAddItemToFavoritesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bWasAddRequest);
    
    UFUNCTION(BlueprintCallable)
    static UCoreAddItemToFavoritesNode* AddItemToFavoritesNode(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
};

