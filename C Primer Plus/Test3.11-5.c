/*��дһ������Ҫ���������䣬
Ȼ����ʾ������Ͷ����롣*/
#include<stdio.h>

int main(void)
{
	int i_la;
	double d_la;
	
	d_la = 3.156E7;

	scanf_s("%d", &i_la);

	printf("%.4e", i_la*d_la);
}
