#include <stdio.h>

#define DAY_PER_WEEK	7

int main(void)
{
	int days, weeks, left;
	printf("Convert days to weeks and days!\n");

	while(1)
	{
		printf("Please enter the number of days(<=0 to quit): ");
		scanf("%d", &days);
		
		weeks = days/DAY_PER_WEEK;
		left = days%DAY_PER_WEEK;

		if(days > 0)
			printf("The %d days is %d weeks and %d days!\n", days, weeks, left);
		else
			break;
	}
	printf("Program Exit!\n");

	return 0;
}
