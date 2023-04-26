#include <stdio.h>

#define ROW	3
#define CLO	3

void copy_ptr(double * target, double * source, int n);
void show_arr(double * arr, int n);

int main(void)
{
	double source[ROW][CLO] = {
		{1.1, 2.2, 3.3},
		{4.4, 5.5, 6.6},
		{7.7, 8.8, 9.9}
	};
	double target[ROW][CLO];

	copy_ptr(target[0], source[0], ROW*CLO);

	show_arr(target[0], ROW*CLO);
	

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
