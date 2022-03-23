#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "AuthenticateUserDelegateDelegate.h"
#include "AuthenticateUserMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebAuthenticateUser.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAuthenticateUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAuthenticateUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAuthenticateUser();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

