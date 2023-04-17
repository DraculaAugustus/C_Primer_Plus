#include <stdio.h>

int main(void)
{
	char previous = '\0', present;
	int count = 0;
	
	printf("Please enter the string:\n");

	while((present = getchar()) != '#')
	{
		if(present == 'i' && previous =='e')
			count++;
		previous = present;
	}

	printf("ei has appeared %d times.\n", count);

	return 0;
}
