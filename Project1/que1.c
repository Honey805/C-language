#include<stdio.h>

main(){

    float c,f;
     
    printf("enter temp in celsius: ");
    scanf("%f",&c);

    f=(9.0/5.0*c)+32;

    printf("temp in fahrenhit: %.2f ",f);

}