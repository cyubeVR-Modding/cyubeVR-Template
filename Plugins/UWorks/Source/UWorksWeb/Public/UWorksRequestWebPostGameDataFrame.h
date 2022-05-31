#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "PostGameDataFrameDelegateDelegate.h"
#include "PostGameDataFrameMinimalDelegateDelegate.h"
#include "UWorksSteamID.h"
#include "UWorksRequestWebPostGameDataFrame.generated.h"

UCLASS(Blueprintable)
class UWORKSWEB_API UUWorksRequestWebPostGameDataFrame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostGameDataFrameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostGameDataFrameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebPostGameDataFrame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, const FString& BroadcastID, const FString& FrameData);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

