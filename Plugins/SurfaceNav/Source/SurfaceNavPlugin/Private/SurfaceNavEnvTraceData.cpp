#include "SurfaceNavEnvTraceData.h"

FSurfaceNavEnvTraceData::FSurfaceNavEnvTraceData() {
    this->NavigationFilter = NULL;
    this->OffsetAlongNavNormal = 0.00f;
    this->TraceMode = ESurfaceNavEnvQueryTrace::None;
}

