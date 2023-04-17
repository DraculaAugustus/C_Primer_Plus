#include <stdio.h>

int main(void)
{
    int lower, upper;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);

    while(lower < upper)
    {
        int sum = 0;
        for (int i = lower; i <= upper; i++)
            sum += i * i;
        
        printf("The sum of the squares form %d to %d is %d\n", lower * lower, upper * upper, sum);
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &lower, &upper);
    }

    printf("Done!\n");

    return 0;
}