#include <stdio.h>

int main(void)
{
	int * pt1;
	pt1 = (int [2]) {10,20};

	printf("*pt1 = %d, pt1[1] = %d.\n", *pt1, pt1[1]);

	return 0;
}
