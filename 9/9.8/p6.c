#include <stdio.h>

void ordering(double * x, double * y, double * z);

int main(void)
{
	double a, b, c;
	printf("Please enter three doubles:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	ordering(&a, &b, &c);
	printf("Now, a = %.2lf, b = %.2lf, c = %.2lf.\n", a, b, c);
	return 0;
}

void ordering(double * x, double * y, double * z)
{
	double tmp;

	if(*x > *z)
	{
		tmp = *x;
		*x = *z;
		*z = tmp;
	}
	if(*y > *z)
	{
		tmp = *y;
		*y = *z;
		*z = tmp;
	}
	if(*x > *y)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
	}
}
