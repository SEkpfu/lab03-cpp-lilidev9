#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");

    double S=0;
    int k = 1,n;
    

    cout << "Введите число n \n";
    cin >> n;

    while(k<=n){
        S += 1./(k*2);
        k += 1;
    }

    cout << "Сумма последовательности 1/2 + 1/4 + ... 1/2n = " << S;
    return 0;
}