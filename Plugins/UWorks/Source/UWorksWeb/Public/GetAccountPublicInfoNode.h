#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetAccountPublicInfoDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetAccountPublicInfoNode.generated.h"

class UGetAccountPublicInfoNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetAccountPublicInfoNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetAccountPublicInfoDelegate Completed;
    
    UGetAccountPublicInfoNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAccountPublicInfoNode* GetAccountPublicInfoNode(const FString& Key, FUWorksSteamID SteamID);
    
};

