#include<stdio.h>

main(){

    int a,b,c,d;

    printf("enter value of first number: ");
    scanf("%d",&a);

    printf("enter value of second number: ");
    scanf("%d",&b);

    printf("enter value of third numbar: ");
    scanf("%d",&c);

    printf("enter value of fourth number: ");
    scanf("%d",&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("maximum value=%d",a);
            }
            else{
                printf("maximum number=%d",d);
            }
        }
        else{
            if(c>d){
                printf("maximum number=%d",c);

            }
            else{
                printf("maximum number=%d",d);
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                printf("maximum number=%d",b);
            }
            else{
                printf("maximum number=%d",d);
            }
        }
        else{
            if(c>d){
                printf("maximum number=%d",c);
            }
            else{
                printf("maximum number=%d",d);
            }
        }

    }


}