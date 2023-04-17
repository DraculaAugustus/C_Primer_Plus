#include <stdio.h>

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