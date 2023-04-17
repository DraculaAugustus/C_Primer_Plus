#include <stdio.h>

void my_function1(void);
void my_function2(void);

int main(void)
{
	my_function1();
	my_function2();

	return 0;
}

void my_function1(void)
{
	printf("For he is a jolly good fellow!\n");
	printf("For he is a jolly good fellow!\n");
	printf("For he is a jolly good fellow!\n");
}

void my_function2(void)
{
	printf("Which nobody can deny!\n");
}
