#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "AuthenticateUserDelegateDelegate.h"
#include "AuthenticateUserMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebAuthenticateUser.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthenticateUserDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthenticateUserMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebAuthenticateUser();

    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

