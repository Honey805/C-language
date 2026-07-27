#include<stdio.h>

main(){

    int marks;

    printf("enter marks of student: ");
    scanf("%d",&marks);

    if(marks>=35){
        printf("student has passed");
    }
    else{
        printf("student has failed");
    }
}