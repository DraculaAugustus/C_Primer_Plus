#include <stdio.h>

int isprime(int n);

int main(void)
{
	int num;
	int i;

	printf("Please enter a number:\n");
	scanf("%d", &num);

	for(i = 2; i <= num; i++)	// 打印小于或等于该数的素数
	{
		if(isprime(i))	// jude
			printf("%d\t", i);
	}

	printf("\n");

	return 0;
}

int isprime(int n)
{
	int i;

	for(i = 2; i < n; i++)
	{
		if( n % i == 0)
			return 0;
	}

	return 1;
}
