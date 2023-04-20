#include <stdio.h>

double calculate(double x, double y);

int main(void)
{
	double a, b;
	printf("Please enter two doubles:\n");
	scanf("%lf %lf", &a, &b);
	printf("1/((1/a + 1/b)/2) = %.4lf.\n", calculate(a, b));

	return 0;
}

double calculate(double x, double y)
{
	return 1/((1/x + 1/y)/2);
}
