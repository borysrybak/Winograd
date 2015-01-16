#include "FunctionPrototypes.h"

void ReadMatrix(int **ptrptrMatrixAB)
{
	ptrptrMatrixAB[0] = ReadA();
	ptrptrMatrixAB[1] = ReadB();

	return;
}

int** ReadA(void)
{
	int SizeOfA;
	SizeOfA = 0;

	printf("Podaj stopien Macierzy A: ");
	scanf_s("%d", &SizeOfA);

	int **ptrptrMatrixA;
	printf("Podaj kolejne elementy Macierzy A:\n");
	ptrptrMatrixA = ReserveA(SizeOfA);

	return ptrptrMatrixA;
}

int** ReadB(void)
{
	int SizeOfB;
	SizeOfB = 0;

	printf("Podaj stopien Macierzy B: ");
	scanf_s("%d", &SizeOfB);

	int **ptrptrMatrixB;
	printf("Podaj kolejne elementy Macierzy B:\n");
	ptrptrMatrixB = ReserveB(SizeOfB);

	return ptrptrMatrixB;
}