/*��дһ������,����Ҫ����������,Ȼ����������,
����һ�д�ӡÿ����������ĸ�ĸ���.*/
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) 
{
	char f_firstmane[20], f_lastname[20];
	int i_a, i_b;

	printf("Please Enter You Name:");
	scanf("%s %s", f_firstmane, f_lastname);
	
	i_a = strlen(f_firstmane);
	i_b = strlen(f_lastname);

	printf("%s %s\n",f_firstmane, f_lastname);
	printf("%*d %*d\n", i_a, strlen(f_firstmane), i_b, strlen(f_lastname));
	printf("%s %s\n", f_firstmane, f_lastname);
	printf("%-*d %-*d\n", i_a, strlen(f_firstmane), i_b, strlen(f_lastname));
}