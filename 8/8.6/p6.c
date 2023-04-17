#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
	char firstchar;

	printf("Please enter a string:\n");
	firstchar = get_first();
	putchar(firstchar);
	printf("\n");

	return 0;
}


char get_first(void)
{
	int input;

	while(isspace(input = getchar()));

	return input;
}
