#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "SetPersonaNameDelegateDelegate.h"
#include "CoreSetPersonaNameNode.generated.h"

class UCoreSetPersonaNameNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreSetPersonaNameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetPersonaNameDelegate Completed;
    
    UCoreSetPersonaNameNode();

    UFUNCTION(BlueprintCallable)
    static UCoreSetPersonaNameNode* SetPersonaNameNode(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, EUWorksResult Result);
    
};

