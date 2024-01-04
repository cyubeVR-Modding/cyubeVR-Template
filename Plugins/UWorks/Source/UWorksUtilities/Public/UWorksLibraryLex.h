#pragma once
#include "CoreMinimal.h"
#include "UWorksControllerActionSetHandle.h"
#include "UWorksControllerAnalogActionHandle.h"
#include "UWorksControllerDigitalActionHandle.h"
#include "UWorksControllerHandle.h"
#include "UWorksFriendsGroupID.h"
#include "UWorksScreenshotHandle.h"
#include "UWorksSteamInventoryResult.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "UWorksSteamPipe.h"
#include "UWorksSteamUser.h"
#include "UWorksTicketHandle.h"
#include "UWorksUGCFileWriteStreamHandle.h"
#include "UWorksUGCHandle.h"
#include "UWorksUGCQueryHandle.h"
#include "UWorksUGCUpdateHandle.h"
#include "UWorksLibrary.h"
#include "UWorksLibraryLex.generated.h"

UCLASS(Blueprintable)
class UWORKSUTILITIES_API UUWorksLibraryLex : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibraryLex();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCUpdateHandle WriteUGCUpdateHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCQueryHandle WriteUGCQueryHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCHandle WriteUGCHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksUGCFileWriteStreamHandle WriteUGCFileWriteStreamHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksTicketHandle WriteTicketHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamUser WriteSteamUser(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamPipe WriteSteamPipe(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamLeaderboardEntries WriteSteamLeaderboardEntries(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamLeaderboard WriteSteamLeaderboard(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamInventoryResult WriteSteamInventoryResult(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksScreenshotHandle WriteScreenshotHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksFriendsGroupID WriteFriendsGroupID(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerHandle WriteControllerHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerDigitalActionHandle WriteControllerDigitalActionHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerAnalogActionHandle WriteControllerAnalogActionHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksControllerActionSetHandle WriteControllerActionSetHandle(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCUpdateHandle(FUWorksUGCUpdateHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCQueryHandle(FUWorksUGCQueryHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCHandle(FUWorksUGCHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadUGCFileWriteStreamHandle(FUWorksUGCFileWriteStreamHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadTicketHandle(FUWorksTicketHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamUser(FUWorksSteamUser Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamPipe(FUWorksSteamPipe Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamLeaderboardEntries(FUWorksSteamLeaderboardEntries Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamLeaderboard(FUWorksSteamLeaderboard Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadSteamInventoryResult(FUWorksSteamInventoryResult Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadScreenshotHandle(FUWorksScreenshotHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadFriendsGroupID(FUWorksFriendsGroupID Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerHandle(FUWorksControllerHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerDigitalActionHandle(FUWorksControllerDigitalActionHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerAnalogActionHandle(FUWorksControllerAnalogActionHandle Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReadControllerActionSetHandle(FUWorksControllerActionSetHandle Value);
    
};

