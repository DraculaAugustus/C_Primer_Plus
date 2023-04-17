#include <stdio.h>

int main(void)
{
    /*
    int length;
    double sum = 0.0;

    printf("Enter the limit length:\n");
    scanf("%d", &length);

    while(length > 0)
    {
        sum = 0.0;
        for (int i = 1; i <= length; i++)
            sum += 1.0 / i;
        printf("The sum for 1.0 +...+ 1.0/%d.0 is %lf\n", length, sum);

        sum = 0.0;
        for (int i = 1; i <= length; i++)
        {
            if (i % 2 == 0)
                sum -= 1.0 / i;
            else
                sum += 1.0 / i;
        }
        printf("The sum for 1.0 -...+ 1.0/%d.0 is %lf\n", length, sum);

        sum = 0.0;
        for (int i = 1; i <= length; i++)
        {
            if (i % 2 != 0)
                sum += 2 * 1.0 / i;
        }
        printf("The sum for 1.0 + 1.0 +...+ 2.0/%d is %lf\n", length, sum);

        printf("Enter the limit length:\n");
        scanf("%d", &length);
    }

    printf("Done!\n");
    return 0;
    */

    double i;
    int times;

    printf("Please enter the times: ");
    scanf("%d", &times);

    int sign = 1;   //正数为1，负数为2，默认为正数
    while(times > 0)
    {
        double sum1 = 0, sum2 = 0, sum3 = 0;
        
        for (i = 1.0; i <= times; i++, sign = 0 -sign)
        {
            sum1 += 1.0 / i;
            sum2 += 1.0 / i * sign;
        }

        sum3 = sum1 + sum2;

        printf("sum1 = %lf\n", sum1);
        printf("sum2 = %lf\n", sum2);
        printf("sum3 = %lf\n", sum3);

        printf("Please enter the times again: ");
        scanf("%d", &times);
    }

    printf("Exit\n");

    return 0;
}