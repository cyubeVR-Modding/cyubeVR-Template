#include "UWorksInterfaceCoreAppList.h"

UUWorksInterfaceCoreAppList::UUWorksInterfaceCoreAppList() {
}

int32 UUWorksInterfaceCoreAppList::GetNumInstalledApps() {
    return 0;
}

int32 UUWorksInterfaceCoreAppList::GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs) {
    return 0;
}

int32 UUWorksInterfaceCoreAppList::GetAppName(int32 AppID, FString& Name, int32 NameMaxLength) {
    return 0;
}

UUWorksInterfaceCoreAppList* UUWorksInterfaceCoreAppList::GetAppList() {
    return NULL;
}

int32 UUWorksInterfaceCoreAppList::GetAppInstallDir(int32 AppID, FString& Directory, int32 DirectoryMaxLength) {
    return 0;
}

int32 UUWorksInterfaceCoreAppList::GetAppBuildId(int32 AppID) {
    return 0;
}


