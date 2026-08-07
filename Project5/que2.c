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

    int max=a[0][0];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]>max){
            max=a[i][j];
            }

        }
    
    }
     printf("the largest element is=%d ",max);


}

