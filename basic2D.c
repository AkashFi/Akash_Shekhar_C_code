#include<stdio.h>
int main() {
    int r;
    printf("Enter row : ");
    scanf("%d",&r);
    int c;
    printf("Enter column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}