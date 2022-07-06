#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RequestClanOfficerListDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "CoreRequestClanOfficerListNode.generated.h"

class UCoreRequestClanOfficerListNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestClanOfficerListDelegate Completed;
    
    UCoreRequestClanOfficerListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestClanOfficerListNode* RequestClanOfficerListNode(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClan, int32 Officers, bool bSuccess);
    
};

