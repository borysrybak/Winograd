#include "SystemHeaders.h"

void ComputeMatrixWinogradMethod(void)
{
	ResultMatrix = ArrayAllocation(SizeOfMatrix);

	int	Product, C, Chi;
	int p, np;
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			Product = C = Chi = 1;
			p = 0;
			np = 1;
			for (int k = 0; k < SizeOfMatrix; k++)
			{
				Product = Compute('*', Product, Compute('+', ptrptrMatrixAB[1][k][j], (k % 2 == 0) ? ptrptrMatrixAB[0][i][np] : ptrptrMatrixAB[0][i][p]));
				C = Compute('*', C, ptrptrMatrixAB[0][i][k]);
				Chi = Compute('*', Chi, ptrptrMatrixAB[1][k][j]);

				if (k % 2 == 0)
					np = np + 2;
				else
					p = p + 2;
			}

			ResultMatrix[i][j] = Product - C - Chi;
		}
	}

	return;
}