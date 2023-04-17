#include <stdio.h>

int main(void)
{
	int count, sum, days;
	count = 0;
	sum = 0;

	printf("Please enter the number of days your work: ");
	scanf("%d", &days);

	while(count++ < days)
		sum = sum + count;
	printf("You earned $%d total!\n", sum);
	printf("Program Exit!\n");

	return 0;
}
