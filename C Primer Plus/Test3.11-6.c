/*编写一个程序，要求输入水的夸脱数，
然后显示这么多水中有多少水分子*/
#include<stdio.h>

int main(void)
{
	double f_la;

	scanf_s("%lf", &f_la);

	printf("%.3lf %.3e",f_la,f_la * (950 / 3.0E-23));
	return 0;
}