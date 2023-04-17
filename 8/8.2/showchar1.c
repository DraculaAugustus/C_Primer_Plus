#include <stdio.h>

void display(char cr, int lines, int width);

int main(void)
{
	char ch;
	int rows, cols;

	printf("Enter a character an two integers:\n");
	while((ch = getchar()) != '\n')
	{
		if(scanf("%d %d", &rows, &cols) != 2)
		{
			printf("Error input, ex(c 5 6)\n");
			printf("Enter a character and two integers:\n");
			continue;
		}
		display(ch, rows, cols);

		while(getchar() != '\n')
			continue;

		printf("Enter another charater and two integers:\n");
		printf("Enter a new line to quit.\n");
	}

	printf("Bye.\n");

	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;

	for(row = 1; row <= lines; row++)
	{
		for(col = 1; col <= width; col++)
			putchar(cr);
		printf("\n");
	}
}
