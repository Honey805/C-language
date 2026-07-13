#include<stdio.h>

main(){

    float base,hra_p,da_p,ta_p;
    float hra,da,ta,gross;

    printf("enter value of base: ");
    scanf("%f",&base);

    printf("enter value of hra_p: ");
    scanf("%f",&hra_p);

    printf("enter value of da_p: ");
    scanf("%f",&da_p);

    printf("enter value of ta_p: ");
    scanf("%f",&ta_p);

    hra=base*hra_p/100;
    da=base*da_p/100;
    ta=base*ta_p/100;

    gross=base+hra+da+ta;

    printf("gross salary rs=%.0f",gross);
}