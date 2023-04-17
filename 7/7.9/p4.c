#include <stdio.h>

int main(void)
{
	char ch;
	int n = 0;

	printf("Please enter the string:\n");
	while((ch = getchar()) != '#')
	{
		if(ch == '.')
		{
			putchar('!');
			n++;
		}
		else if(ch == '!')
		{
			putchar('!');
			putchar('!');
			n++;
		}
		else
			putchar(ch);	
	}

	printf("The number of replace are %d\n", n);

	return 0;
}
