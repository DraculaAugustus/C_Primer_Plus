#include <stdio.h>

#define SINGLE          17850
#define HOLDER           23900
#define MARRY           29750
#define DIVORCE         14875
#define BASE_TAX        0.15
#define EXTRA_TAX	0.28

int main(void)
{
	char type;
	float salary;
	float tax, salary_taxed;

	do
	{
		printf("Please select tax type. There are for type:\n");
		printf("1)Single  2)House holder  3)Married  4)Divorced  5)Quit:");
		while((type = getchar()) == '\n')
			continue;

		switch(type)
		{
			case '1':
				printf("Enter your salary: ");
				scanf("%f", &salary);
				if(salary <= SINGLE)
				{
					tax = salary*BASE_TAX;
					salary_taxed = salary - tax;
				}
				else
				{
					tax = SINGLE*BASE_TAX - (salary - SINGLE)*EXTRA_TAX;
					salary_taxed = salary - tax;
				}
				printf("Hi, your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, salary_taxed);
				break;
			case '2':
                                printf("Enter your salary: ");
                                scanf("%f", &salary);
                                if(salary <= HOLDER)
                                {
                                        tax = salary*BASE_TAX;
                                        salary_taxed = salary - tax;
                                }
                                else
                                {
                                        tax = HOLDER*BASE_TAX - (salary - HOLDER)*EXTRA_TAX;
                                        salary_taxed = salary - tax;
                                }
				printf("Hi, your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, salary_taxed);
				break;
			case '3':
                                printf("Enter your salary: ");
                                scanf("%f", &salary);
                                if(salary <= MARRY)
                                {
                                        tax = salary*BASE_TAX;
                                        salary_taxed = salary - tax;
                                }
                                else
                                {
                                        tax = MARRY*BASE_TAX - (salary - MARRY)*EXTRA_TAX;
                                        salary_taxed = salary - tax;
                                }
				printf("Hi, your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, salary_taxed);
				break;
			case '4':
                                printf("Enter your salary: ");
                                scanf("%f", &salary);
                                if(salary <= DIVORCE)
                                {
                                        tax = salary*BASE_TAX;
                                        salary_taxed = salary - tax;
                                }
                                else
                                {
                                        tax = DIVORCE*BASE_TAX - (salary - DIVORCE)*EXTRA_TAX;
                                        salary_taxed = salary - tax;
                                }
				printf("Hi, your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, salary_taxed);
				break;
			case '5':
				break;
			default:
				printf("Wrong type. Please retry.\n");
		}
		printf("\n");
	}while(type != '5');

	printf("Done\n");

	return 0;
}

// 程序缺陷：1).用户无法选择自主退出	2).键入1~4以外的字符后，并非退出程序或重新选择，而是继续输入工资
/*
#define SINGLE		17850
#define HOST		23900
#define MARRY		29750
#define DIVORCE		14875
#define RATE1		0.15
#define RATE2		0.28

int main(void)
{
	char ch;
	double type_tax;
	double salary;
	double tax;

	while(1)
	{
		printf("****************************************************\n");
		printf("*      Select the type of marriage:                *\n");
		printf("* 	1) SINGLE	2) HOST            	   *\n");
		printf("*	3) MARRY	4) DIVORCE 		   *\n");
		printf("****************************************************\n");

		while((ch = getchar()) == '\n')
			continue;

		switch(ch)
		{
			case '1':
				type_tax = SINGLE;
				break;
			case '2':
				type_tax = HOST;
				break;
			case '3':
				type_tax = MARRY;
				break;
			case '4':
				type_tax = DIVORCE;
				break;
			case 'q':
				printf("quit.\n");
				break;
			default:
				printf("Input error.\n");
		}

		printf("You have selected %c.\n", ch);
                printf("Please enter your salary:\n");
                scanf("%lf", &salary);

                if(salary <= type_tax)
                        tax = salary * RATE1;
                else
                        tax = type_tax * RATE1 + (salary - type_tax) * RATE2;

                printf("tax = %.2lf.\n", tax);
                printf("\n");

	}

	return 0;
}
*/
