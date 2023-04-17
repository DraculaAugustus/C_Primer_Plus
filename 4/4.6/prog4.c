#include <stdio.h>

int main(void)
{
    char name[40];
    float height;

    printf("Please enter your name:\n");
    scanf("%s", name);
    printf("Hi %s, how tall you are(inch):\n", name);
    scanf("%f", &height);

    printf("%s, you are %.3f feet tall.\n", name, height/12);

    return 0;
}