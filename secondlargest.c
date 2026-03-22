#include<stdio.h>
#include<limits.h>

int main() {
    int arr[7] = {2,6,5,4,7,9,3};
    int max = INT_MIN; // sabse chhota number
    int smax = INT_MIN;
    for(int i=0; i<=6; i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    for(int i=0; i<=6; i++) {
        if(arr[i]!=max && smax<arr[i]) {
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}