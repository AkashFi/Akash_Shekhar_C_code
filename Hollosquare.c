# include<stdio.h>

// Here we print Hollosquare

int main() {
    int n;
    // Input value for square
    printf("Enter n : ");
    scanf("%d", &n);

    // For loop for sqaure

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            // Condition for blank space
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                // For blank space print
                printf("  ");
            }
        }
        // for next line
        printf("\n");
    }
    return 0;
}
   
