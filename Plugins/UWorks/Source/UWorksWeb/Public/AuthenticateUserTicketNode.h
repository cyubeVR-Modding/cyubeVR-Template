#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AuthenticateUserTicketDelegateDelegate.h"
#include "AuthenticateUserTicketNode.generated.h"

class UAuthenticateUserTicketNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthenticateUserTicketDelegate Completed;
    
    UAuthenticateUserTicketNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UAuthenticateUserTicketNode* AuthenticateUserTicketNode(const FString& Key, int32 AppID, const FString& Ticket);
    
};

