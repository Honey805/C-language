#include<stdio.h>

main(){

    char ch;

    printf("enter character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("character is an upercase letter");
    }
    else{
        printf("character is a lowercase letter");
    }

}