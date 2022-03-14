#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetUGCFileDetailsDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetUGCFileDetailsNode.generated.h"

class UGetUGCFileDetailsNode;

UCLASS()
class UWORKSWEB_API UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUGCFileDetailsDelegate Completed;
    
    UGetUGCFileDetailsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetUGCFileDetailsNode* GetUGCFileDetailsNode(const FString& Key, FUWorksSteamID SteamID, int32 UGCID, int32 AppID);
    
};

