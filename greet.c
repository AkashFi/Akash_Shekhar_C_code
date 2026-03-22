#include<stdio.h>

void greet(){ // External function
    printf("hellow\n");
    printf("How are you\n");
     return; // khatm

}

int main() {

    greet(); // call
    greet();
    return 0;
}