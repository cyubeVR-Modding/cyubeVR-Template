#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetBadgesDelegateDelegate.h"
#include "GetBadgesNode.generated.h"

class UGetBadgesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetBadgesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetBadgesDelegate Completed;
    
    UGetBadgesNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetBadgesNode* GetBadgesNode(const FString& Key, FUWorksSteamID SteamID);
    
};

