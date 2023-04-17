#include <stdio.h>

void answer(void);

//void answer(void)
//{
//	printf("Dad, I am watching TV, What's up?\n");
//}

int main(void)
{
	printf("Rick, what are you doing?\n"); // Dad said

	answer();            	// son answer

	printf("OK, Come here, I need your help!\n");
	
	return 0;
}

void answer(void)
{
	printf("Dad, I am watching TV, What's up?\n");
}


