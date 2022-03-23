#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceCore.h"
#include "SteamAppInstalledDelegateDelegate.h"
#include "SteamAppUninstalledDelegateDelegate.h"
#include "UWorksInterfaceCoreAppList.generated.h"

class UUWorksInterfaceCoreAppList;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreAppList : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamAppInstalledDelegate SteamAppInstalled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamAppUninstalledDelegate SteamAppUninstalled;
    
    UUWorksInterfaceCoreAppList();
    UFUNCTION(BlueprintCallable)
    int32 GetNumInstalledApps();
    
    UFUNCTION(BlueprintCallable)
    int32 GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppName(int32 AppID, FString& Name, int32 NameMaxLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUWorksInterfaceCoreAppList* GetAppList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppInstallDir(int32 AppID, FString& Directory, int32 DirectoryMaxLength);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppBuildId(int32 AppID);
    
};

