#include <stdio.h>

main()
{

    int size, i, largest;

    printf("enter size of array: ");
    scanf("%d", &size);

    int a[size];

    printf("enter array's elements: \n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < size; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    printf("largest element= %d", largest);
}