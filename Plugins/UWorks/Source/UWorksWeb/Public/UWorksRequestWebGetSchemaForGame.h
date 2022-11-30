#pragma once
#include "CoreMinimal.h"
#include "GetSchemaForGameMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetSchemaForGameDelegateDelegate.h"
#include "UWorksRequestWebGetSchemaForGame.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetSchemaForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSchemaForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSchemaForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetSchemaForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, const FString& Language);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

