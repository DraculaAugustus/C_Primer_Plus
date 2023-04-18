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

		while(num2 == 0 && choice == 'd')
		{
			printf("Enter a number other than 0: ");
			num2 = get_float();
		}

		switch(choice)
		{
			case 'a':
				printf("%g + %g = %g\n", num1, num2, num1+num2);
				break;
			case 's':
				printf("%g - %g = %g\n", num1, num2, num1-num2);
				break;
			case 'm':
				printf("%g * %g = %g\n", num1, num2, num1*num2);
				break;
			case 'd':
				printf("%g / %g = %g\n", num1, num2, num1/num2);
				break;
			default:
				break;
		}

		menu();
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

	while(getchar() != '\n')
		continue;

	return input;
}

float get_float(void)
{
	float num;
	char ch;

	while(scanf("%f", &num) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an number.\n");
		printf("Please enter a float number as 2.4, -1.3e3 or 3: ");
	}

	return num;
}
