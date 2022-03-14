#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SetMemoDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "SetMemoNode.generated.h"

class USetMemoNode;

UCLASS()
class UWORKSWEB_API USetMemoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSetMemoDelegate Completed;
    
    USetMemoNode();
    UFUNCTION(BlueprintCallable)
    static USetMemoNode* SetMemoNode(const FString& Key, FUWorksSteamID SteamID, const FString& Memo);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

