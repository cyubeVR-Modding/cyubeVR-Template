#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "AuthenticateUserNode.generated.h"

class UAuthenticateUserNode;

UCLASS()
class UWORKSWEB_API UAuthenticateUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAuthenticateUserDelegate Completed;
    
    UAuthenticateUserNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UAuthenticateUserNode* AuthenticateUserNode(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    
};

