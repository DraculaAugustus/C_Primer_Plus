#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	int upper_cnt = 0;
	int lower_cnt = 0;

	while((ch = getchar()) != EOF)
	{
		//if(ch >= 'a' && ch <= 'z')
		if(islower(ch))
			lower_cnt++;
		//if(ch >= 'A' && ch <= 'Z')
		if(isupper(ch))
			upper_cnt++;
	}

	printf("upper_cnt : %d, lower_cnt : %d\n", upper_cnt, lower_cnt);

	return 0;
}
