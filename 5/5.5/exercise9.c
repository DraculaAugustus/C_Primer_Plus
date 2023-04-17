#include <stdio.h>

#define END 'g'

int main(int argc, char *argv[])
{
        char ch = 'a' - 1;
        while (ch++ < END)
                printf("%5c", ch);
        printf("\n");
        return 0;
}
