#include <stdio.h>
#include <math.h>

int main(void)
{
    double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);

    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("Try again: ");
        scanf("%lf", &response);
    }

    printf("Close Enough!\n");

    return 0;
}