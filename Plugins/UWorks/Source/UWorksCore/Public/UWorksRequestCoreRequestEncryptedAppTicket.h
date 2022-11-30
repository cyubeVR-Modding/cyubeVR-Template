#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestEncryptedAppTicketDelegateDelegate.h"
#include "EUWorksResult.h"
#include "RequestEncryptedAppTicketMinimalDelegateDelegate.h"
#include "UWorksRequestCoreRequestEncryptedAppTicket.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreRequestEncryptedAppTicket : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEncryptedAppTicketDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestEncryptedAppTicketMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestEncryptedAppTicket();
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<uint8> Buffer);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

