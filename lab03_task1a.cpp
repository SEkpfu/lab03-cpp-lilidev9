#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"");
    double c = 0, f;
    while (c<=100)
    {
        f = 9./5.*c + 32;
        cout << "tc = " << c << ", tf = " << f << endl;
        c += 10;
    }
    return 0;
}