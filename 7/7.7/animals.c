#include <stdio.h>
//#include <ctype.h>

int main(void)
{
    char ch;
    printf("Give me a lettle of the alphabet, and I will give you a animals.\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        //ch = tolower(ch);
        switch (ch)
        {
            case 'A':
            case 'a':
            printf("ant.\n");
            break;
            case 'B':
            case 'b':
            printf("bee.\n");
            break;
            case 'C':
            case 'c':
            printf("cat.\n");
            break;
            case 'D':
            case 'd':
            printf("dog.\n");
            break;
            default:
            printf("I love all animals.\n");
            break;
        }
        while (getchar() != '\n')
            continue;
    }

    return 0;
}