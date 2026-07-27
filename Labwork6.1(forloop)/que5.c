#include<stdio.h>

main(){

    int first,second;

    printf("enter first year: ");
    scanf("%d",&first);

    printf("enter second year: ");
    scanf("%d",&second);

    for(; first<=second;first++){
        if((first%400==0) || (first%4==0 && first%100!=0)){
            printf("  %d",first);
        }
    }
}