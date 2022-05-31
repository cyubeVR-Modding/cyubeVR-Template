#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "DeleteLeaderboardDelegateDelegate.h"
#include "DeleteLeaderboardMinimalDelegateDelegate.h"
#include "UWorksRequestWebDeleteLeaderboard.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebDeleteLeaderboard : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeleteLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeleteLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

