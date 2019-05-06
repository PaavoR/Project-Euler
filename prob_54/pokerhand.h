#ifndef POKERHAND_H
#define POKERHAND_H

#include <string>
#include <regex>
#include <iostream>

struct Card
{
    int value;
    std::string suit;
};

bool sortCards(Card a, Card b);
class PokerHand
{
public:
    PokerHand(std::string handString);
    void printHand();
    void sortHand();
private:
    std::vector<Card> cards_;

};

#endif // POKERHAND_H
