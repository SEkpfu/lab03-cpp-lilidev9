#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");

    int otr=0, k=0;
    double x;

    cout << "Введите 7 чисел \n";

    while(k<7){
        cin >> x;
        if(x<0)
            otr += 1;
        k+=1;
    }

    cout << "Кол-во отрицательных чисел = " << otr;
    return 0;
}