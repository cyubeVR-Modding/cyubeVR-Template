#pragma once
#include "CoreMinimal.h"
#include "GetFileDetailsDelegateDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWorksResult.h"
#include "CoreGetFileDetailsNode.generated.h"

class UCoreGetFileDetailsNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreGetFileDetailsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetFileDetailsDelegate Completed;
    
    UCoreGetFileDetailsNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 fileSize, const FString& FileSHA, const TArray<int32>& FileFlags);
    
    UFUNCTION(BlueprintCallable)
    static UCoreGetFileDetailsNode* GetFileDetailsNode(const FString& Filename);
    
};

