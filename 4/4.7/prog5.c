#include <stdio.h>

int main(void)
{
	float speed, size, time;

	printf("Please input the net speed(Mbits/s):\n");
	scanf("%f", &speed);
	printf("Please input the file size(MB):\n");
	scanf("%f", &size);

	time = size*8/speed;

	printf("At %.2f Mbits/s, a file of %.2f MB download in %.2f seconds.\n",
			speed, size, time);

	return 0;
}
