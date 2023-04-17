#include <stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperatures;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures:\n");
    printf("Enter q for quilt:\n");

    while (scanf("%f", &temperatures) == 1)
    {
        all_days++;
        if (temperatures < FREEZING)
            cold_days++;
    }

    if (all_days != 0)
        printf("%d days totals: %.1f%% are cold days\n", all_days, 
            100 * (float)cold_days / all_days);

    if (all_days == 0)
        printf("No data entered.\n");

    return 0;
}