#include <stdio.h>

#define SIZE	12

void r_sort(double arr[], int n);

int main(void)
{
	double source[SIZE] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3};

	for(int i = 0; i < SIZE; i++)
		printf("%g	", source[i]);
	printf("\n");
	
	r_sort(source, SIZE);

	for(int i = 0; i < SIZE; i++)
		printf("%g	", source[i]);
	printf("\n");

	return 0;
}

void r_sort(double arr[], int n)
{
	double temp;
	for(int i = 0; i < n -1; i++)			//n个元素比较最多比较n-1轮
	{
		for(int j = 0; j < n - 1 -i; j++)	//n-1-i是因为每比较完i轮后，则下一轮比较就减少了i个元素
		{
			if(arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			/*	打印每一轮的比较结果
			for(int j = 0; j < SIZE; j++)
                		printf("%g	", arr[j]);
        		printf("\n");
			*/
		}
	}
}
