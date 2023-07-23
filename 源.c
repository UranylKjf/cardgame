#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void PrintCard(int card, int suit);
void PrintResult(int card1, int suit1, int card2, int suit2);
int main()
{
    int suit1 =2;
    int card1 =2;
    int suit2 =2;
    int card2 =2;
    srand(time(NULL));
    suit1 = rand() % 4;
    card1 = rand() % 13 + 1;
    suit2 = rand() % 4;
    card2 = rand() % 13 + 1;
    if (card1 != card2 && suit1 != suit2) {
        PrintCard(card1, suit1);
        printf("\n");
        PrintCard(card2, suit2);
        printf("\n");
    }
    PrintResult(card1, suit1, card2, suit2);
	return 0;
}
void PrintCard(int card, int suit)
{
    switch (card)
    {
    case 1: {
        printf("Ace");
        break; }
    case 2: {
        printf("2");
        break; }
    case 3: {
        printf("3");
        break; }
    case 4: {
        printf("4");
        break; }
    case 5: {
        printf("5");
        break;
    }
    case 6: {
        printf("6");
        break;
    }
    case 7: {
        printf("7");
        break;
    }
    case 8: {
        printf("8");
        break;
    }
    case 9: {
        printf("9");
        break;
    }
    case 10: {
        printf("10");
        break;
    }

    case 11: {
        printf("Jack");
        break; }

    case 12: {
        printf("Queen");
        break; }

    case 13: {
        printf("King");
        break; }
    }
    printf(" of ");
    switch (suit)
    {
    case 0:
        printf("Hearts");
        break;

    case 1:
        printf("Diamonds");
        break;

    case 2:
        printf("Spades");
        break;

    case 3:
        printf("Clubs");
        break;
    }
}
void PrintResult(int card1, int suit1, int card2, int suit2) {
    if (card1 == 1 && card2 != 1) {
        printf("玩家一获胜");
    }

    else if (card2 ==1 && card1 != 1) {
        printf("玩家二获胜);
    }
    else if (card1 ==  card2 ) {
        if (suit1 < suit2) {
            printf("玩家一获胜");
        }
        else if (suit2 < suit1) {
            printf("玩家二获胜");
        }
        else if (suit1 == suit2) {
            suit1 = rand() % 4;
            card1 = rand() % 13 + 1;
            suit2 = rand() % 4;
            card2 = rand() % 13 + 1;
            PrintCard(card1, suit1);
            printf("\n");
            PrintCard(card2, suit2);
            printf("\n");
            PrintResult(card1, suit1, card2, suit2);
        }
       
    }
    else if (card1 > card2&&card1!=1&&card2!=1) {
        printf("玩家一获胜");
    }
    else if(card2 > card1 && card1!= 1 && card2 != 1) {
        printf("玩家二获胜");
    }
          
}
