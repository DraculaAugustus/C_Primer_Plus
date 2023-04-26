#include <stdio.h>

#define SIZE	5

void copy_arr(double target[], double source[], int n);
void copy_ptr(double * target, double * source, int n);
void copy_ptrs(double * target, double * source, double * n);
void show_arr(double * arr, int n);

int main(void)
{
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[SIZE], target2[SIZE], target3[SIZE];

	copy_arr(target1, source, SIZE);
	copy_ptr(target2, source, SIZE);
	copy_ptrs(target3, source, source+SIZE);

	show_arr(target1, SIZE);
	show_arr(target2, SIZE);
	show_arr(target3, SIZE);
	

	return 0;
}

void copy_arr(double target[], double source[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		target[i] = source[i];
}

void copy_ptr(double * target, double * source, int n)
{
	int i;
	for(i = 0; i < n; i++)
		*target++ = *source++;
}

void copy_ptrs(double * target, double * source, double * n)
{
	int i;
	for(i = 0; i < n - source; i++)
		//*target++ = *source++;	source++后会导致n-source发生变化
		*(target+i) = *(source + i);
}

void show_arr(double * arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%g ", *arr++);
	printf("\n");
}
