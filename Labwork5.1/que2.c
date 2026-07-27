#include<stdio.h>

main(){

    int a,answer;

    printf("enter any number: ");
    scanf("%d",&a);

    if(a<0){
        printf("this number is negative");
     }

    else if(a==0){
        printf("this numbar is neutral");
    }

    else{
        printf("this number is positive");
    }

}