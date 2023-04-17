#include <stdio.h>

int main(void)
{
	int age;
	printf("Please enter your age: ");
	scanf("%d", &age);
	printf("Your age = %le seconds\n", 3.156e7*age);

	return 0;
}
