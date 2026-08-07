#include <stdio.h>

main()
{

    int size, i;

    printf("enter the array's size: ");
    scanf("%d", &size);

    int a[size];

     printf("enter array's alement: \n");

    for (i = 0; i < size; i++)
    {
         printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("negative elements from an array: ");
    for (i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }
}