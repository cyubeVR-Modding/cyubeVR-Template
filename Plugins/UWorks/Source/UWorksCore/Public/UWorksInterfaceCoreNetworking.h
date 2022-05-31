#pragma once
#include "CoreMinimal.h"
#include "P2PSessionRequestDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "P2PSessionConnectFailDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "EUWorksP2PSend.h"
#include "UWorksP2PSessionState.h"
#include "UWorksInterfaceCoreNetworking.generated.h"

class UUWorksInterfaceCoreNetworking;

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksInterfaceCoreNetworking : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FP2PSessionRequestDelegate P2PSessionRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FP2PSessionConnectFailDelegate P2PSessionConnectFail;
    
    UUWorksInterfaceCoreNetworking();
    UFUNCTION(BlueprintCallable)
    bool SendP2PPacket(FUWorksSteamID SteamIDRemote, TArray<uint8> Data, EUWorksP2PSend P2PSendType, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool SendP2PMessage(FUWorksSteamID SteamIDRemote, const FString& Data, EUWorksP2PSend P2PSendType, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool ReadP2PPacket(TArray<uint8>& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool ReadP2PMessage(FString& Data, int32 DataMax, FUWorksSteamID& SteamIDRemote, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool IsP2PPacketAvailable(int32& DataSize, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool GetP2PSessionState(FUWorksSteamID SteamIDRemote, FUWorksP2PSessionState& ConnectionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreNetworking* GetNetworking();
    
    UFUNCTION(BlueprintCallable)
    bool CloseP2PSessionWithUser(FUWorksSteamID SteamIDRemote);
    
    UFUNCTION(BlueprintCallable)
    bool CloseP2PChannelWithUser(FUWorksSteamID SteamIDRemote, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    bool AllowP2PPacketRelay(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    bool AcceptP2PSessionWithUser(FUWorksSteamID SteamIDRemote);
    
};

