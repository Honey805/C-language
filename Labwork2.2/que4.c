#include<stdio.h>

main(){

    float p,r,n;
    float interest;


    printf("enter principal amount; ");
    scanf("%f",&p);

    printf("enter rate of interest: ");
    scanf("%f",&r);

    printf("enter time; ");
    scanf("%f",&n);

    interest=p*r*n/100;
    printf("intererst %.2f",interest);








}