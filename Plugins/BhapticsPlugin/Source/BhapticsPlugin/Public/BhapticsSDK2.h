#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "BhapticsRotationOption.h"
#include "BhapticsDevice.h"
#include "UObject/NoExportTypes.h"
#include "BhapticsSDK2.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class BHAPTICSPLUGIN_API UBhapticsSDK2 : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBhapticsSDK2();
    UFUNCTION(BlueprintCallable)
    static void SwapPosition(FBhapticsDevice device);
    
    UFUNCTION(BlueprintCallable)
    static bool StopHapticByRequestId(int32 requestID);
    
    UFUNCTION(BlueprintCallable)
    static bool StopHapticByEventId(const FString& EventId);
    
    UFUNCTION(BlueprintCallable)
    static bool StopHaptic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBhapticsRotationOption ProjectToVestLocation(FVector ContactLocation, FVector PlayerLocation, FRotator PlayerRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBhapticsRotationOption ProjectToVest(FVector ContactLocation, UPrimitiveComponent* PlayerComponent, float HalfHeight);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayHapticWithOption(const FString& EventId, float Intensity, float Duration, float angleX, float OffsetY);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayHaptic(const FString& EventId);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayDot(int32 Position, TArray<int32> motorValues, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void PingAll();
    
    UFUNCTION(BlueprintCallable)
    static void Ping(FBhapticsDevice device);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingByRequestId(int32 requestID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingByEventId(const FString& EventId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    static void Initialize();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FBhapticsDevice> GetBhapticsDevices();
    
    UFUNCTION(BlueprintCallable)
    static void Destroy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBhapticsRotationOption CustomProjectToVest(FVector ContactLocation, UPrimitiveComponent* PlayerComponent, float HalfHeight, FVector UpVector, FVector ForwardVector);
    
};

