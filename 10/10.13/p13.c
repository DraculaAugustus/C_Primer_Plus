#include <stdio.h>

void input(double (*arr)[5], int n);
void show(const double (*arr)[5], int n);
double avarage(const double *pt, int n);
double total_avarage(const double (*pt)[5], int n);
double max(const double (*pt)[5], int n);

int main(void)
{
    int i;
    double arr[3][5];

    input(arr, 3);
    show(arr, 3);
    for (i = 0; i < 3; i++)
        printf("The avarage of array %d is %.2lf.\n", i, avarage(arr[i], 5));

    printf("The total avarage of array is %.2lf.\n", total_avarage(arr, 3));
    printf("The max value of array is %.2lf.\n", max(arr, 3));

    return 0;
}

void input(double (*arr)[5], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Please input number array %d: \n", i + 1);
        for (j = 0; j < 5; j++)
            scanf("%lf", &arr[i][j]);
    }
}

void show(const double (*arr)[5], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%8.2lf", arr[i][j]);
        printf("\n");
    }
}

double avarage(const double *pt, int n)
{
    int i;
    double total = 0;
    for (i = 0; i < n; i++)
        total += *pt++;
    return total / n;
}

double total_avarage(const double (*pt)[5], int n)
{
    int i, j;
    double total_all = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
            total_all += pt[i][j];
    }
    return total_all / (n * 5);
}

double max(const double (*pt)[5], int n)
{
    int i, j;
    double max;
    max = pt[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
            if(max < pt[i][j])
                max = pt[i][j];
    }
    return max;
}