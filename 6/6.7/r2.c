#include <stdio.h>

int main(void)
{
    double value;

    for (value = 36; value > 0; value /= 2)
        printf("%lf", value);

    return 0;
}