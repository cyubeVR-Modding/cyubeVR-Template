#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksServerQueryType.h"
#include "ServerListUpdateDelegateDelegate.h"
#include "UWorksServerInfo.h"
#include "CoreServerListNode.generated.h"

class UCoreServerListNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreServerListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerListUpdateDelegate Updated;
    
    UCoreServerListNode();

    UFUNCTION(BlueprintCallable)
    static UCoreServerListNode* ServerListNode(int32 AppID, EUWorksServerQueryType queryType, int32 MaxUpdates);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestUpdated(bool bSuccessful, FUWorksServerInfo Server);
    
};

