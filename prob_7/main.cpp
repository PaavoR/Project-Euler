#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    while(true) {
    int num;
    cout << "Monesko primenumber? ";
    cin>>num;
    vector<int> prime_numbers;
    int tutkittava = 2;
    while (prime_numbers.size() < num) {
        bool on_prime = true;
        for (int i = 2; i < tutkittava; ++i) {
            int jako_jaan = tutkittava % i;
            if (jako_jaan == 0) {
                on_prime = false;
                break;
            }
        }
        if (on_prime)
            prime_numbers.push_back(tutkittava);
        ++ tutkittava;
    }
    cout << prime_numbers.back() << endl;
    }
}
