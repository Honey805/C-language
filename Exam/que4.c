#include <stdio.h>

int main()
{

    int size, a[100], i;
    int *p;

    p = a;

    printf("enter size of array: ");
    scanf("%d", &size);

    printf("enter array's elements: \n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d ", p + i);
    }

    printf("squere of each element: \n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(p + i) * *(p + i));
    }
    return 0;
}