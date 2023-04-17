#include <stdio.h>

int main(void)
{
    int arr[8];

    printf("Enter the 8 integer data (seperate by blank):\n");
    for (int i = 0; i < 8; i++)
        scanf("%d", &arr[i]);

    printf("Ok, the reverse data is:\n");
    for (int j = 0; j <= 7; j++)
        printf("%d ", arr[7 - j]);

    printf("\n");

    return 0;
}