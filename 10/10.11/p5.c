#include <stdio.h>

#define SIZE	5

double max_min_d(const double *pt, int n);

int main(void)
{
	double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double value;

	value = max_min_d(arr, SIZE);
	printf("value = %g.\n", value);

	return 0;
}

double max_min_d(const double *pt, int n)
{
	double max, min;
	int i;
	max = *pt;
	min = *pt;
	pt++;
	for(i = 1; i < n; i++)
	{
		if(max < *pt)
			max = *pt;
		else if(min > *pt)
			min = *pt;
		pt++;
	}

	return max - min;
}
