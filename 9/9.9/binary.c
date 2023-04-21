#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
	unsigned long number;

	printf("Enter an integer(q to quit):\n");
	while(scanf("%lu", &number) == 1)
	{
		printf("Binary equvalent: ");
		to_binary(number);
		printf("\n");
		printf("Enter an integer(q to quit):\n");
	}

	printf("Bye.\n");

	return 0;
}

void to_binary(unsigned long n)
{
	int r;

	r = n % 2;
	if(n >= 2)
		to_binary(n/2);	//二进制取下一位
	putchar(r == 0 ? '0' : '1');	//or putchar('0' + r);
}
