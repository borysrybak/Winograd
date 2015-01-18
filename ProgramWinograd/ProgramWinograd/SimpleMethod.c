#include "SystemHeaders.h"

void ComputeMatrixSimpleMethod(void)
{
	ResultMatrix = ArrayAllocation(SizeOfMatrix);

	int Sum;
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			Sum = 0;
			for (int k = 0; k < SizeOfMatrix; k++)
			{
				Sum = Compute('+', Sum, Compute('*', ptrptrMatrixAB[0][i][k], ptrptrMatrixAB[1][k][j]));
			}

			NumberOfSums--;
			ResultMatrix[i][j] = Sum;
		}
	}

	return;
}