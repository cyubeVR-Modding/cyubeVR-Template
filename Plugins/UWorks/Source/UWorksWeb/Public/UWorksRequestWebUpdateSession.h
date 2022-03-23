#pragma once
#include "CoreMinimal.h"
#include "UpdateSessionMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "UpdateSessionDelegateDelegate.h"
#include "UWorksTitle.h"
#include "UWorksSteamID.h"
#include "UWorksUsers.h"
#include "UWorksRequestWebUpdateSession.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebUpdateSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUpdateSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpdateSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

