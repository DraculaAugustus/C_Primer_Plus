#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609

int main(void)
{
	float range, oil;

	printf("Please enter the  range you traveled(in mile):\n");
	scanf("%f", &range);

	printf("Please enter the oil you spend(in gallon):\n");
	scanf("%f", &oil);

	printf("In Europe, your oil wear is %.1f M/G\n", range/oil);
	printf("In USA, your oil wear is %.1f L/100KM\n", (oil*GALLON_TO_LITRE*100) / (range*MILE_TO_KM));

	return 0;
}
