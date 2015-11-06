#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	float i, j;
	printf("Please input two floats:");

	while (scanf("%f %f",&i,&j)==2)
	{
		printf("%2.2f\n", (i - j) / (i*j));
		printf("Please input two floats:");
	}
	printf("end\n");
	return 0;
}