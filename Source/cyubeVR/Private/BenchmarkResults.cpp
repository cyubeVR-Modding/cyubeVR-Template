#include "BenchmarkResults.h"

FBenchmarkResults::FBenchmarkResults() {
    this->AverageFPS = 0.00f;
    this->AverageFrametime = 0.00f;
    this->Low1Percent = 0.00f;
    this->Low01Percent = 0.00f;
    this->ActiveRendering = false;
}

