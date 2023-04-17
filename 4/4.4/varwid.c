#include <stdio.h>
//  printf()的*修饰符：用*代替字段宽度

int main(void)
{
    unsigned int width, precision;
    int num = 256;
    float weight = 242.5;

    printf("What field width?\n");
    scanf("%u", &width);
    printf("The numble is: *%*d*\n", width, num);

    printf("Now enter a width and a precision:\n");
    scanf("%u %u", &width, &precision);
    printf("Weigh = *%*.*f*\n", width, precision, weight);  //宽度不够将自动补全

    return 0;
}