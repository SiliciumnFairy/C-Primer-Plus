/*��дһ������Ҫ���������ֺ�����,
����P85��a��b��c��d*/
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) 
{
	float f_number;
	
	printf("Please Enter a floating number:");
	scanf("%f", &f_number);

	printf("The input is %.1f or %.1e",f_number,f_number);
	printf("The input is %+.3f or %.3e", f_number, f_number);
}