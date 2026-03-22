#include<stdio.h>
#include<string.h>

int main() {
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    } pokemon;
    
    typedef struct legendarypokemon{
        pokemon basic;
        char ability[10];
    } legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.basic.attack = 130;
    mewtwo.basic.hp = 80;
    mewtwo.basic.speed = 100;
    strcpy(mewtwo.basic.name,"Mewtwo");
    return 0;
}