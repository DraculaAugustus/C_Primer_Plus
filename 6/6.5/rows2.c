#include <stdio.h>

//#define CHARS   10
//#define ROWS    10

int main(void)
{
    const int CHARS = 10;
    const int ROWS = 10;

    char ch;
    int row;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'+row; ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}