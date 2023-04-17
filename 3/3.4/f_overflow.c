#include <stdio.h>

int main(void)
{
	float toobig = 3.4E38 * 100.0f;
	printf("%f\n", toobig);

	return 0;
}
