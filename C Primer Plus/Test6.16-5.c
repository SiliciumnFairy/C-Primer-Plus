#include <stdio.h>
#pragma warning(disable:4996)

int power(int a);
int main(void)
{
	int i, j,k;
	printf("Please input the max and min:");
	scanf("%d %d", &i, &j);

	printf("%s %s %s\n", "num", "square", "cube");

	for (k = i; k > j; k--, i -= 1)
	{
		
		printf("%d %d %d",i, power(i), power(i)*i);
		printf("\n");
		
	}
	return(0);
}
int power(int a)
{
	return(a*a);
}