#include<stdio.h>
#pragma warning(disable:4996)

float gaze(float la);

int main(void)
{
	float la;
	scanf("%f", &la);
	gaze(la);
	return 0;
	
}

float gaze(float la)
{
	float n;
	n= la*la;
	printf("%.2f", n);
}
