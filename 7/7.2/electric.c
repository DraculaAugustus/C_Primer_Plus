#include <stdio.h>

#define RATE1   0.12589
#define RATE2   0.17901
#define RATE3   0.20917

#define BREAK1  360.0
#define BREAK2  680.0

#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1 + ((BREAK2-BREAK1)*RATE2))

int main(void)
{
    double kwh, bill;

    printf("Please enter the Kwh used:\n");
    scanf("%lf", &kwh);

    if (kwh <= BREAK1)
        bill = kwh * RATE1; // less than 360kwh
    else if(kwh <= BREAK2)
        bill = BASE1 + (kwh - 360) * RATE2; // less than 680 more than 360 kwh
    else
        bill = BASE2 + (kwh - 680) * RATE3; // more than 680kwh

    printf("The charge for %.1f kwh is %.2f\n", kwh, bill);

    return 0;
}