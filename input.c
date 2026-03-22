#include<stdio.h>

int main() {
    char str[40];
    // scanf("%s",str); // only the first word will consider
    gets(str); // Entire sentances will consider
    // printf("your input was : %s",str);
    puts(str); 
    return 0;
}