#include <stdio.h>
#pragma warning(disable:4996)

int dian(int i, int j);
int main(void)
{
	int i, j;

	printf("Enter lower and upper integer limits:");

	while (scanf("%d %d", &i, &j) == 2, i != j)
	{
		printf("%d %d %d\n", i*i, j*j, dian(i, j));
		printf("Enter next set of limits:");
	}
	printf("Done\n");

	return(0);
}

int dian(int i, int j)
{
	return((i*i) + (j*j));
}