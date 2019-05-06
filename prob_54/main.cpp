#include "pokerhand.h"

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    PokerHand* test = new PokerHand(std::string("5H QS 8S 6D 3C 8C JD AS 7H 7D"));
    test->printHand();
    test->sortHand();
    test->printHand();
    std::bitset<24> b1(0);
    std::cout << b1 << std::endl;
    b1.set(3);
    std::cout << b1 << std::endl;

}
