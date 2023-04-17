#include <stdio.h>

double cube(double num);

int main(void)
{
	double num;
	printf("Please enter the number: ");
	scanf("%lf", &num);

	printf("The %.2lf cube is %.2lf\n", num, cube(num));

	return 0;
}

double cube(double num)
{
	return num*num*num;
}
