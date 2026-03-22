# include<stdio.h>

// We printf Halfpyramid

int main() {
    // We take value from user
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    // Apply for loop 

    for(int i=1; i<=n; i++) {
        for( int j=1; j<=i; j++) {

            // Here we print "*"
            printf("* ");

        }
        // For next line
        printf("\n");
    }
    return 0;
}