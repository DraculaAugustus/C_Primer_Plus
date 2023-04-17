#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int input;
	int words_count = 0;
	int characters_count = 0;
	bool word_flag = false;

	printf("Please enter the string:\n");

	while((input = getchar()) != EOF)
	{
		if(!isspace(input) && !ispunct(input))
		{
			characters_count++;
			if(!word_flag)
			{
				words_count++;
				word_flag = true;
			}
		}

		if(isspace(input) || ispunct(input))
		{
			word_flag = false;
		}
	}

	printf("%d characters are read.\n", characters_count);
	printf("%d words are read.\n", words_count);
	printf("The average number of each word are %.2f.\n", (float)characters_count/(float)words_count);

	return 0;
}
