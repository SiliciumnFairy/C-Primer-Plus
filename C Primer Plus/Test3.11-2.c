/*编写一个程序，要求输入一个
ASCII码值，然后输出相应字符*/
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	
	char ch_la;
	int i_la;

	scanf("%d", &i_la);
	ch_la = i_la;

	printf("%c\n",ch_la);
	return 0;
}