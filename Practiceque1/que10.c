#include<stdio.h>

main(){

    int quantity;

    printf("enter product quantity: ");
    scanf("%d",&quantity);

    if(quantity>0){
        printf("product is in stock");
    }
    else{
        printf("product is out of stock");
    }
}