#include <stdio.h>

int main(void)
{
	int num;
	int n_even = 0;
	int n_odd = 0;
	double sum_even = 0.0;
	double sum_odd = 0.0;

	while(1)
	{
		scanf("%d", &num);
		if(num == 0)
			break;
		if(num % 2 == 0)
		{
			n_even++;
			sum_even += num;
		}
		else
		{
			n_odd++;
			sum_odd += num;
		}
	}

	printf("num of even: %d, average of even: %.2f.\n", n_even, sum_even / n_even);

	printf("num of odd: %d, average of odd: %.2f.\n", n_odd, sum_odd / n_odd);

	return 0;
}
