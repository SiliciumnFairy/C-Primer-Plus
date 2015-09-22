/*编写一个程序，把您的年龄转化成天数并显示二者的值。*/
#include <stdio.h>
#define Years 365 //一年365天


int main(void) 
{
	int age;
	int days;

	age = 18;
	days = age*Years;
	printf(" age:%d\n days:%d\n", age, days);
	return 0;
}