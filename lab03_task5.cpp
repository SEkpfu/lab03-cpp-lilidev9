#include <iostream>

using namespace std;

int main()
{
    double x = 1, E = 0.001, sm = 0;
    while( 1./x > E){
        sm += 1./x;
        if(1./(x+2) > E)
            sm -= 1./(x+2);
        x+=4;
    }
    cout << sm;
    return 0;
}