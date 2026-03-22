# include<stdio.h>

int main() {
    int n = 5;

    // Upper half

    for(int i=1; i<=n; i++) {
        // 1st part
        for(int j=1; j<=i; j++) {
            printf("*");
        }

        // spaces
        int spaces = 2 *(n-i);
        for(int j=1; j<=spaces; j++) {
            printf(" ");
        }
        // 2nd part
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }

        // spaces
        int spaces = 2 *(n-i);
        for(int j=1; j<=spaces; j++) {
            printf(" ");
        }
        // 2nd part
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}