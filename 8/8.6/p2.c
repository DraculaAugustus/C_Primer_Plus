#include <stdio.h>

int main(void)
{
	printf("Please enter the characters:\n");

	int input;
	int count = 0;

	while((input = getchar()) != EOF)
	{
		if(input == '\n')
			printf("\\n|%d", input);
		else if(input == '\t')
			printf("\\t|%d ", input);
		else if(input >= 0 && input < ' ')
			printf("^%c|%d ", input+64, input);
		else
			printf("%c|%d ", input, input);
		count++;
		if(count % 10 == 0)
			printf("\n");
	}
	
	printf("\n");

	return 0;
}
