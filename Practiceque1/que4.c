#include<stdio.h>

main(){

    int a;

    printf("enter value of a: ");
    scanf("%d",&a);

    if(a%5==0){
        printf("number is devisible by 5");
    }
    else{
        printf("number is not devisible by 5");
    }
}