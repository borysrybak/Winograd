#include "SystemHeaders.h"

void ViewMatrixResult(void)
{
	printf("\nA____\n");
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			printf("%2d", ptrptrMatrixAB[0][i][j]);
		}

		printf("\n");
	}

	printf("\nB____\n");
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			printf("%2d", ptrptrMatrixAB[1][i][j]);
		}

		printf("\n");
	}

	printf("\nC____\n");
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			printf("%2d", ResultMatrix[i][j]);
		}

		printf("\n");
	}

	return;
}

void ViewNumberOfSums(void)
{
	printf("\n_______________________");
	printf("\nLICZBA DODAWAN: ");
	printf("%d\n", NumberOfSums);

	return;
}

void ViewNumberOfProducts(void)
{
	printf("\n_______________________");
	printf("\nLICZBA MNOZEN: ");
	printf("%d\n", NumberOfProducts);

	return;
}

void ViewExecutionTime(void)
{
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("1. Wykonano w czasie %f\n\n", time_spent);

	return;
}