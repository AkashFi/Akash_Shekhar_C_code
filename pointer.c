#include<stdio.h>

typedef int* int_pointer;
int main() {
    int x=5,y=3; // int x=5 and int y=3
    // int* x,y; means int* x and int y
    int_pointer a = &x,b = &y; // int* x and int* y
    printf("%p\n",a);
    printf("%p\n",b);


    return 0;
}