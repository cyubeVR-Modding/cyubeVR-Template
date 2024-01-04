#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "UObject/NoExportTypes.h"
#include "AIDataProviderFVectorValue.generated.h"

USTRUCT(BlueprintType)
struct SURFACENAVPLUGIN_API FAIDataProviderFVectorValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultValue;
    
    FAIDataProviderFVectorValue();
};

