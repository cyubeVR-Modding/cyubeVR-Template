#pragma once
#include "CoreMinimal.h"
#include "UWorksGameID.h"
#include "UWorksLibrary.h"
#include "UWorksLibraryGameID.generated.h"

UCLASS(BlueprintType)
class UWORKSUTILITIES_API UUWorksLibraryGameID : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibraryGameID();
    UFUNCTION(BlueprintCallable)
    static void SetIdentifier(UPARAM(Ref) FUWorksGameID& GameID, const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void Reset(UPARAM(Ref) FUWorksGameID& GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamApp(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShortcut(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsP2PFile(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMod(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIdenticalWith(FUWorksGameID A, FUWorksGameID B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetModID(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetIdentifier(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAppID(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksGameID ConstructFromParametersC(int32 AppID, int32 ModID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksGameID ConstructFromParametersB(int32 AppID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksGameID ConstructFromParametersA(const FString& Identifier);
    
};

