#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "pvrFStringDelegateDelegate.h"
#include "pvrInt32DelegateDelegate.h"
#include "pvrInt64StrDelegateDelegate.h"
#include "pvrNoParamDelegateDelegate.h"
#include "PvrInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class PIMAXPLATFORM_API UPvrInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrInt32Delegate OnCheckEntitlementResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrInt32Delegate OnProcessingRuntimeError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrInt64StrDelegate OnProcessingLoggedInUser;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrFStringDelegate OnGetAccessToken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrFStringDelegate OnProcessingCurrentLanguage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrFStringDelegate OnProcessingMessageError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrNoParamDelegate OnLogout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FpvrNoParamDelegate OnShutDown;
    
    UPvrInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void pvr_Init(bool& success);
    
};

