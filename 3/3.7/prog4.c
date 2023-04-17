#include <stdio.h>

int main(void)
{
	float num;
	printf("Please enter a float number: ");
	scanf("%f", &num);
	printf("float style: %f, exp style: %e\n", num, num);

	return 0;
}
