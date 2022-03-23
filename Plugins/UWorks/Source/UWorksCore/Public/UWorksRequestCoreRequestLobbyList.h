#pragma once
#include "CoreMinimal.h"
#include "RequestLobbyListMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "RequestLobbyListDelegateDelegate.h"
#include "UWorksRequestCoreRequestLobbyList.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestLobbyList : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestLobbyListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestLobbyListMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestLobbyList();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(int32& LobbiesMatching);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

