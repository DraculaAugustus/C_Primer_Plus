#include <stdio.h>

float calc(float num1, float num2);

int main(void)
{
    float num1, num2;
    calc(num1, num2);
    printf("Exit!\n");

    return 0;
}

float calc(float num1, float num2)
{
    printf("Please enter two numbers: ");
    while (scanf("%f %f", &num1, &num2) == 2)
    {
        float result;
        result = (num1 - num2) / (num1 * num2);
        printf("%.2f - %.2f / %.2f * %.2f = %.2f\n", num1, num2, num1, num2, result);
        printf("Please enter two numbers again: ");
    }
}