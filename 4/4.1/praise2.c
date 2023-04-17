#include <stdio.h>
#include <string.h>
#define PRAISE "what a good name!"	//\0

int main(void)
{
	const int MONTH = 12;

	char name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s\n", name);

	printf("Your name of %ld letters occupies %lu memory\n",
			strlen(name), sizeof(name));

	printf("The PRAISE has %ld letters\n", strlen(PRAISE));	//strlen("what a super marvelous name!")
	printf("The PRAISE occupies %lu memory\n", sizeof(PRAISE));

	return 0;
}
