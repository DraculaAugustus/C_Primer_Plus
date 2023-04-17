#include <stdio.h>
#define MIN_PER_H	60

int main(void)
{
	int min, hour, left;

	printf("Convert minutes to hours and minutes!\n");
	printf("Please enter the number of minutes(<=0 to quit):\n");

	while(1)
	{
		scanf("%d", &min);
		hour = min/MIN_PER_H;
		left = min%MIN_PER_H;

		if(min > 0)
		{
			printf("The %d minutes is %d hours and %d minnutes!\n", min, hour, left);
			printf("Please enter again(<=0 to quit):\n");
		}
		else
			break;
	}

	return 0;
}
