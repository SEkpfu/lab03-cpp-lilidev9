#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0,"");
    double x=0,y;
    do
    {
        y = log(x+1)*sin(x);
        cout << "при x = "<< x << "\t y = " << y << endl;
        x+= 0.5;
    } while (x < 5);

    return 0;
}