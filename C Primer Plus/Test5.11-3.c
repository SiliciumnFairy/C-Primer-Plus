#include <stdio.h>
#define PW 7//1week=7days
#pragma warning(disable:4996)

int main(void) 
{
	int i_day;
	printf("Please enter per day:");
	scanf("%d", &i_day);
	while (i_day>0)
	{
		printf("%d days are %d weeks %d,days\n\n\n", i_day, i_day / PW, i_day%PW);
		printf("Please enter per day again:");
		scanf("%d", &i_day);
	}
}

