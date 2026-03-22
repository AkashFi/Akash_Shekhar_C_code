#include<stdio.h>

int main() {
    int a[50][50],b[50][50],r,c,i,j;
    printf("Enter row : ");
    scanf("%d",&r);
    printf("Enter column : ");
    scanf("%d",&c);

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("Enter a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            b[j][i]=a[i][j];
        }
       
    }
    for(i=0; i<c; i++) {
        for(j=0; j<r; j++) {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}