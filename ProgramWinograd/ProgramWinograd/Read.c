#include "SystemHeaders.h"

void ReadMatrix(void)
{
	ReadMatrixSize();
	ReadMatrixAElements();
	ReadMatrixBElements();

	return;
}

void ReadMatrixSize(void)
{
	printf("Podaj stopien Macierzy A: ");
	scanf_s("%d", &SizeOfMatrix);

	return;
}

void ReadMatrixAElements(void)
{
	int **ptrptrMatrixA;
	printf("Podaj kolejne elementy Macierzy A:\n");
	ptrptrMatrixA = ArrayAllocation(SizeOfMatrix);

	InputValue = 0;
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			scanf_s("%d", &InputValue);
			ptrptrMatrixA[i][j] = InputValue;
		}
	}

	ptrptrMatrixAB[0] = ptrptrMatrixA;

	return;
}

void ReadMatrixBElements(void)
{
	int **ptrptrMatrixB;
	printf("Podaj kolejne elementy Macierzy B:\n");
	ptrptrMatrixB = ArrayAllocation(SizeOfMatrix);

	InputValue = 0;
	for (int i = 0; i < SizeOfMatrix; i++)
	{
		for (int j = 0; j < SizeOfMatrix; j++)
		{
			scanf_s("%d", &InputValue);
			ptrptrMatrixB[i][j] = InputValue;
		}
	}

	ptrptrMatrixAB[1] = ptrptrMatrixB;

	return;
}