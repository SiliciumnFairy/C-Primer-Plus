#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int count, sum;
	int la;

	count = 0;
	sum = 0;

	scanf("%d", &la);
	while (count++ < la)
	{
		sum = sum + count*count;
		printf("sum= %d\n", sum);
	}
	return 0;
}