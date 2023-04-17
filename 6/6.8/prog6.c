#include <stdio.h>

int main(void)
{
    int start, end;
    printf("Please enter the start number: ");
    scanf("%d", &start);
    printf("Please enter the end number: ");
    scanf("%d", &end);

    int square, cube;
    printf("%5s %10s %15s\n", "num", "square", "cube");
    for (int i = start; i <= end; i++)
    {
        square = i * i;
        cube = square * i;
        printf("%5d,%10d,%15d", i, square, cube);
        printf("\n");
    }

    return 0;
}