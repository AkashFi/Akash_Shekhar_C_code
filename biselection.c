#include<stdio.h>

int main() {
    int a[50],n,i,key,mid,end,beg,loc=-1;
    printf("Enter number of element : ");
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter searching elements : ");
    scanf("%d",&key);

    beg=0, end=n-1;
    while(beg<=end) {
        mid = (beg+end)/2;
        if(a[mid] == key) {
            loc = mid;
            printf("%d elements is fount at %d index",key,loc);
            break;
        }
        else if(a[mid]>key) {
            end = mid-1;
        }
        else {
            beg = mid+1;
        }
    }
    if(loc == -1) {
        printf("Element is not found");
    }
    return 0;
}