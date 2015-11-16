#include <stdio.h>
#pragma warning(disable:4996)

float dian(float i, float j);
int main(void)
{
	float i, j;
	printf("Please input two floats:");

	while (scanf("%f %f", &i, &j) == 2)
	{
		printf("%2.3f\n", dian(i, j));
		printf("Please input two floats:");
	}
	printf("end\n");
	return 0;
}
float dian(float i, float j)
{
	return((i - j) / (i*j));
}