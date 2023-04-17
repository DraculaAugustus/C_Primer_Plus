#include <stdio.h>

int main(void)
{
	printf("Type int has a size of %lu\n", sizeof(int));
	printf("Type char has a size of %lu\n", sizeof(char));
	printf("Type long has a size of %lu\n", sizeof(long));
	printf("Type long long has a size of %lu\n", sizeof(long long));
	printf("Type float has a size of %lu\n", sizeof(float));
	printf("Type double has a size of %lu\n", sizeof(double));

	return 0;
}
