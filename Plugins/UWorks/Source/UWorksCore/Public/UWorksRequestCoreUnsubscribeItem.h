#pragma once
#include "CoreMinimal.h"
#include "UWorksPublishedFileID.h"
#include "EUWorksResult.h"
#include "UWorksRequestCore.h"
#include "UnsubscribeItemDelegateDelegate.h"
#include "UnsubscribeItemMinimalDelegateDelegate.h"
#include "UWorksRequestCoreUnsubscribeItem.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnsubscribeItemDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnsubscribeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreUnsubscribeItem();

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

