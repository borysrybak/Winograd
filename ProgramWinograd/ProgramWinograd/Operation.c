#include "SystemHeaders.h"

void ComputeMatrix(void)
{
	//ComputeMatrixSimpleMethod();
	ComputeMatrixWinogradMethod();

	return;
}

int ComputeMatrixSum(int A, int B)
{
	NumberOfSums++;

	return A + B;
}

int ComputeMatrixProduct(int A, int B)
{
	NumberOfProducts++;

	return A * B;
}

fptrOperation Select(char OperationCode)
{
	switch (OperationCode)
	{
	case '+': return ComputeMatrixSum;
	case '*': return ComputeMatrixProduct;
	}
}

int Compute(char OperationCode, int A, int B)
{
	fptrOperation Operation = Select(OperationCode);

	return Operation(A, B);
}