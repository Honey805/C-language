#include<stdio.h>

main(){

    int r,c,i,j;

    printf("enter array's row size: ");
    scanf("%d",&r);

    printf("enter array's column size: ");
    scanf("%d",&c);

    int a[r][c];

    printf("enter array's element: \n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the transpose matrix of an array: \n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}