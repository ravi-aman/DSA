#include <stdio.h>
#include <string.h>
typedef float realNUmber;
typedef int intt;

typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

void display(pokemon arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s \n", arr[i].name);
        printf("speed : %d \n", arr[i].speed);
        printf("Attack : %d \n", arr[i].attack);
        printf("hp : %d \n", arr[i].hp);
        printf("tier : %c \n", arr[i].tier);  // Changed %d to %c for tier since it is a character

        printf("\n\n");
    }
}

int main()
{

    int x;
    realNUmber y = 3.1415;
    intt a = 654;

    // struct Book
    // {
    //     char name[50];
    //     int noOfpages;
    //     float price;
    // }a,b,c;

    // struct Book d,e,f;

    typedef struct Book
    {
        char name[50];
        int noOfpages;
        float price;
    } b;

    // struct Book d,e,f; sssss

    // pokemon arr[3];

    // strcpy(arr[0].name, "charlizard");
    // arr[0].attack = 50;
    // arr[0].hp = 100;
    // arr[0].speed = 30;
    // arr[0].tier = 'A';

    // strcpy(arr[1].name, "pikachu");
    // arr[1].attack = 1000;
    // arr[1].hp = 1789;
    // arr[1].speed = 34530;
    // arr[1].tier = 'X';

    // strcpy(arr[2].name, "bulbasores");
    // arr[2].attack = 650;
    // arr[2].hp = 1500;
    // arr[2].speed = 30;
    // arr[2].tier = 'Z';

     pokemon arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d enter the name of pokemon: ", i + 1);
        scanf("%s", arr[i].name);
        printf("%d enter the speed of pokemon: ", i + 1);
        scanf("%d", &arr[i].speed);
        printf("%d enter the attack of pokemon: ", i + 1);
        scanf("%d", &arr[i].attack);
        printf("%d enter the hp of pokemon: ", i + 1);
        scanf("%d", &arr[i].hp);
        printf("%d enter the one word tier of pokemon: ", i + 1);
        scanf(" %c", &arr[i].tier);

        printf("\n\n");
    }

    display(arr, 3);

    return 0;
}