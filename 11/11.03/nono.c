#include <stdio.h>

int main(void)
{
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'}; // 这是字符数组，字符串应写成 char dont[] = "WOW!";
    char side_b[] = "Side B";

    puts(dont);
    
    return 0;
}