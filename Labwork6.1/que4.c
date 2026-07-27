#include<stdio.h>

main(){

    int n;

    printf("enter any numbar: ");
    scanf("%d",&n);

    while(n>=1){
        if(n%2!=0){
            printf("  %d",n);
        }
        n--;
    }
}