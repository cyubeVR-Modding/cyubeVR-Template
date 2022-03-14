#pragma once
#include "CoreMinimal.h"
#include "EUWorksP2PSessionError.h"
#include "UWorksP2PSessionState.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksP2PSessionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bConnectionActive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bConnecting;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EUWorksP2PSessionError P2PSessionError;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUsingRelay;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 BytesQueuedForSend;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PacketsQueuedForSend;
    
    FUWorksP2PSessionState();
};

