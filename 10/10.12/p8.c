#include <stdio.h>

#define SIZE	7

void copy_ptr(double * target, double * source, int n);
void show_arr(double * arr, int n);

int main(void)
{
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];

	copy_ptr(target, source+2, 3);

	show_arr(target, 3);
	

	return 0;
}

void copy_ptr(double * target, double * source, int n)
{
	int i;
	for(i = 0; i < n; i++)
		*target++ = *source++;
}


void show_arr(double * arr, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%g ", *arr++);
	printf("\n");
}
