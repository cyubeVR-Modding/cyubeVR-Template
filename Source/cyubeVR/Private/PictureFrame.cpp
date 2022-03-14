#include "PictureFrame.h"

class UTexture2D;

bool APictureFrame::UseActorCustomLocation() {
    return false;
}

void APictureFrame::SetFrameProperties_Implementation(FPictureFrameProperties Properties) {
}

bool APictureFrame::LoadImagesFromDisk(TArray<FLoadedPicture>& LoadedPictures) {
    return false;
}

FPictureFrameProperties APictureFrame::GetFrameProperties_Implementation() {
    return FPictureFrameProperties{};
}

FVector APictureFrame::GetActorCustomLocation() {
    return FVector{};
}

bool APictureFrame::ApplyNewImage(const FLoadedPicture& NewLoadedPicture) {
    return false;
}

void APictureFrame::ApplyLoadedTexture_Implementation(UTexture2D* LoadedTexture) {
}

APictureFrame::APictureFrame() {
}

