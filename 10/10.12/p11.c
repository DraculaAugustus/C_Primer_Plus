#include <stdio.h>

void show(int(*pt)[5], int row);
void array_add(int arr[][5], int row);

int main(void)
{
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    printf("arr: \n");
    show(arr, 3);

    array_add(arr, 3);
    printf("arr now is: \n");
    show(arr, 3);

    return 0;
}

void show(int (*pt)[5], int row)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%5d", pt[i][j]);
        printf("\n");
    }
}

void array_add(int arr[][5], int row)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < 5; j++)
            arr[i][j] *= 2;
    }
}