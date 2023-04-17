#include <stdio.h>

int main(void)
{
	const float FEET_TO_CM = 30.48;
	const float INCH_TO_CM = 2.54;

	int feet;
	float cm, inches;
	printf("Enter a hieght in centimeters: ");
	scanf("%f", &cm);

	while(cm > 0)
	{
		feet = cm/FEET_TO_CM;
		inches = (cm-feet*FEET_TO_CM)/INCH_TO_CM;

		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
		printf("Enter a hieght in centimeters(<=0 to quit): ");
		scanf("%f", &cm);
	}
	printf("bye\n");

	return 0;
}
