#include<stdio.h> 

int main() {
    struct pokemon{ // user defined data type
        int hp;
        int attack;
        int speed;
        char tier; // S,A,B,C,D
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 115;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';
    
    printf("%d",charizard.hp);
    
    return 0;
}