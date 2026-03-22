#include<stdio.h>

int main() {
    // char arr[] = "College wallah is the best for coders\0";
    char arr[] = "College wallah is the best for coders";
    int i=0;
    while(arr[i]!='\0') {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}