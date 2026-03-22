#include<stdio.h>

int main() {
    int arr[3][4]= {{0,1,1,1},{1,0,0,1},{1,1,1,1}};
    // 0 1 1 1 -> 3
    // 1 0 0 1 -> 2
    // 1 1 1 1 -> 4
    int maxCount = 0;
    int maxInd = -1;
    for(int i=0; i<3; i++) {
        int Count = 0;
        for(int j=0; j<4; j++) {
            if(arr[i][j] == 1) Count++;
        }
        if(maxCount<Count) {
            maxCount = Count;
            maxInd = i;
        }
        printf("\n");
    }
    printf("%d",maxInd);
    return 0;
}