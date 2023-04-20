#include <stdio.h>
#include <ctype.h>

int fun(char ch);

int main(void)
{
	int ch;
	int a;

	while((ch = getchar()) != EOF)
	{
		if(ch == '\n')
			continue;
		a = fun(ch);
		if(a == -1)
			printf("The '%c' you input is not an alpha.\n", ch);
		else
			printf("%c is number %d.\n", ch, a);
		//while((ch = getchar()) != '\n')
			//continue;
	}

	printf("Bye.\n");

	return 0;
}

int fun(char ch)
{
	int n;

	//if(ch == '\n')
		//continue;
	if(isalpha(ch))
	{
		ch = toupper(ch);
		n = ch - 64;
	}
	else
		n = -1;
	return n;
}
