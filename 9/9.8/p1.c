#include <stdio.h>

double min(double x, double y);

int main(void)
{
	double a, b;
	printf("Please enter two doubles.\n");
	scanf("%lf %lf", &a, &b);

	printf("The smaller is %.2lf.\n", min(a, b));

	return 0;
}

double min(double x, double y)
{
	return x < y ? x : y;
}
