#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetExportedAssetsForUserDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetExportedAssetsForUserNode.generated.h"

class UGetExportedAssetsForUserNode;

UCLASS()
class UWORKSWEB_API UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetExportedAssetsForUserDelegate Completed;
    
    UGetExportedAssetsForUserNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetExportedAssetsForUserNode* GetExportedAssetsForUserNode(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& ContextID);
    
};

