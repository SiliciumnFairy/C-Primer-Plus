/*编写一个程序，要求输入名字和姓氏*/
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) 
{
	char c_firstname[20];
	char c_lastnanme[20];

	printf("Please Enter You Name:");
	scanf("%s %s", c_firstname,c_lastnanme);
	printf("Hello %s,%s\41", c_firstname, c_lastnanme);
	
}