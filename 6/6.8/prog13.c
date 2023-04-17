#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[8];
    /*
    arr[0] = 2;

    for (int i = 1; i < 8; i++)
        arr[i] = arr[i - 1] * 2;
    */

    for (int i = 0; i < 8; i++)
        arr[i] = pow(2, i + 1);

    int i = 0;
    do
    {
        printf("arr[%d] = %d  ", i, arr[i]);
        i++;
    } while (i < 8);
    
    printf("\n");

    return 0;
}