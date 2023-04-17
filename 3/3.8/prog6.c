#include <stdio.h>

int main(void)
{
	float mass = 3.0e-23;
	float mass_quart = 950;
	float quarts;

	printf("Please enter the number of quart: ");
	scanf("%f", &quarts);
	printf("%f quarts of water contain %e of molecules.\n", quarts, quarts*mass_quart/mass);

	return 0;
}
