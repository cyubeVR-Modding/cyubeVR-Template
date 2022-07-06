#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
#include "AuthenticateUserTicketMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "AuthenticateUserMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebUserAuth.generated.h"

class UUWorksRequestWebAuthenticateUserTicket;
class UUWorksRequestWebAuthenticateUser;

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksInterfaceWebUserAuth : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebUserAuth();
    UFUNCTION(BlueprintCallable)
    static void AuthenticateUserTicketMinimal(const FString& Key, int32 AppID, const FString& Ticket, const FAuthenticateUserTicketMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebAuthenticateUserTicket* AuthenticateUserTicket();
    
    UFUNCTION(BlueprintCallable)
    static void AuthenticateUserMinimal(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey, const FAuthenticateUserMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebAuthenticateUser* AuthenticateUser();
    
};

