#include<stdio.h>

int main() {
    int a = 25;
    int* x =&a;
    int** y=&x;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d",**y);
    printf("%p",a); // address of a
    return 0;
}