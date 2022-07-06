#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "CreateLobbyDelegateDelegate.h"
#include "CreateLobbyMinimalDelegateDelegate.h"
#include "EUWorksLobbyType.h"
#include "EUWorksResult.h"
#include "UWorksSteamID.h"
#include "UWorksRequestCoreCreateLobby.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreCreateLobby : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateLobbyDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateLobbyMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreCreateLobby();
    UFUNCTION(BlueprintCallable)
    void SetInput(EUWorksLobbyType LobbyType, int32 MaxMembers);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

