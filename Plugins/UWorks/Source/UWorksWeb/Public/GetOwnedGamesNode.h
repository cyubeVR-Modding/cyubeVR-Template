#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetOwnedGamesDelegateDelegate.h"
#include "GetOwnedGamesNode.generated.h"

class UGetOwnedGamesNode;

UCLASS()
class UWORKSWEB_API UGetOwnedGamesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetOwnedGamesDelegate Completed;
    
    UGetOwnedGamesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetOwnedGamesNode* GetOwnedGamesNode(const FString& Key, FUWorksSteamID SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> AppIDsFilter);
    
};

