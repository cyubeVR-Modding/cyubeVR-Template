#pragma once
#include "CoreMinimal.h"
#include "GetPopularMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetPopularDelegateDelegate.h"
#include "UWorksRequestWebGetPopular.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetPopular : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPopularDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetPopularMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPopular();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& Language, int32 Rows, int32 Start, int32 FilterAppID, int32 ECurrency);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

