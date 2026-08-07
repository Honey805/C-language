#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{

    int choice, a, b;

    while (1)
    {

        printf("press 1 for +\n");
        printf("press 2 for _\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 5 for %%\n");
        printf("press 0 for exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("program ended\n");
            break;
        }

        printf("enter first number: ");
        scanf("%d", &a);

        printf("enter second number: ");
        scanf("%d", &b);

        switch (choice)
        {

        case 1:
            printf("addition=%d\n", add(a, b));
            break;

        case 2:
            printf("substraction=%d\n", sub(a, b));
            break;

        case 3:
            printf("multiplication=%d\n", mul(a, b));
            break;

        case 4:
            if (b == 0)
            {
                printf("division by zero is not possible.\n");
            }
            else
            {
                printf("division=%d\n", div(a, b));
                break;
            }

        case 5:
            if (b == 0)
            {
                printf("modulo by zero is not possible.\n");
            }
            else
            {
                printf("modulo=%d\n", mod(a, b));
                break;
            }

        default:
            printf("invalid choice!\n");
        }
    }
    return 0;
}