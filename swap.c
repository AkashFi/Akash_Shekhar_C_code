#include<stdio.h>

int main() {
    int a = 2;
    int b = 9;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("swap of a is %d\n",a);
    printf("swap of b is %d\n",b);
    return 0;
}