#include <stdio.h>
#define TEN	10

int main(void)
{
	int integer, biger;
	
	printf("Please enter the number of integer: ");
	scanf("%d", &integer);
	biger = integer + TEN;

	while(integer <= biger)
		printf("%d	", integer++);
	printf("\n");

	return 0;
}
