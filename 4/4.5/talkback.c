#include <stdio.h>

int main(void)
{
    float weight;
    char name[40];

    printf("Hi, What's your name:\n");
    scanf("%s", name);
    printf("Please enter your weight:\n");
    scanf("%f", &weight);

    printf("%s, your weight is %.2f kg\n", name, weight);

    return 0;
}