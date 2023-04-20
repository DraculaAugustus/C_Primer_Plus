#include <stdio.h>

void chline(char ch, int column, int row);

int main(void)
{
	int x, y;
	char ch;

	printf("Please enter a character:\n");
	scanf("%c", &ch);
	printf("Please enter the column and the row:\n");
	scanf("%d %d", &x, &y);

	chline(ch, x, y);

	return 0;
}

void chline(char ch, int column, int row)
{
	int x, y;

	for(y = 0; y < row; y++)
	{
		for(x = 0; x < column; x++)
			printf("%c", ch);
		printf("\n");
	}
}
