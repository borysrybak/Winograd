#include "FunctionPrototypes.h"

int** ReserveA(int SizeOfA)
{
	int **MatrixA = (int **)malloc(SizeOfA * sizeof(int *));
	for (int i = 0; i < SizeOfA; i++)
		MatrixA[i] = (int *)malloc(SizeOfA * sizeof(int));

	int value = 0;
	for (int i = 0; i < SizeOfA; i++)
	{
		for (int j = 0; j < SizeOfA; j++)
		{
			scanf_s("%d", &value);
			MatrixA[i][j] = value;
		}
	}

	return MatrixA;
}

int** ReserveB(int SizeOfB)
{
	int **MatrixB = (int **)malloc(SizeOfB * sizeof(int *));
	for (int i = 0; i < SizeOfB; i++)
		MatrixB[i] = (int *)malloc(SizeOfB * sizeof(int));

	int value = 0;
	for (int i = 0; i < SizeOfB; i++)
	{
		for (int j = 0; j < SizeOfB; j++)
		{
			scanf_s("%d", &value);
			MatrixB[i][j] = value;
		}
	}

	return MatrixB;
}