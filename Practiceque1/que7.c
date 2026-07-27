#include<stdio.h>

main(){

    int temp;

    printf("enter temperature: ");
    scanf("%d",&temp);

    if(40<temp){
        printf("temperature is above then 40");
    }
    else{
        printf("temperature is not above then 40");
    }
}