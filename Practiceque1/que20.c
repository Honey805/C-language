#include<stdio.h>

main(){

    int age;

    printf("enter age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("person is an adult");
    }
    else{
        printf("person is a minor");
    }
}