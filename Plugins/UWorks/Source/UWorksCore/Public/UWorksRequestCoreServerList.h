#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "UWorksRequestCore.h"
#include "ServerListDelegateDelegate.h"
#include "ServerListUpdateDelegateDelegate.h"
#include "ServerListMinimalDelegateDelegate.h"
#include "ServerListUpdateMinimalDelegateDelegate.h"
#include "EUWorksServerQueryType.h"
#include "UWorksRequestCoreServerList.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreServerList : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerListDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerListUpdateDelegate OnRequestUpdated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerListMinimalDelegate OnRequestCompletedMinimal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerListUpdateMinimalDelegate OnRequestUpdatedMinimal;
    
    UUWorksRequestCoreServerList();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, EUWorksServerQueryType queryType);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksServerInfo& UpdatedServer, TArray<FUWorksServerInfo>& Servers);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterSecure();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterOr(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNotFull();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNor(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNoPlayers();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterNand(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterMap(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterLinux();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterHasPlayers();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameTagsNor(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameTagsAnd(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameDataOr(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameDataNor(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameDataAnd(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterGameAddr(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterDedicated();
    
    UFUNCTION(BlueprintCallable)
    void AddFilterAnd(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFilterAddr(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

