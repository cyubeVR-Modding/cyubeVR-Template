#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CreateSessionDelegateDelegate.h"
#include "UWorksUsers.h"
#include "CreateSessionMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksTitle.h"
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

