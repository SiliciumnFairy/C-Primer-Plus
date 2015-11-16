#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int  j, i[8];

	printf("Enter 8 numbers:");

	for (j = 0; j < 8; j++)
		scanf("%d", &i[j]);

	for (j = 7; j >= 0; j--)
		printf("%d", i[j]);


	return(0);
}
