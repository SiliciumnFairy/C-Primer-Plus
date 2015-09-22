/*编写一个程序，创建一个名为toes的整数变量。
赋10给toes，计算toes的和与toes的平方*/
#include <stdio.h>

int main(void)
{
	int toes;
	int a, b;

	toes = 10;
	a = toes*toes;
	b = toes + toes;

	printf(" toes:%d\n Summation:%d\n Square:%d\n", toes, a, b);
}