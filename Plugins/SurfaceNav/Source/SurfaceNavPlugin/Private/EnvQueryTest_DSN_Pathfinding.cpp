#include "EnvQueryTest_DSN_Pathfinding.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_DSN_Pathfinding::UEnvQueryTest_DSN_Pathfinding() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TestMode = EEnvTestPathfinding::PathExist;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}


