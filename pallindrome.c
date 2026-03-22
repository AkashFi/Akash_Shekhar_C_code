#include<stdio.h>

int main() {
    int n,r,rev=0,n1; // r is remainder and n1 is for store n
    printf("Enter n : ");
    scanf("%d",&n);
    n1=n;

    while(n>0) {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("rev is : %d\n",rev);
    if(rev==n1) {
        printf("Number is pallindrome ");
    }
    else{
        printf("Number is not pallindrome ");
    }
}