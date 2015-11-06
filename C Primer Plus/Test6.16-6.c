#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i;
	int strlen();
	char ch[20];
	
	printf("Please input a word:");
	scanf("%s", ch);
	
	for (i = strlen(ch)-1; i >= 0;i--)//-1È¥³ý\0¿Õ·û
	{
		printf("%c\n", ch[i]);
	}
	return(0);
}