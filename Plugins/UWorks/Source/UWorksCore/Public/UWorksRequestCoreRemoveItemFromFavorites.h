#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "RemoveItemFromFavoritesDelegateDelegate.h"
#include "RemoveItemFromFavoritesMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UWorksRequestCoreRemoveItemFromFavorites.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveItemFromFavoritesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveItemFromFavoritesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRemoveItemFromFavorites();

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

