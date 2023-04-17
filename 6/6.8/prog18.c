#include <stdio.h>

int main(void)
{
    unsigned int friends = 5, weeks = 1;

    while (friends < 150)
    {
        printf("At %d weeks, Rabnud has %d friends\n", weeks, friends);
        friends = (friends - weeks) * 2;
        weeks++;
    }

    return 0;
}