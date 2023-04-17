#include <stdio.h>

int main(void)
{
    char ch;
    int n_spaces = 0, n_lines = 0, n_others = 0;

    printf("Please enter the string:\n");
    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
            n_spaces++;
        else if (ch == '\n')
            n_lines++;
        else
            n_others++;
    }

    printf("Space = %d, Lines = %d, Others = %d\n", n_spaces, n_lines, n_others);
}