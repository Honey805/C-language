#include<stdio.h>

main(){

    int n;

    printf("enter any number: ");
    scanf("%d",&n);

    for(n;n>=1;n--){
        if(n%2!=0){
            printf("  %d",n);
        }
    }


}