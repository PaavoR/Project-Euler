#include <iostream>

using namespace std;

int main()
{
    long int num;
    // Ratkeaa summakaavoilla mukavasti
    while (true) {
        cout << "Syötä numero: ";
        cin >> num;
        long int nelio_summa = (num * (num + 1)*(2 * num + 1)) / 6;
        long int summan_nelio = (num*(num+1)) / 2;
        summan_nelio = summan_nelio * summan_nelio;
        cout << summan_nelio << "-"<<nelio_summa << "="<<summan_nelio -nelio_summa<<endl;
    }
    }
