#include <stdio.h>

#define SIZE	5

//int max_choice(const int *pt, int n);
int max_choice(const int arr[], int n);

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int max;

	max = max_choice(arr, SIZE);
	printf("max = %d.\n", max);

	return 0;
}

//int max_choice(const int *pt, int n)
int max_choice(const int arr[], int n)
{
	int max;
	max = arr[0];	//max = *pt;
	//pt++;
	for(int i = 1; i < n; i++)
	{
		if(max < arr[i])	//if(max < *pt)
			max = arr[i];	//max = *pt;
		//pt++;
	}
	return max;
}
