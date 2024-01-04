#include "EnvQueryGenerator_DSN_Cone.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_DSN_Cone::UEnvQueryGenerator_DSN_Cone() {
    this->CenterActor = UEnvQueryContext_Querier::StaticClass();
}


