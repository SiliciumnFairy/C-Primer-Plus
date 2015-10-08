/*编写一个程序,太长了不写了P86,6.*/
#include <stdio.h>
#include <float.h>
#pragma warning(disable:4996)


int main(void) 
{
	float f_a = 1.0 / 3.0;
	double d_a = 1.0 / 3.0;
	
	printf("float a=1.0/3.0:\n");
	printf("%.4f %.12f %.16f\n", f_a, f_a, f_a);

	printf("double a=1.0/3.0:\n");
	
	printf("%.4f %.12f %.16f\n", d_a, d_a, d_a);
	printf("%d %d\n", FLT_DIG, DBL_DIG);//使用%d！！


}