#include "pokerhand.h"

PokerHand::PokerHand(std::string handString)
{
    std::regex r("([2-9]{1}|[JQKA]{1}|10{1})([HDCS]{1})");
    std::smatch m;
    std::regex_search (handString,m,r);
    while (std::regex_search (handString,m,r)) {
            std::string value = m[1];
            std::string suit = m[2];
            // std::cout <<m[1]<<" "<<m[2] << std::endl;

            int valueInt;
            if (value == "J")
                valueInt = 11;
            else if (value == "Q")
                valueInt = 12;
            else if (value == "K")
                valueInt = 13;
            else if (value == "A")
                valueInt = 14;
            else
                valueInt = std::stoi(value);

            Card card;
            card.suit = suit;
            card.value = valueInt;

            cards_.push_back(card);

            handString = m.suffix();
    }
}

void PokerHand::printHand()
{
    std::cout << "Cards in hand: "<< std::endl;
    for(auto i = cards_.begin();i != cards_.end(); ++i) {
        std::cout <<i->value <<" "<<i->suit<<  std::endl;
    }
}

void PokerHand::sortHand()
{
    std::sort(cards_.begin(),cards_.end(),sortCards);
}

bool sortCards(Card a, Card b)
{
    return a.value < b.value;
}
