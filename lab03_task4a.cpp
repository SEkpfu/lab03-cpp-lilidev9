#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");

    int n, k=1;
    double x, cosx;

    cout << "Введите числа n и x \n";
    cin >> n >> x;
    cosx = cos(x);

    while(k<=n){
        cosx = cos(x + cosx);
        k+=1;
    }

    cout << "Значение выражение = " << cosx;
    return 0;
}