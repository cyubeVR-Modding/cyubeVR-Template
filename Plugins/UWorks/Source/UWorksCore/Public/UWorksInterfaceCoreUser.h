#pragma once
#include "CoreMinimal.h"
#include "IPCFailureDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "SteamServersConnectedDelegateDelegate.h"
#include "SteamServerConnectFailureDelegateDelegate.h"
#include "SteamServersDisconnectedDelegateDelegate.h"
#include "ClientGameServerDenyDelegateDelegate.h"
#include "LicensesUpdatedDelegateDelegate.h"
#include "ValidateAuthTicketResponseDelegateDelegate.h"
#include "MicroTxnAuthorizationResponseDelegateDelegate.h"
#include "GetAuthSessionTicketResponseDelegateDelegate.h"
#include "GameWebCallbackDelegateDelegate.h"
#include "EUWorksUserHasLicenseForAppResult.h"
#include "UWorksSteamID.h"
#include "RequestStoreAuthURLMinimalDelegateDelegate.h"
#include "RequestEncryptedAppTicketMinimalDelegateDelegate.h"
#include "EUWorksVoiceResult.h"
#include "UWorksSteamUser.h"
#include "UWorksTicketHandle.h"
#include "EUWorksBeginAuthSessionResult.h"
#include "UWorksInterfaceCoreUser.generated.h"

class UUWorksRequestCoreRequestEncryptedAppTicket;
class UUWorksRequestCoreRequestStoreAuthURL;
class UAudioComponent;
class UUWorksInterfaceCoreUser;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreUser : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamServersConnectedDelegate SteamServersConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamServerConnectFailureDelegate SteamServerConnectFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamServersDisconnectedDelegate SteamServersDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClientGameServerDenyDelegate ClientGameServerDeny;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIPCFailureDelegate IPCFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLicensesUpdatedDelegate LicensesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FValidateAuthTicketResponseDelegate ValidateAuthTicketResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMicroTxnAuthorizationResponseDelegate MicroTxnAuthorizationResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAuthSessionTicketResponseDelegate GetAuthSessionTicketResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGameWebCallbackDelegate GameWebCallback;
    
    UUWorksInterfaceCoreUser();
    UFUNCTION(BlueprintCallable)
    EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void StopVoiceRecording();
    
    UFUNCTION(BlueprintCallable)
    void StartVoiceRecording();
    
    UFUNCTION(BlueprintCallable)
    void RequestStoreAuthURLMinimal(const FRequestStoreAuthURLMinimalDelegate& Completed, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestStoreAuthURL* RequestStoreAuthURL();
    
    UFUNCTION(BlueprintCallable)
    void RequestEncryptedAppTicketMinimal(const FRequestEncryptedAppTicketMinimalDelegate& Completed, TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreRequestEncryptedAppTicket* RequestEncryptedAppTicket();
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* GetVoiceChannel(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    EUWorksVoiceResult GetVoice(TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreUser* GetUser();
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetSteamID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerSteamLevel();
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamUser GetHSteamUser();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGameBadgeLevel(int32 Series, bool bFoil);
    
    UFUNCTION(BlueprintCallable)
    bool GetEncryptedAppTicket(TArray<uint8>& Ticket);
    
    UFUNCTION(BlueprintCallable)
    FUWorksTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    
    UFUNCTION(BlueprintCallable)
    void EndAuthSession(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    EUWorksVoiceResult DecompressVoice(TArray<uint8> CompressedBuffer, TArray<uint8>& UncompressedBuffer);
    
    UFUNCTION(BlueprintCallable)
    void CancelAuthTicket(FUWorksTicketHandle TicketHandle);
    
    UFUNCTION(BlueprintCallable)
    bool BLoggedOn();
    
    UFUNCTION(BlueprintCallable)
    bool BIsTwoFactorEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool BIsPhoneVerified();
    
    UFUNCTION(BlueprintCallable)
    bool BIsPhoneRequiringVerification();
    
    UFUNCTION(BlueprintCallable)
    bool BIsPhoneIdentifying();
    
    UFUNCTION(BlueprintCallable)
    bool BIsBehindNAT();
    
    UFUNCTION(BlueprintCallable)
    EUWorksBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void AdvertiseGame(FUWorksSteamID SteamIDGameServer, const FString& ServerIP, int32 ServerPort);
    
    UFUNCTION(BlueprintCallable)
    UAudioComponent* AddBufferToVoiceChannel(TArray<uint8> Buffer, int32 Index);
    
};

