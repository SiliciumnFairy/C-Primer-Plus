/*blablablalbalbalballbala*/
#include <stdio.h>
#define CH 26

int main(void) 
{
	int i;
	char c[CH];

	for (i = 0; i < CH; i++)
	{
		c[i] = i + 'a';
		printf("%c ", c[i]);
	}
	return 0;
}