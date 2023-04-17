#include <stdio.h>

int main(void)
{
    double Chuckie = 100;
    int years = 0;

    while (Chuckie > 0)
    {
        Chuckie += Chuckie * 0.08;
        Chuckie -= 10;
        years++;
    }

    printf("After %d years, Chuckie has no money!\n", years);

    return 0;
}