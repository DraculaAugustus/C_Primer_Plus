#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	int x, y;
	char ch;

	printf("Please enter a character:\n");
	scanf("%c", &ch);
	printf("Please enter two integers:\n");
	scanf("%d %d", &y, &x);

	chline(ch , x, y);

	return 0;
}

void chline(char ch, int i, int j)
{
	int m, n;

	for(m = 0; m < j; m++)
	{
		for(n = 0; n < i; n++)
			printf("%c", ch);
		printf("\n");
	}
}
