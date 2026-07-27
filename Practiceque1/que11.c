#include <stdio.h>

main()
{

    int a;

    printf("enter value of a: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}