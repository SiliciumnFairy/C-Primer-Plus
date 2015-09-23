/*编写一个程序，要求输入年龄，
然后显示该年龄和多少秒。*/
#include<stdio.h>

int main(void)
{
	int i_la;
	double d_la;
	
	d_la = 3.156E7;

	scanf_s("%d", &i_la);

	printf("%.4e", i_la*d_la);
}
