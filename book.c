#include<stdio.h>
#include<string.h>

int main() {
    struct book{
        char name[50];
        float price;
        int pages;
    } a,b,c;

    a.pages = 120;
    a.price = 200;
    // a.name = "Secret Seven";
    strcpy(a.name,"Secret Seven");

    printf("%d\n",a.pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    return 0;
}