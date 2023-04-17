#include <stdio.h>

#define SIZE    26

int main(void)
{
    char alpabet[SIZE];
    char ch = 'a';

    for (int i = 0; i < SIZE; i++)
        alpabet[i] = ch++;
    for (int i = 0; i < SIZE; i++)
        printf(" %c", alpabet[i]);
    printf("\n");

    return 0;
}