#include<stdio.h>
#include<limits.h>

int main()  {
    int arr[7]= {3,2,5,32,43,55,33};
    int max = arr[0]; // or INT_MIN // sabse chhota number
    for(int i=0; i<=6; i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
    
}