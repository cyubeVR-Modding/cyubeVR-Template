#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "CancelAgreementDelegateDelegate.h"
#include "CancelAgreementNode.generated.h"

class UCancelAgreementNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UCancelAgreementNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAgreementDelegate Completed;
    
    UCancelAgreementNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCancelAgreementNode* CancelAgreementNode(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID);
    
};

