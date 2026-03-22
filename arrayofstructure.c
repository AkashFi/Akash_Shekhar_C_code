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

    pokemon arr[3];
    arr[0].hp = 80;
    arr[0].speed = 100;
    arr[0].attack = 120;
    arr[0].tier = 'S';
    strcpy(arr[0].name,"Charizard");

    arr[1].hp = 70;
    arr[1].speed = 110;
    arr[1].attack = 100;
    arr[1].tier = 'A';
    strcpy(arr[1].name,"Mewtwo");

    arr[2].hp = 90;
    arr[2].speed = 90;
    arr[2].attack = 130;
    arr[2].tier = 'B';
    strcpy(arr[2].name,"Pikachu");

    for(int i=0; i<3; i++) {
        printf("%s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].attack);
        printf("HP : %d\n",arr[i].hp);
        printf("Tier : %c\n",arr[i].tier);
    }
    return 0;
}