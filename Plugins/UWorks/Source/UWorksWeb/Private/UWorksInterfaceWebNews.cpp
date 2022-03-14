#include "UWorksInterfaceWebNews.h"

class UUWorksRequestWebGetNewsForAppAuthed;
class UUWorksRequestWebGetNewsForApp;

void UUWorksInterfaceWebNews::GetNewsForAppMinimal(int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds, const FGetNewsForAppMinimalDelegate& Delegate) {
}

void UUWorksInterfaceWebNews::GetNewsForAppAuthedMinimal(const FString& Key, int32 AppID, int32 MaxLength, int32 EndDate, int32 Count, const FString& Feeds, const FGetNewsForAppAuthedMinimalDelegate& Delegate) {
}

UUWorksRequestWebGetNewsForAppAuthed* UUWorksInterfaceWebNews::GetNewsForAppAuthed() {
    return NULL;
}

UUWorksRequestWebGetNewsForApp* UUWorksInterfaceWebNews::GetNewsForApp() {
    return NULL;
}

UUWorksInterfaceWebNews::UUWorksInterfaceWebNews() {
}

