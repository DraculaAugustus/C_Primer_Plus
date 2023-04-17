#include <stdio.h>

int main(void)
{
    double Daphne = 100, Deirdre = 100;
    int years = 0;

    while (Daphne >= Deirdre)
    {
        Daphne += 100 * 0.1;
        Deirdre += Deirdre * 0.05;
        years++;
    }

    printf("After %d years, Daphne has less than Deirdre.\n", years);
    printf("Daphne = %lf, Deirdre = %lf\n", Daphne, Deirdre);

    return 0;
}