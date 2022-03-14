#include "TexSource.h"

FTexSource::FTexSource() {
    this->SizeX = 0;
    this->SizeY = 0;
    this->NumSlices = 0;
    this->NumMips = 0;
    this->bGuidIsHash = false;
    this->Format = TSF_Invalid;
}

