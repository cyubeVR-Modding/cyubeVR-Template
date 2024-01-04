#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetUserAgreementInfoDelegateDelegate.h"
#include "GetUserAgreementInfoNode.generated.h"

class UGetUserAgreementInfoNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUserAgreementInfoDelegate Completed;
    
    UGetUserAgreementInfoNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUserAgreementInfoNode* GetUserAgreementInfoNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
};

