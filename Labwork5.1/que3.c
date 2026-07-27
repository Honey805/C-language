#include<stdio.h>

main(){

    int sub1,sub2,sub3;
    float average;

    printf("enter marks of sub1: ");
    scanf("%d",&sub1);

    printf("enter marks of sub2: ");
    scanf("%d",&sub2);

    printf("enter marks of sub3: ");
    scanf("%d",&sub3);

    average=(sub1+sub2+sub3)/3.0;

    if(sub1<100 && sub2<100 && sub3<100){
        printf("average marks=%.2f",average);
    }

    else{
        printf("error: marks should be less then 100.\n");
    }




}