#include <stdio.h>

void cube(int *p, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", (*p) * (*p) * (*p));
        p++;
    }
}

int main()
{
    int n, i, j;
    
    printf("enter array's size: ");
    scanf("%d", &n);
    int a[n][n];

    printf("enter array element: \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\ncubes of all elements: ");

    cube( &a[0][0] , n * n);

    return 0;
}