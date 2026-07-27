#include<stdio.h>

main(){

    int a,b,c;

    printf("enter value of the first number: ");
    scanf("%d",&a);

    printf("enter value of the second number: ");
    scanf("%d",&b);

    printf("enter value of the third number: ");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            printf("minimum value=%d",a);
        }
        else{
            printf("minimum value=%d",c);
        }
    }
    else{
        if(b<c){
            printf("minimum value=%d",b);
        }
        else{
            printf("minimum value=%d",c);
        }
    }
      
    
}