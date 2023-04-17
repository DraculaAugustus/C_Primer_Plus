#include <stdio.h>
#include <limits.h> //INT_MAX, INT_MIN
#include <float.h>

int main(void)
{
	printf("INT_MAX = %d, INT_MIN = %d\n", INT_MAX, INT_MIN);
	printf("FLT_MAX = %e, FLT_MIN = %e\n", FLT_MAX, FLT_MIN);

	int i = 2147483647;
	float a = 3.402823e38 * 100.0f;
	float b = -1.175494e-38 / 100.0f;

	printf("%d, %d, %d\n", i, i + 1, i + 2);

	printf("%e\n", a);
	printf("%e\n", b);

	return 0;
}
