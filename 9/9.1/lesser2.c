#include <stdio.h>

int imin(int n, int m);

int main(void)
{
	int evil1, evil2, min;

	printf("Please enter a pair of integers(q to quit):\n");

	while(scanf("%d %d", &evil1, &evil2) == 2)
	{
		min = imin(evil1, evil2);
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, min);
		printf("Please enter a pair of integers(q to quit):\n");
	}

	return 0;
}

int imin(int n, int m)
{
	return (n < m)? n:m;
}
