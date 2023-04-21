#include <stdio.h>

unsigned long Fibonacci(unsigned n);

int main(void)
{
	unsigned n;

	printf("Please enter the number of Fibonacci (q to quit): ");
	while(scanf("%u", &n) == 1)
	{
		printf("Number %u of Fibonacci is %lu.\n", n, Fibonacci(n));
		printf("Please enter the number of Fibonacci (q to quit): ");
	}

	printf("Quit!\n");
	
	return 0;
}

unsigned long Fibonacci(unsigned n)
{
	if(n <= 2)
		return 1;
	else
	{
		unsigned long tmp, n1, n2;
		int i;
		for(n1 = 1, n2 = 1, i = 3; i <= n; i++)
		{
			tmp = n1 + n2;
			n1 = n2;
			n2 = tmp;
		}
		return tmp;
	}
		//递归法:
		//return Fibonacci(n - 1) + Fibonacci(n - 2);
}
