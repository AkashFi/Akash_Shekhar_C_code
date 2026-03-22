#include<stdio.h>

int main() {

    int arr[5]= {3,4,5,6,7};
    arr[2] = 100; // {3,4,100.6,7}
    printf("%d",arr[2]);
    return 0;
}