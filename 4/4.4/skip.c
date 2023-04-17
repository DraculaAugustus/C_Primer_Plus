#include <stdio.h>
//  scanf()中*的用法：把*放在%和转换字符之间时，会使得scanf()跳过相应的输入项

int main(void)
{
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);    //  跳过前两个整数，把第3个整数拷贝给n

    printf("The last interger is: %d\n", n);

    return 0;
}