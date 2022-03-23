#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "SubscribeItemDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksPublishedFileID.h"
#include "SubscribeItemMinimalDelegateDelegate.h"
#include "UWorksRequestCoreSubscribeItem.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreSubscribeItem : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubscribeItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSubscribeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSubscribeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

