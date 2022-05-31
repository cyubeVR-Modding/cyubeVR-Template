#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetNewsForAppAuthedDelegateDelegate.h"
#include "GetNewsForAppAuthedMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetNewsForAppAuthed.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetNewsForAppAuthed : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNewsForAppAuthedDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetNewsForAppAuthedMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetNewsForAppAuthed();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

