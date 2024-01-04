#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamID.h"
#include "EUWorksAccountType.h"
#include "EUWorksUniverse.h"
#include "UWorksLibrary.h"
#include "UWorksLibrarySteamID.generated.h"

UCLASS(Blueprintable)
class UWORKSUTILITIES_API UUWorksLibrarySteamID : public UUWorksLibrary {
    GENERATED_BODY()
public:
    UUWorksLibrarySteamID();

    UFUNCTION(BlueprintCallable)
    static void SetUniverse(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    
    UFUNCTION(BlueprintCallable)
    static void SetParametersC(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID, const FString& AccountInstance);
    
    UFUNCTION(BlueprintCallable)
    static void SetParametersB(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID);
    
    UFUNCTION(BlueprintCallable)
    static void SetParametersA(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetIdentifier(UPARAM(Ref) FUWorksSteamID& SteamID, const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void SetAccountInstance(UPARAM(Ref) FUWorksSteamID& SteamID, const FString& AccountInstance);
    
    UFUNCTION(BlueprintCallable)
    static void SetAccountID(UPARAM(Ref) FUWorksSteamID& SteamID, const FString& AccountID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPersistentGameServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLobby(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIndividualAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIdenticalWith(FUWorksSteamID A, FUWorksSteamID B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGameServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContentServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConsoleUserAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClanAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChatAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBlankAnonAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnonUserAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnonGameServerAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnonAccount(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasNoIndividualInstance(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUWorksUniverse GetUniverse(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStaticAccountKey(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetIdentifier(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EUWorksAccountType GetAccountType(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccountInstance(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAccountID(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBlankAnonUserLogon(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBlankAnonLogon(UPARAM(Ref) FUWorksSteamID& SteamID, EUWorksUniverse Universe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamID ConstructFromParametersC(EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID, const FString& AccountInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamID ConstructFromParametersB(EUWorksUniverse Universe, EUWorksAccountType AccountType, const FString& AccountID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUWorksSteamID ConstructFromParametersA(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    static void ClearIndividualInstance(FUWorksSteamID& SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void Clear(UPARAM(Ref) FUWorksSteamID& SteamID);
    
};

