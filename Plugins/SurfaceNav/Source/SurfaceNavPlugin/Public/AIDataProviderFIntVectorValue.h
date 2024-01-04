#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "UObject/NoExportTypes.h"
#include "AIDataProviderFIntVectorValue.generated.h"

USTRUCT(BlueprintType)
struct SURFACENAVPLUGIN_API FAIDataProviderFIntVectorValue : public FAIDataProviderTypedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector DefaultValue;
    
    FAIDataProviderFIntVectorValue();
};

