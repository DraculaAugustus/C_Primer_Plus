#include <stdio.h>

#define SIZE	5

//int max_choice(const int *pt, int n);
int max_index(const double arr[], int n);

int main(void)
{
	double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	int index;

	index = max_index(arr, SIZE);
	printf("max_index = %d.\n", index);

	return 0;
}

//int max_choice(const int *pt, int n)
int max_index(const double arr[], int n)
{
	int index, i, max;
	max = arr[0];
	index = 0;
	for(i = 1; i < n; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}
