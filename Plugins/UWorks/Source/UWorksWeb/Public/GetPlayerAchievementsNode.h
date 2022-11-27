#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPlayerAchievementsDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetPlayerAchievementsNode.generated.h"

class UGetPlayerAchievementsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetPlayerAchievementsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPlayerAchievementsDelegate Completed;
    
    UGetPlayerAchievementsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPlayerAchievementsNode* GetPlayerAchievementsNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& Language);
    
};

