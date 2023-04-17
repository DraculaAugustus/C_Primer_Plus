#include <stdio.h>

void Temperatures(double num);

int main(void)
{
	double fahrenheit;

	printf("This program convert fahrenheit to celsius and kelvin.\n");
	printf("Enter a fahrenheit to start : ");

	while(scanf("%lf", &fahrenheit) == 1)
	{
		Temperatures(fahrenheit);
		printf("Enter next fahrenheit! ( q to quilt): ");
	}

	printf("Done!\n");

	return 0;
}

void Temperatures(double fahrenheit)
{
	const double F_TO_C = 32;
	const double C_TO_K = 273.16;
	double celsius, kelvin;

	celsius = 5.0 / 9.0 * (fahrenheit-F_TO_C);
	kelvin = celsius + C_TO_K;

	printf("%.2lf fahrenteit, equal %.2lf celsius, and %.2lf kelvin\n", fahrenheit, celsius, kelvin);
}


