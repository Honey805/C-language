#include<stdio.h>

main(){

    int n;

    printf("enter any number: ");
    scanf("%d",&n);

    do{
        if(n%2!=0){
            printf("%d",n);
        }
        n--;
    }
    while(n>=1);
}
