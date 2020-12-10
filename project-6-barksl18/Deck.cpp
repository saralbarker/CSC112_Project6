#include "Deck.h"

#include "CardInformation.h"
#include <iostream>
#include <cstdlib> // for random number generation support
using namespace std;

Deck :: Deck() {
    arraySize = 52;
    cardsLeft = 0;

    int i;
    int j;

    cards = new Card[arraySize];

    for (i = 0; i < 4; i++) { //suits
        for (j = 0; j < 13; j++) { //ranks
            Card card1(ranks[j],suits[i]);
            cards[cardsLeft] = card1;
            cardsLeft++;
        }
    }
}

string Deck :: dealOneCard() {
    cardsLeft--;
    return cards[cardsLeft].getCardString();
}

void Deck :: shuffle() {
    for (int i = 0; i < (cardsLeft * cardsLeft); i++) {
        int rand1 = rand()%cardsLeft;
        int rand2 = rand()%cardsLeft;

        swap(cards[rand1],cards[rand2]);
    }
}

int Deck :: getCardsLeft() {
    return cardsLeft;
}

void Deck :: printDeck() {
    for (int i = 0; i < cardsLeft; i++) {
        cout << cards[i].getCardString() << endl;
    }
}
