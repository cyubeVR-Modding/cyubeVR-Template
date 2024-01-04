#include "EnvQueryGenerator_DSN_Sphere.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_DSN_Sphere::UEnvQueryGenerator_DSN_Sphere() {
    this->Center = UEnvQueryContext_Querier::StaticClass();
    this->bDefineArc = false;
}


