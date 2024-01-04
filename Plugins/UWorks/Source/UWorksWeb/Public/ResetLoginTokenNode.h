#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "ResetLoginTokenDelegateDelegate.h"
#include "ResetLoginTokenNode.generated.h"

class UResetLoginTokenNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UResetLoginTokenNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetLoginTokenDelegate Completed;
    
    UResetLoginTokenNode();

    UFUNCTION(BlueprintCallable)
    static UResetLoginTokenNode* ResetLoginTokenNode(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

