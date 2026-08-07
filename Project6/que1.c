#include <stdio.h>

main()
{

    char str[100];
    int i, len = 0, p = 1;

    printf("enter any string: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            p = 0;
            break;
        }
    }
    if (p == 1)
    {
        printf("the given string is palindrome");
    }
    else
    {

        printf("the given string is not palindrome");
    }
}