#include <stdio.h>

int main(void)
{
	int guess = 50;
	int high = 100;
	int low = 1;

	char response;

	printf("Pick an integer from 1 to 100. I will try to guess.\n");
	printf("Respond with 'y' if my guess is right and with 'h' if it is high or 'l' if it is low.\n");
	printf("Is your number %d?\n", guess);

	while((response = getchar()) != 'y')
	{
		if(response == 'h')
			high = guess - 1;
		else if(response == 'l')
			low = guess + 1;
		else
			printf("Sorry, I understand only 'y', 'h', 'l'.\n");

		guess = (high + low) / 2;

		printf("Is it %d?\n", guess);
		while(getchar() != '\n')
			continue;
	}

	printf("I knew I could do it!\n");

	return 0;
}
