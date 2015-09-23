/*编写一个程序，要求输入水的夸脱数，
然后显示这么多水中有多少水分子*/
#include<stdio.h>

int main(void) 
{
	float f_la;
	printf("Please enter you height:");
	scanf_s("%f", &f_la);

	printf("You height is:%.3f\n", f_la*0.39);
}