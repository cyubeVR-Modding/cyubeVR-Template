#pragma once
#include "CoreMinimal.h"
#include "GetPublisherAppOwnershipChangesMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetPublisherAppOwnershipChangesDelegateDelegate.h"
#include "UWorksRequestWebGetPublisherAppOwnershipChanges.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebGetPublisherAppOwnershipChanges : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipChangesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPublisherAppOwnershipChangesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetPublisherAppOwnershipChanges();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

