/*编写一个程序，读入一个浮点数，
并分别以小数形式和指数形式打印*/
#include<stdio.h>

int main(void) 
{
	float d_la;

	scanf_s("%f",&d_la);

	printf("The input is %f or %e.",d_la,d_la);

}