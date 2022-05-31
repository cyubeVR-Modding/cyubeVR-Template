#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "AuthenticateUserTicketDelegateDelegate.h"
#include "AuthenticateUserTicketMinimalDelegateDelegate.h"
#include "UWorksRequestWebAuthenticateUserTicket.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebAuthenticateUserTicket : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthenticateUserTicketDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthenticateUserTicketMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAuthenticateUserTicket();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Ticket);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

