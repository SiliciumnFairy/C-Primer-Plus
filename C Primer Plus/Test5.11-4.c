#include <stdio.h>
#pragma warning(disable:4996)

int main(void) 
{
	float f_cm;
	
	printf("Enter a height in centimeters:");
	scanf("%f", &f_cm);

	while (f_cm >= 0) 
	{
		printf("%2.2f cm = %.5f feet,%.5f inches\n\n\n\n", f_cm, f_cm*0.0328, f_cm*0.3937);
		printf("Enter a height in centimeters(<= 0 to quit):");
		scanf("%f", &f_cm);
	}
	printf("bye");
	return 0;
}