#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardDelegateDelegate2.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate2.h"
#include "UWorksRequestWeb.h"
#include "UWorksRequestWebFindOrCreateLeaderboard.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebFindOrCreateLeaderboard : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindOrCreateLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindOrCreateLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebFindOrCreateLeaderboard();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

