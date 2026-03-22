#include<stdio.h>
#include<math.h>

int main() {
    float p,r,t,si,ci,a;
    printf("Enter principle value : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    
    si = (p*r*t)/100;
    a = p*pow((1+r/100),t);
    ci = a-p;

    
    printf("Simple interst is =%.2f\n",si);
    printf("compound interest is =%.2f\n",ci);

    return 0;

}