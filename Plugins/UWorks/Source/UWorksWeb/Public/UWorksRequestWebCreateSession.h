#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "CreateSessionDelegateDelegate.h"
#include "CreateSessionMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UWorksTitle.h"
#include "UWorksUsers.h"
#include "UWorksRequestWebCreateSession.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebCreateSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCreateSession();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Context, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

