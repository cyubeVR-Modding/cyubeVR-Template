#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPublisherAppOwnershipChangesDelegateDelegate.h"
#include "GetPublisherAppOwnershipChangesNode.generated.h"

class UGetPublisherAppOwnershipChangesNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetPublisherAppOwnershipChangesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipChangesDelegate Completed;
    
    UGetPublisherAppOwnershipChangesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPublisherAppOwnershipChangesNode* GetPublisherAppOwnershipChangesNode(const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion);
    
};

