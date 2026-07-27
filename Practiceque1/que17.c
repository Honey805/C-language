#include<stdio.h>

main(){

    char ch;

    printf("enter character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("character is vowel");
    }
    else{
        printf("character is consonent");
    }
}