#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");

    int k=0;
    double x, mn=99999*99999;

    cout << "Введите 7 чисел \n";

    while(k<7){
        cin >> x;
        if(x < mn)
            mn = x;
        k+=1;
    }

    cout << "Минимальное число = " << mn;
    return 0;
}