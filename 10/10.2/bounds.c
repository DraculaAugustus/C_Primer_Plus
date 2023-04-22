//bounds.c -- 数组下标越界
#include <stdio.h>

#define SIZE	4

int main(void)
{
	int values1 = 44;
	int arr[SIZE];
	int values2 = 88;
	int i;

	printf("values1 = %d, values2 = %d.\n", values1, values2);
	for(i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;

	for(i = -1; i < 7; i++)
		printf("%2d	%d\n", i, arr[i]);

	printf("values1 = %d, values2 = %d.\n", values1, values2);
	printf("address of arr[-1]: %p\n", &arr[-1]);
	printf("address of arr[4]: %p\n", &arr[4]);
	printf("address of values1: %p\n", &values1);
	printf("address of values2: %p\n", &values2);

	return 0;
}
