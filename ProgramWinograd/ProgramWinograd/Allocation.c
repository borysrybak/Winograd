#include "SystemHeaders.h"

int **ArrayAllocation(int SizeOfMatrix)
{
	int **Matrix = (int **)malloc(SizeOfMatrix * sizeof(int *));
	for (int i = 0; i < SizeOfMatrix; i++)
		Matrix[i] = (int *)malloc(SizeOfMatrix * sizeof(int));

	int value = 0;
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			Matrix[i][j] = 0;
		}
	}

	return Matrix;
}