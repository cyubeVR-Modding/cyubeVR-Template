#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "UWorksRequestCore.h"
#include "AddItemToFavoritesDelegateDelegate.h"
#include "AddItemToFavoritesMinimalDelegateDelegate.h"
#include "UWorksRequestCoreAddItemToFavorites.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreAddItemToFavorites : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddItemToFavoritesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddItemToFavoritesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreAddItemToFavorites();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

