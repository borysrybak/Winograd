#include "SystemHeaders.h"

void ReadMatrix(int **ptrptrMatrixAB)
{
	ReadA();
	ReadB();

	return;
}

void ReadA(void)
{
	int SizeOfA;
	SizeOfA = 0;

	printf("Podaj stopien Macierzy A: ");
	scanf_s("%d", &SizeOfA);

	int **ptrptrMatrixA;
	printf("Podaj kolejne elementy Macierzy A:\n");
	ptrptrMatrixA = ReserveA(SizeOfA);

	ptrptrMatrixAB[0] = ptrptrMatrixA;

	return;
}

void ReadB(void)
{
	int SizeOfB;
	SizeOfB = 0;

	printf("Podaj stopien Macierzy B: ");
	scanf_s("%d", &SizeOfB);

	int **ptrptrMatrixB;
	printf("Podaj kolejne elementy Macierzy B:\n");
	ptrptrMatrixB = ReserveB(SizeOfB);

	ptrptrMatrixAB[1] = ptrptrMatrixB;

	return;
}