#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "SetPersonaNameDelegateDelegate.h"
#include "SetPersonaNameMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UWorksRequestCoreSetPersonaName.generated.h"

UCLASS(Blueprintable)
class UWORKSCORE_API UUWorksRequestCoreSetPersonaName : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetPersonaNameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetPersonaNameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSetPersonaName();

    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(bool& bSuccess, bool& bLocalSuccess, EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

