#include<stdio.h>

int main(void)
{
	int a = 1, b = 1;
	int aplus, bplus;

	aplus = a++;
	bplus = ++b;

	printf("a=%d aplus=%d b=%d bplus=%d\n", a, aplus, b, bplus);

	return 0;
}
