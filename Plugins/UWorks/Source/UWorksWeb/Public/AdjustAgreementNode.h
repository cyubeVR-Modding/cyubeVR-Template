#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AdjustAgreementDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "AdjustAgreementNode.generated.h"

class UAdjustAgreementNode;

UCLASS()
class UWORKSWEB_API UAdjustAgreementNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAdjustAgreementDelegate Completed;
    
    UAdjustAgreementNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UAdjustAgreementNode* AdjustAgreementNode(const FString& Key, FUWorksSteamID SteamID, const FString& AgreementID, int32 AppID, const FString& NextProcessDate);
    
};

