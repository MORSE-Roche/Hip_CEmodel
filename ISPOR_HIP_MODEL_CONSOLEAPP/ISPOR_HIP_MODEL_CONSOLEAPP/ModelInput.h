#pragma once
#include "constantVariables.h"

class ModelInput
{
public:
	double MortalityRates[AGE_DATA_DIMENSION1][NUMBER_OF_GENDERS];
	double Risk[RISK_ESTIMATES_DIMENSION1][DISTRIBUTION_ESTIMATE_DETAILS_DIMENSION];
	double Hazard[COVARIANCE_MATRIX_DIMENSION][HAZARD_ESTIMATES_DIMENSION];
	double CovMat[COVARIANCE_MATRIX_DIMENSION][COVARIANCE_MATRIX_DIMENSION];
	double Utilities[UTILITY_ESTIMATES_DIMENSION1][DISTRIBUTION_ESTIMATE_DETAILS_DIMENSION];
	double TxCosts[NUMBER_OF_TREATMENT_ARMS];
	double Costs[NUMBER_OF_TREATMENT_ARMS][DISTRIBUTION_ESTIMATE_DETAILS_DIMENSION];
	double Input_per_HS[INPUT_PER_HEALTH_STATE_MATRIX_DIMENSION1][NumHealthStates];

	ModelInput(void);
	~ModelInput(void);
};

