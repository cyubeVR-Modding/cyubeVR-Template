#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GS_Default.h"
#include "GS_ExtendedDefault.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGS_ExtendedDefault : public UGS_Default {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitGripScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 MinimumGripScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 MaximumGripScaling;
    
    UGS_ExtendedDefault();

};

