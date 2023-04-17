#include <stdio.h>

int main(void)
{
    int ascii;
    printf("Please enter an ASCII code: ");
    scanf("%d", &ascii);

    printf("%c is the ASCII code for %d.\n", ascii, ascii);

    return 0;
}
