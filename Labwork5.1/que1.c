#include<stdio.h>

main(){

    int a,b;

    printf("enter value of a: ");
    scanf("%d",&a);

    printf("enter value of b: ");
    scanf("%d",&b);

    if(a<b){
        printf("the minimum value is: %d",a);
    }

    else{
        printf("the minimum value is: %d",b);
        
    }
}