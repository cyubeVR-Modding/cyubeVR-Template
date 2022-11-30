#pragma once
#include "CoreMinimal.h"
#include "GetHistoryCommandDetailsDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UWorksSteamID.h"
#include "GetHistoryCommandDetailsNode.generated.h"

class UGetHistoryCommandDetailsNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetHistoryCommandDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetHistoryCommandDetailsDelegate Completed;
    
    UGetHistoryCommandDetailsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetHistoryCommandDetailsNode* GetHistoryCommandDetailsNode(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& Command, const FString& ContextID, const FString& Arguments);
    
};

