#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
public:
    Card();
    Card(string rankArg, string suitArg);
    void setSuit(string suitArg);
    string getSuit();
    void setRank(string rankArg);
    string getRank();
    string getCardString();

private:
    string rank;
    string suit;
};

#endif