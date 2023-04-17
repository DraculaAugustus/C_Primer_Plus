#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch_arr[255];

    scanf("%s", ch_arr);

    const int SIZE = strlen(ch_arr);
    //printf("%d\n", SIZE);

    for (int i = SIZE; i >= 0; i--)
        printf("%c", ch_arr[i]);
    printf("\n");

    return 0;
}