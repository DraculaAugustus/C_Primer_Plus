#include <stdio.h>

int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';
	printf("ch = %c, i = %d, fl = %.2f\n", ch, i, fl);
	ch = ch + 1;
	i = fl + 2*ch;
	fl = 2.0*ch + i;
	printf("ch = %c, i = %d, fl = %.2f\n", ch, i, fl);

	ch = 5212205;
	printf("ch = %c\n" ,ch);	//5212205->取其二进制的低8位 0010 1101->0x2d-'-'

	return 0;
}
