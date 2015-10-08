/*编写一个程序,首先要求输入名字,然后输入姓氏,
在下一行打印每个名字中字母的个数.*/
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) 
{
	char f_firstmane[20], f_lastname[20];
	int i_a, i_b;

	printf("Please Enter You Name:");
	scanf("%s %s", f_firstmane, f_lastname);
	
	i_a = strlen(f_firstmane);
	i_b = strlen(f_lastname);

	printf("%s %s\n",f_firstmane, f_lastname);
	printf("%*d %*d\n", i_a, strlen(f_firstmane), i_b, strlen(f_lastname));
	printf("%s %s\n", f_firstmane, f_lastname);
	printf("%-*d %-*d\n", i_a, strlen(f_firstmane), i_b, strlen(f_lastname));
}