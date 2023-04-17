#include <stdio.h>

#define BASEHRS		40
#define OVERTIME	1.5
#define AMT1		300
#define AMT2		150
#define RATE1		0.15
#define RATE2		0.2
#define RATE3		0.25

int get_choice(void);

int main(void)
{
	double basepay;
	double hours;
	double gross;
	double taxes;
	double net;

	printf("*****************************************************************\n");
	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr				2) $9.33/hr\n");
	printf("3) $10.00/hr                             4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");

	switch(get_choice())
	{
		case 1:
			basepay = 8.75;
			break;
		case 2:
			basepay = 9.33;
			break;
		case 3:
			basepay = 10.00;
			break;
		case 4:
			basepay = 11.20;
			break;
		default:
			printf("quit\n");
			return 0;
	}

	printf("You have selected %.2lf.\n", basepay);
	printf("Enter the number of hours worked this week:");
	scanf("%lf", &hours);


	if(hours <= BASEHRS)
		gross = basepay * hours;
	else
		gross = basepay * BASEHRS + (hours -BASEHRS) * OVERTIME * basepay;
	
	if(gross <= AMT1)
		taxes = gross * RATE1;
	else if(gross <= AMT1 + AMT2)
		taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
	else
		taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;

	net = gross - taxes;

	printf("gross = $%.2f, taxes = $%.2f, net = $%.2f.\n", gross, taxes, net);
	
	return 0;
}

int get_choice(void)
{
	int num;
	scanf("%d", &num);

	while(num < 1 || num > 5)
	{
		printf("Please enter the right number.(ex:1~5)\n");
		scanf("%d", &num);
	}

	return num;
}
