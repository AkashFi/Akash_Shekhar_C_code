#include<stdio.h>
#include<stdbool.h>

int main() {
    int arr[7] = {12,34,24,54,66,43,33};
    int x=34;
    int idx = -1;
    bool flag = false; // false means not presnt
    for(int i=0; i<=6; i++) {
        if(arr[i]==x) {
            flag =  true; // true means present
            idx = i;
            break;
        }
    }
    if(flag=false) {
        printf("%d is not present in the array ",x);
    }
    else{
        printf("%d is present in the array and index is %d",x,idx);
    }
    return 0;
}