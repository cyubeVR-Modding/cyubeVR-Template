#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "UpdateSessionDelegateDelegate.h"
#include "UpdateSessionMinimalDelegateDelegate.h"
#include "UWorksTitle.h"
#include "UWorksUsers.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebUpdateSession.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebUpdateSession : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSessionDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSessionMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebUpdateSession();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& SessionId, int32 AppID, FUWorksTitle Title, FUWorksUsers Users, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

