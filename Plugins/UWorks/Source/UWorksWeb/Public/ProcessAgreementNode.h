#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ProcessAgreementDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "ProcessAgreementNode.generated.h"

class UProcessAgreementNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UProcessAgreementNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProcessAgreementDelegate Completed;
    
    UProcessAgreementNode();
    UFUNCTION(BlueprintCallable)
    static UProcessAgreementNode* ProcessAgreementNode(const FString& Key, const FString& OrderID, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, int32 Amount, const FString& Currency);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

