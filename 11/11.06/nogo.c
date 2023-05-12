#include <stdio.h>
#include <string.h>

#define ANSWER		"Grant"
#define SIZE		40

char * s_gets(char * str, int n);

int main(void)
{
	char try[SIZE];

	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
	while(try != ANSWER)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right!");

	return 0;
}

char * s_gets(char * str, int n)
{
	char * ret_val;
	int i = 0;

	ret_val = fgets(str, n, stdin);
	if(ret_val)
	{
		while(str[i] != '\n' && str[i] != '\0')
			i++;
		if(str[i] == '\n')
			str[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
