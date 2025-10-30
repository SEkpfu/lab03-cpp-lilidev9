#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");

    int n, k=1;
    double x, sqx;

    cout << "Введите числа n и x \n";
    cin >> n >> x;
    sqx = sqrt(x);

    while(k<=n){
        sqx = sqrt(x + sqx);
        k+=1;
    }

    cout << "Значение выражение = " << sqx;
    return 0;
}