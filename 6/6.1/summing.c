#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0;
    //int status;

    printf("Please enter an integer to be summed(q to quit):");
    //status = scanf("%ld", &num);

    while(scanf("%ld", &num))
    {
        sum = num + sum;
        printf("Please enter the next integer: ");
        //status = scanf("%ld", &num);
    }

    printf("Thoes integer sum to %ld\n", sum);

    return 0;
}