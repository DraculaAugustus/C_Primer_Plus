#include <stdio.h>

int main(void)
{
	unsigned int sec_num, fir_num, result;

	printf("This program comutes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%u", &sec_num);
	printf("Now enter the first operand: ");
	scanf("%u", &fir_num);

	while(fir_num > 0)
	{
		result = fir_num % sec_num;
		printf("%u %% %u is %u\n", fir_num, sec_num, result);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%u", &fir_num);
	}

	printf("Done\n");

	return 0;
}
