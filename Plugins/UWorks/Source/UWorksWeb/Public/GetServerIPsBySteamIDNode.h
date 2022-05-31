#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetServerIPsBySteamIDDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "GetServerIPsBySteamIDNode.generated.h"

class UGetServerIPsBySteamIDNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetServerIPsBySteamIDDelegate Completed;
    
    UGetServerIPsBySteamIDNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetServerIPsBySteamIDNode* GetServerIPsBySteamIDNode(const FString& Key, FUWorksSteamID ServerSteamID);
    
};

