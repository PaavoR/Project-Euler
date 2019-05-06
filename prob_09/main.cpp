#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int b = 1;
    while(true) {
    for (int a = 1; a < b ; ++a) {
        if ((a + b + std::sqrt(a*a + b*b)) == 1000) {
            std::cout << a << " " << b << " " << std::sqrt(a*a + b*b) << endl<<a*b*std::sqrt(a*a + b*b);
            return 0;
        }

    }
    ++b;
    }
}
