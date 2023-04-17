#include <stdio.h>
#include <ctype.h>

void menu(void);
char get_choice(void);
char get_first(void);
float get_float(void);

int main(void)
{
	char choice;
	float num1;
	float num2;

	menu();

	while((choice = get_choice()) != 'q')
	{
		printf("Enter first number: ");
		num1 = get_float();
		printf("Enter second number: ");
		num2 = get_float();

		while(choice)
		{
			case 'a':
			case 's':
			case 'm':
			case 'd':
			default:
		}
	}

	printf("Bye!\n");

	return 0;
}

void menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add		s. subtract\n");
	printf("m. multiply	d. divide\n");
	printf("q. quit\n");
}

char get_choice(void)
{
	char ch;
	ch = get_first();

	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("Please response with a,s,m,d or q\n");
		ch  = get_first();
	}

	return ch;
}

char get_first(void)
{
	int input;

	while(isspace(input = getchar()));
	input = getchar();

	while(getchar() != '\n')
		continue;

	return input;
}
