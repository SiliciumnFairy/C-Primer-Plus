/*��дһ������Ҫ������ˮ�Ŀ�������
Ȼ����ʾ��ô��ˮ���ж���ˮ����*/
#include<stdio.h>

int main(void)
{
	double f_la;

	scanf_s("%lf", &f_la);

	printf("%.3lf %.3e",f_la,f_la * (950 / 3.0E-23));
	return 0;
}