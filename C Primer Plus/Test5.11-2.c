/*±àÐ´Ò»¸ö³ÌÐòbalabalabala*/
#include <stdio.h>;
#pragma warning(disable:4996)

int main(void) 
{
	int i_ie;
	
	printf("Please enter an integer:");
	scanf("%d", &i_ie);
	
	while (i_ie)
	{
		i_ie = i_ie + 10000;
		printf("%d ", i_ie);
	}
	return 0;
}
