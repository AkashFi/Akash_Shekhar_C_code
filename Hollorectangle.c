# include<stdio.h>
int main() {
    int n;  // n = number of row 
    int m;  // m = number of column
    printf("enter n : ");
    scanf("%d", &n);
    printf("enter m : ");
    scanf("%d", &m);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(i ==1 || j == 1 || i == n || j == m) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;

}