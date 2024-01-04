#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetSteamLevelDelegateDelegate.h"
#include "GetSteamLevelNode.generated.h"

class UGetSteamLevelNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetSteamLevelNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSteamLevelDelegate Completed;
    
    UGetSteamLevelNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetSteamLevelNode* GetSteamLevelNode(const FString& Key, FUWorksSteamID SteamID);
    
};

