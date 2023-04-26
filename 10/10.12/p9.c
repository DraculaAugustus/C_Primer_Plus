#include <stdio.h>

void copy_arr(int n, int m, double source[n][m], double target[n][m]);
void show(int n, int m, double arr[n][m]);

int main(void)
{
	double source[3][5] = {
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{6.6, 7.7, 8.8, 9.9, 10.10},
		{11.11, 12.12, 13.13, 14.14, 15.15}
	};
	double target[3][5];

	copy_arr(3, 5, source, target);
	show(3, 5, source);
	show(3, 5, target);

	return 0;
}

void copy_arr(int n, int m, double source[n][m], double target[n][m])
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
			target[i][j] = source[i][j];
	}
}

void show(int n, int m, double arr[n][m])
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
			printf("%g ", arr[i][j]);
		printf("\n");
	}
}
