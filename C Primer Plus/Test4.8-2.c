/*编写一个程序，要求输入名字和姓氏,
满足P85，a、b、c、d*/
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char c_firstname[20];
	int width;

	printf("Please Enter You Name:");
	scanf("%s", c_firstname);
	printf("Hello \"%s\"\41\n", c_firstname);
	printf("Hello %-20s\41\n", c_firstname);
	
	width = strlen(c_firstname)+3;//！错误的部分！
	printf("Hello %*s\41\n",width, c_firstname);
}