#include <stdio.h>

int main(void)
{
    int i, j, num;
    char c;
    printf("Enter the core char you want to print(A...Z): ");
    scanf("%c", &c);
    char ch = 'A';
    num = c - ch + 1; // 行数，及从A打印的总字数

    for (i = 1; i <= num; i++)
    {
        for (j = 0; j < num - i; j++)
            printf(" ");
        for (ch = 'A'; j < num; j++)
            printf("%c", ch++);
        for (j = 1, ch -= 2; j < i; j++, ch--)
            printf("%c", ch);
        printf("\n");
    }
    /*
        i = 1, j = 0, j < 4,--->j = 4, ch = A, 4 < 5, ch = A;
        i = 2, j = 0, j < 3,--->j = 3, ch = A, 3 < 5, ch = B, ch = C, j = 5--->j = 1, ch = A, 1 < 2;
        i = 3, j = 0, j < 2,--->j = 2, ch = A, 2 < 5, ch = C, ch = D, j = 5--->j = 1, ch = B, 1 < 3, j = 2, ch = A;
        i = 4, j = 0, j < 1,--->j = 1, ch = A, 1 < 5, ch = D, ch = E, j = 5--->j = 1, ch = C, 1 < 4, j = 2, ch = B, 2 < 4, j = 3, ch = A;
        i = 5, j = 0; j < 0,--->j = 0, ch = A, 0 < 5, ch = E, ch = F, j = 5--->j = 1, ch = D, 1 < 5, j = 2, ch = C, 2 < 5, j = 3, ch = B, 3 < 5, j = 4, ch = A;
    */

    return 0;
}

/*
int main(void)
{
    char ch1 = 'A';
    char ch2;

    printf("Enter the core char you want to print(A...Z): ");
    scanf("%c", &ch2);
    int num = ch2 - ch1;    //num = 'E' - 'A' = 69 - 65 = 4

    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < num - i; j++)   //打印空格，使字母居中
            printf(" ");
        for (int k = 0; k <= i; k++)    //升序打印字母
            printf("%c", ch1+k);
        for (int m = i;  m > 0; m--)    //降序打印字母
            printf("%c", ch1+m-1);
        printf("\n");
    }

    return 0;
}
*/