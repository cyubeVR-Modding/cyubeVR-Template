#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "EnumerateFollowingListDelegateDelegate.h"
#include "EnumerateFollowingListMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreEnumerateFollowingList.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreEnumerateFollowingList : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateFollowingListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnumerateFollowingListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreEnumerateFollowingList();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 StartIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, TArray<FUWorksSteamID>& SteamIDs, int32& ResultsReturned, int32& TotalResultCount);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

