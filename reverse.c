#include<stdio.h>

int main() {
    int n,r,rev=0; // r is remainder and rev is reverse 
    printf("enter n : ");
    scanf("%d",&n);

    while(n>0) {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse number is : %d",rev);
    return 0;
}