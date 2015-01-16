#include "SystemHeaders.h"

void Start(void)
{
	ReadMatrix();
	ComputeMatrix();

	return;
}

void Stop(void)
{
	printf(".\n.\n.\nSTOP\n");
	system("pause");

	return;
}