#include <stdio.h>

void One_three(void);
void Two(void);
int main(void) 
{
	printf("Starting now:\n");
	One_three();
	printf("done!\n");
	
	return 0;
}
void One_three()
{
	printf("One\n");
	Two();
	printf("three\n");
	
	return 0;
}
void Two()
{
	printf("Two\n");
	
	return 0;
}