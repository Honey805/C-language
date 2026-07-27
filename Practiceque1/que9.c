#include<stdio.h>

main(){

    char ch;

    printf("enter password: ");
    scanf("%c",&ch);

    if(8<ch){
        printf("valid password");
    }
    else{
        printf("invalid password");
    }
}