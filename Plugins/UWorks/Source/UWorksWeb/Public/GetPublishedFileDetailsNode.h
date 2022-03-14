#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPublishedFileDetailsDelegateDelegate.h"
#include "GetPublishedFileDetailsNode.generated.h"

class UGetPublishedFileDetailsNode;

UCLASS()
class UWORKSWEB_API UGetPublishedFileDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPublishedFileDetailsDelegate Completed;
    
    UGetPublishedFileDetailsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPublishedFileDetailsNode* GetPublishedFileDetailsNode(int32 ItemCount, TArray<int32> PublishedFileIDs);
    
};

