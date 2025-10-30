#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main()
{
    double x = -1.5, y ;
    while(x <= 1.5){

        if(x>1)
            cout <<"при x = " << x << "\t y = " << 1 + sqrt(abs(cos(x))) << endl;
        else
            if(x < -0.5)
                cout <<"при x = " << x << "\t y = " << 1 - x*x << endl;
            else
                 cout <<"при x = " << x << "\t y = " << x+1 << endl;
        x+=0.25;
    }
    return 0;
}