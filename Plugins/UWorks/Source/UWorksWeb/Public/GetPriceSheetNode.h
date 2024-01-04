#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetPriceSheetDelegateDelegate.h"
#include "GetPriceSheetNode.generated.h"

class UGetPriceSheetNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetPriceSheetNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPriceSheetDelegate Completed;
    
    UGetPriceSheetNode();

    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPriceSheetNode* GetPriceSheetNode(const FString& Key, int32 ECurrency);
    
};

