#include <stdio.h>

int main(void)
{
    char fname[40], lname[40];
    
    printf("Please enter your first name:\n");
    scanf("%s", fname);
    printf("Please enter your last name:\n");
    scanf("%s", lname);

    printf("%s %s", fname, lname);

    return 0;
}