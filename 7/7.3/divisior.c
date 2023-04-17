#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num;
    unsigned long div;
    //unsigned int isPrime;
    bool isPrime;

    printf("Please enter an integer for analysis:\n");
    printf("Enter q to quit.\n");

    while(scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if(num % div == 0)
            {
                if((div*div) != num)
                    printf("%lu is divisable by %lu and %lu.\n", num, div, num / div);
                else
                    printf("%lu is divisable by %lu.\n", num, div);
                isPrime = false;    // 该数不是素数
            }
        }
        if (isPrime)
            printf("%lu is Prime.\n", num);
        printf("Please enter an interger for analysis:\n");
        printf("Enter q to quit.\n");
    }
}