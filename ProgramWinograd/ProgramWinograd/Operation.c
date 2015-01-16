#include "FunctionPrototypes.h"

void ComputeMatrix(void)
{
	//Winograd();
	//NumberOfSum();
	//NumberOfProduct();

	return;
}

int Sum(int A, int B)
{
	return A + B;
}

int Product(int A, int B)
{
	return A * B;
}

fptrOperation Select(char OperrationCode)
{
	switch (OperrationCode)
	{
		case '+': return Sum;
		case '*': return Product;
	}
}