#include "SystemHeaders.h"

void Start(void)
{
	srand((unsigned int)time(NULL));
	
	ReadMatrix();

	begin = clock();
	ComputeMatrix();
	end = clock();

	return;
}

void Stop(void)
{
	ViewMatrixResult();
	ViewNumberOfSums();
	ViewNumberOfProducts();
	ViewExecutionTime();


	printf(".\n.\n.\nSTOP\n");
	system("pause");

	return;
}