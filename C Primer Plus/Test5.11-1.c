/*±àÐ´Ò»¸ö³ÌÐòbalabalabala*/
#include <stdio.h>;
#define PH 60//1h=60min
#pragma warning(disable:4996)

int main(void) 
{
	float f_hour,f_sec;

	

	while (PH>0)
	{
		printf("please enter minutes:");
		scanf("%f", &f_sec);
		f_hour = f_sec / PH;
		printf("Minutes:%2.2f Hour:%2.3f\n\n", f_sec, f_hour);
		if (f_sec <= 0)
			break;
	}
	return 0;
}
