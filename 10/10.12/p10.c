#include <stdio.h>

#define SIZE    4
void array_add(const int *pt1, const int *pt2, int *pt3, int n);
void show(const int *pt, int n);

int main(void)
{
    int array1[SIZE] = {2, 4, 5, 8};
    int array2[SIZE] = {1, 0, 4, 6};
    int array3[SIZE];

    array_add(array1, array2, array3, SIZE);

    printf("array1 : \n");
    show(array1, SIZE);
    printf("array2 : \n");
    show(array2, SIZE);
    printf("array3 : \n");
    show(array3, SIZE);

    return 0;
}

void array_add(const int *pt1, const int *pt2, int *pt3, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *pt3++ = *pt1++ + *pt2++; // pt3[i] = pt1[i] + pt2[i];
}
void show(const int *pt, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%5d ", *pt++/*pt[i]*/);
    printf("\n");
}