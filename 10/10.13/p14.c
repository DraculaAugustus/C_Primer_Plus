#include <stdio.h>

void input(int row, int clo,double arr[row][clo]);
void show(int row, int clo, const double arr[row][clo]);
double avarage(const int clo, const double arr[clo]);
double total_avarage(int row, int clo, const double arr[row][clo]);
double max(int row, int clo, const double arr[row][clo]);

int main(void)
{
    int i;
    double arr[3][5];

    input(3, 5, arr);
    show(3, 5, arr);
    for (i = 0; i < 3; i++)
        printf("The avarage of array %d is %.2lf.\n", i, avarage(5, arr[i]));

    printf("The total avarage of array is %.2lf.\n", total_avarage(3, 5, arr));
    printf("The max value of array is %.2lf.\n", max(3, 5, arr));

    return 0;
}

void input(int row, int clo,double arr[row][clo])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        printf("Please input number array %d: \n", i + 1);
        for (j = 0; j < clo; j++)
            scanf("%lf", &arr[i][j]);
    }
}

void show(int row, int clo, const double arr[row][clo])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clo; j++)
            printf("%8.2lf", arr[i][j]);
        printf("\n");
    }
}

double avarage(const int clo, const double arr[clo])
{
    int i;
    double total = 0;
    for (i = 0; i < clo; i++)
        total += arr[i];
    return total / clo;
}

double total_avarage(int row, int clo, const double arr[row][clo])
{
    int i, j;
    double total_all = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clo; j++)
            total_all += arr[i][j];
    }
    return total_all / (row * clo);
}

double max(int row, int clo, const double arr[row][clo])
{
    int i, j;
    double max;
    max = arr[0][0];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < clo; j++)
            if(max < arr[i][j])
                max = arr[i][j];
    }
    return max;
}