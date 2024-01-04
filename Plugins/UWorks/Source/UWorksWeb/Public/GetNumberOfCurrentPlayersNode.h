#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate2.h"
#include "GetNumberOfCurrentPlayersNode.generated.h"

class UGetNumberOfCurrentPlayersNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNumberOfCurrentPlayersDelegate Completed;
    
    UGetNumberOfCurrentPlayersNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode(int32 AppID);
    
};

