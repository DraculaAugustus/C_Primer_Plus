#include <stdio.h>

void large_of(double * u, double * v);

int main(void)
{
	double x, y;
	printf("Please enter two doubles:\n");
	scanf("%lf %lf", &x, &y);
	large_of(&x, &y);
	printf("The result is : x = %.4lf, y = %.4lf.\n", x, y);

	return 0;
}

void large_of(double * u, double * v)
{
	*u = *v = *u > *v ? *u : *v;
}
