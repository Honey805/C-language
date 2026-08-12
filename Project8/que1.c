#include<stdio.h>

main(){

    char str[100];
    char *p;
    int length=0;

    printf("enter any string: ");
    gets(str);

    p=str;

    while(*p!='\0'){
        length++;
        p++;
    }

    printf("the length of string is: %d",length);


}