/*编写一个程序，要求输入名字和姓氏,
满足P85，a、b、c、d*/
#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	float f_tall;
	char c_nanme[20];

	printf("Please Enter you Name and Tall(cm):");
	scanf("%s", c_nanme);
	scanf("%f", &f_tall);
	printf("%s,you are %.3fm tall\n", c_nanme, f_tall/10);
	return 0;
}