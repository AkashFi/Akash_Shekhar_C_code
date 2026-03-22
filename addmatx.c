#include<stdio.h>

int main() {
    int a[50][50],b[50][50],c[50][50],i,j,r1,c1,r2,c2;
    printf("Enter row and column of 1st matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column of 2nd matrix: ");
    scanf("%d %d",&r2,&c2);

   if(r1==r2 && c1==c2) {
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++) {
            printf("Enter a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++) {
            printf("Enter b[%d][%d] ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
   }
   else {
    printf("Addition of Matrix is not possible ");
   }
   return 0;

}