#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");

    int k=0;
    double x, sm=0;

    cout << "Введите 7 чисел \n";

    while(k<7){
        cin >> x;
        if(10<= abs(x) && abs(x) <= 99)
            sm += x;
        k+=1;
    }

    cout << "Сумма двухзначных чисел = " << sm;
    return 0;
}