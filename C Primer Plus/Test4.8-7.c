/*编写一个程序,太长了不写了P86,7.*/
#include <stdio.h>
#include <float.h>
#define KM 1.609
#pragma warning(disable:4996)


int main(void) 
{
	const float L = 3.785;
	float f_mi, f_us_gal;
	
	rintf("Please input miles and gallons:");
	scanf("%f %f", &f_mi, &f_us_gal);
	printf("Miles per gallon: %.1f\n", f_mi /f_us_gal);
	printf("Litres per 100kilometre:%1.f\n", (f_us_gal*L) / (f_mi*KM) * 100);
	return 0;
}