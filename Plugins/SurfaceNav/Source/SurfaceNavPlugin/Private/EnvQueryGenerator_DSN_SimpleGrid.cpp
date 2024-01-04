#include "EnvQueryGenerator_DSN_SimpleGrid.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_DSN_SimpleGrid::UEnvQueryGenerator_DSN_SimpleGrid() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


