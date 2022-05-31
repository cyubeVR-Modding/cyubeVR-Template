#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestEncryptedAppTicketDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreRequestEncryptedAppTicketNode.generated.h"

class UCoreRequestEncryptedAppTicketNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestEncryptedAppTicketNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEncryptedAppTicketDelegate Completed;
    
    UCoreRequestEncryptedAppTicketNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestEncryptedAppTicketNode* RequestEncryptedAppTicketNode(TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

