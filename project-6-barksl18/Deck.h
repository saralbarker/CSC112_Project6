#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include "CardInformation.h"

class Deck {
public:
    Deck();
    string dealOneCard();
    void shuffle();
    int getCardsLeft();
    void printDeck();

private:
    Card* cards;
    int arraySize;
    int cardsLeft;
};

#endif