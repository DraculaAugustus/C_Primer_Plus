#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[40];
    printf("Please enter the words: ");
    scanf("%s", words);

    printf("The word you enter is: %s\n", words);
    printf("The reverse word you enter is: %zd\n", strlen(words));

    for (int i = strlen(words) - 1; i >= 0; i--)    //数组下标最大值 = 数组长度 - 1
        printf("%c", words[i]);
    printf("\n");

    return 0;
}