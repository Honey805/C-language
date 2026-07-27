#include<stdio.h>

main(){

    int a,b;

    printf("enter first number: ");
    scanf("%d",&a);

    printf("enter second number: ");
    scanf("%d",&b);

    if(a>b){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
}