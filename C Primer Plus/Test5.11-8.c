#include <stdio.h>
#pragma warning(disable:4996)
const double CE = 1.8;
const double CL = 32.0;
const double Kv = 273.16;

double Temperastures(double la);


int main(void) 
{
	double mn;
	printf("");
	scanf("%lf", &mn);

	while ((mn > 0)&&(mn!='q')) 
	{
		printf("%.2f¡æ,", mn);
		Temperastures(mn);
		scanf("%lf", &mn);
	}
	return 0;
}

double Temperastures(double la) 
{
	printf(" %.2f¨H,%.2fT\n\n", CE*la + CL,la + Kv);
}



