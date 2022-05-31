#pragma once
#include "CoreMinimal.h"
#include "VRGripScriptBase.h"
#include "VRGripScriptBaseBP.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UVRGripScriptBaseBP : public UVRGripScriptBase {
    GENERATED_BODY()
public:
    UVRGripScriptBaseBP();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

