#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERuntimeMeshCollisionCookingMode.h"
#include "Engine/DeveloperSettings.h"
#include "ERuntimeMeshUpdateFrequency.h"
#include "ERuntimeMeshThreadingPriority.h"
#include "RuntimeMeshComponentSettings.generated.h"

UCLASS(DefaultConfig, Config=RuntimeMeshComponent)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshComponentSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshUpdateFrequency DefaultUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse32BitIndicesByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHighPrecisionTexCoordsByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHighPrecisionTangentsByDefault;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCookCollisionAsync;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshCollisionCookingMode DefaultCookingMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range MinMaxThreadPoolThreads;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SystemThreadDivisor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeMeshThreadingPriority ThreadPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThreadStackSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTimePerTick;
    
    URuntimeMeshComponentSettings();
};

