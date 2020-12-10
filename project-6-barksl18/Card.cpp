#include "Card.h"

Card::Card() {
    rank = "Ace";
    suit = "Clubs";
}

Card::Card(string rankArg, string suitArg) {
    rank = rankArg;
    suit = suitArg;
}

string Card::getCardString() {
    return getRank() + " of " + getSuit();
}

void Card::setSuit(string suitArg) {
    suit = suitArg;
}

string Card::getSuit() {
    return suit;
}

void Card::setRank(string rankArg) {
    rank = rankArg;
}

string Card::getRank() {
    return rank;
}