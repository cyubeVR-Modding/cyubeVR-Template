#pragma once
#include "CoreMinimal.h"
#include "UWorksLibrary.h"
#include "UWorksLibraryConversions.generated.h"

UCLASS(Blueprintable)
class UWORKSUTILITIES_API UUWorksLibraryConversions : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibraryConversions();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentProcessId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> ConvertStringToBytes(const FString& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertBytesToString(TArray<uint8> Data);
    
};

