#include <iostream>
#include <cassert>
#include "Deck.h"
using namespace std;

int main(int argc, char* argv[]) {

    //card
    cout << "Beginning tests of Card methods default constructor, getRank(), getSuit(), and getCardString()" << endl;
    Card card1;
    assert(card1.getRank() == "Ace");
    assert(card1.getSuit() == "Clubs");
    assert(card1.getCardString() == "Ace of Clubs");
    cout << "Passed tests of Card methods constructor, getRank(), getSuit(), and getCardString()" << endl;
    cout << endl;

    cout << "Beginning tests of Card methods default setRank() and setSuit()" << endl;
    card1.setRank("Jack");
    card1.setSuit("Diamonds");
    assert(card1.getRank() == "Jack");
    assert(card1.getSuit() == "Diamonds");
    assert(card1.getCardString() == "Jack of Diamonds");
    cout << "Passed tests of Card methods default setRank() and setSuit()" << endl;
    cout << endl;

    cout << "Beginning test of Card method two argument constructor" << endl;
    Card card2("2","Spades");
    assert(card2.getRank() == "2");
    assert(card2.getSuit() == "Spades");
    assert(card2.getCardString() == "2 of Spades");
    cout << "Passed test of Card method two argument constructor" << endl;
    cout << endl;

    //deck
    cout << "Beginning tests of Deck method default constructor" << endl;
    Deck deck1;
    deck1.printDeck();
    cout << "You should verify the cards are printed in the appropriate order as shown in the CardInformation.h file" << endl;
    cout << endl;

    cout << "Beginning tests of Deck method dealOneCard() and getCardsLeft()" << endl;
    string cardValue = deck1.dealOneCard();
    assert(cardValue == "Queen of Spades");
    assert(deck1.getCardsLeft() == 51);
    cardValue = deck1.dealOneCard();
    assert(cardValue == "King of Spades");
    assert(deck1.getCardsLeft() == 50);
    cout << "Passed tests of Deck method dealOneCard() and getCardsLeft()" << endl;
    cout << endl;

    cout << "Beginning test of Deck method shuffle()" << endl;
    cout << "Printing deck before shuffle" << endl;
    deck1.printDeck();
    cout << endl;
    deck1.shuffle();
    cout << "Printing deck after shuffle" << endl;
    deck1.printDeck();
    cout << endl;
}