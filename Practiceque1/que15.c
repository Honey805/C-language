#include<stdio.h>

main(){

    int age;

    printf("enter age of person: ");
    scanf("%d",&age);

    if(18<=age){
        printf("eligible for a driving license");
    }
    else{
        printf("not eligible for a driving license");
    }
}