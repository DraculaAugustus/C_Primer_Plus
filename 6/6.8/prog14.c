#include <stdio.h>

int main(void)
{
    double first[8], second[8];

    printf("Enter the 8 data to the FIRST array: ");
    for (int i = 0; i < 8; i++)
        scanf("%lf", &first[i]);

    //单循环
    second[0] = first[0];
    for (int i = 1; i < 8; i++)
        second[i] = second[i-1] + first[i];
    /*  //嵌套循环
    for (int i = 0; i < 8; i = 0)
    {
        double sum = 0;
        for (int j = 0; j <= i; j++)
            sum += first[j];
        second[i] = sum;
    }
    */

    for (int i = 0; i < 8; i++)
        printf("%12lf ", first[i]);
    printf("\n");

    for (int i = 0; i < 8; i++)
        printf("%12lf ", second[i]);
    printf("\n");

    printf("Exit!\n");

    return 0;
}